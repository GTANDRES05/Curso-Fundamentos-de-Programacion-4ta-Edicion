/*
    ============================================================
    SABOR NOMADA - Sistema de gestion de un Food Truck
    ------------------------------------------------------------
    Mini-Proyecto Integrador C++ | Bootcamp Programacion Cero a POO
    Autor: (tu nombre aqui)
    ============================================================

    Idea del proyecto:
    Un food truck ambulante necesita llevar el control de su menu
    del dia: que platillos ofrece, a que precio, que tan picantes
    son y cuantas unidades ha vendido de cada uno.

    Componente creativo: "Combo Sorpresa del Dia"
    El sistema arma al azar un combo de 2 platillos distintos,
    le aplica un 10% de descuento, evalua si el combo resultante
    es "extremo" (muy picante) o "equilibrado", y ademas registra
    la venta real de ese combo (incrementa las unidades vendidas
    de ambos platillos), lo cual despues se refleja en el reporte
    general. No es solo un mensaje decorativo: modifica los datos.
*/

#include <iostream>
#include <string>
#include <cstdlib>   // rand, srand
#include <ctime>     // time
#include <iomanip>   // setprecision

using namespace std;

const int MAX_PLATILLOS = 20;

// ---------------------------------------------------------
// Prototipos de funciones (ademas de main)
// ---------------------------------------------------------
void mostrarMenu();
int leerEnteroValido(const string& mensaje, int minVal, int maxVal);
float leerFloatValido(const string& mensaje, float minVal, float maxVal);
string aMinusculas(const string& texto);

void registrarPlatillo(string nombres[], float precios[], int picantes[],
                        int vendidos[], int &total);
void mostrarPlatillos(const string nombres[], const float precios[],
                       const int picantes[], const int vendidos[], int total);
int buscarPlatillo(const string nombres[], int total);
void mostrarReporte(const string nombres[], const float precios[],
                     const int vendidos[], int total);
void comboSorpresa(string nombres[], float precios[], int picantes[],
                    int vendidos[], int total);

// ---------------------------------------------------------
// main
// ---------------------------------------------------------
int main() {
    string nombres[MAX_PLATILLOS];
    float precios[MAX_PLATILLOS];
    int picantes[MAX_PLATILLOS];   // nivel de 1 (suave) a 5 (extremo)
    int vendidos[MAX_PLATILLOS];   // unidades vendidas
    int totalRegistros = 0;

    srand(static_cast<unsigned int>(time(0))); // semilla para el combo aleatorio

    int opcion;
    do {
        mostrarMenu();
        opcion = leerEnteroValido("Elige una opcion: ", 1, 6);
        cout << endl;

        switch (opcion) {
            case 1:
                registrarPlatillo(nombres, precios, picantes, vendidos, totalRegistros);
                break;

            case 2:
                mostrarPlatillos(nombres, precios, picantes, vendidos, totalRegistros);
                break;

            case 3: {
                int idx = buscarPlatillo(nombres, totalRegistros);
                if (idx != -1) {
                    cout << "Platillo encontrado en la posicion " << (idx + 1) << ":\n";
                    cout << "  Nombre    : " << nombres[idx] << "\n";
                    cout << fixed << setprecision(2);
                    cout << "  Precio    : $" << precios[idx] << "\n";
                    cout << "  Picante   : " << picantes[idx] << "/5\n";
                    cout << "  Vendidos  : " << vendidos[idx] << " unidades\n";
                } else if (totalRegistros == 0) {
                    cout << "Todavia no hay platillos registrados.\n";
                } else {
                    cout << "No se encontro ningun platillo con ese nombre.\n";
                }
                break;
            }

            case 4:
                mostrarReporte(nombres, precios, vendidos, totalRegistros);
                break;

            case 5:
                comboSorpresa(nombres, precios, picantes, vendidos, totalRegistros);
                break;

            case 6:
                cout << "Cerrando Sabor Nomada. Hasta la proxima ruta! \n";
                break;
        }

        cout << endl;
    } while (opcion != 6);

    return 0;
}

// ---------------------------------------------------------
// Muestra el menu principal
// ---------------------------------------------------------
void mostrarMenu() {
    cout << "==========================================\n";
    cout << "        FOOD TRUCK  -  SABOR NOMADA\n";
    cout << "==========================================\n";
    cout << "1. Registrar un platillo\n";
    cout << "2. Mostrar todos los platillos\n";
    cout << "3. Buscar un platillo\n";
    cout << "4. Mostrar reporte general\n";
    cout << "5. Combo Sorpresa del Dia (creativo)\n";
    cout << "6. Salir\n";
    cout << "------------------------------------------\n";
}

// ---------------------------------------------------------
// Lee un entero validando que este dentro de un rango.
// Controla tambien entradas no numericas (casos borde).
// ---------------------------------------------------------
int leerEnteroValido(const string& mensaje, int minVal, int maxVal) {
    int valor;
    bool valido = false;

    do {
        cout << mensaje;
        cin >> valor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida. Debes ingresar un numero entero.\n";
        } else if (valor < minVal || valor > maxVal) {
            cout << "El valor debe estar entre " << minVal << " y " << maxVal << ".\n";
        } else {
            valido = true;
        }
    } while (!valido);

    cin.ignore(1000, '\n'); // limpia el salto de linea pendiente
    return valor;
}

// ---------------------------------------------------------
// Lee un float validando que este dentro de un rango.
// ---------------------------------------------------------
float leerFloatValido(const string& mensaje, float minVal, float maxVal) {
    float valor;
    bool valido = false;

    do {
        cout << mensaje;
        cin >> valor;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Entrada invalida. Debes ingresar un numero.\n";
        } else if (valor < minVal || valor > maxVal) {
            cout << "El valor debe estar entre " << minVal << " y " << maxVal << ".\n";
        } else {
            valido = true;
        }
    } while (!valido);

    cin.ignore(1000, '\n');
    return valor;
}

// ---------------------------------------------------------
// Convierte un string a minusculas (ayuda para buscar sin
// importar mayusculas/minusculas)
// ---------------------------------------------------------
string aMinusculas(const string& texto) {
    string resultado = texto;
    for (size_t i = 0; i < resultado.size(); i++) {
        resultado[i] = tolower(resultado[i]);
    }
    return resultado;
}

// ---------------------------------------------------------
// Registra un nuevo platillo (respeta el limite maximo)
// ---------------------------------------------------------
void registrarPlatillo(string nombres[], float precios[], int picantes[],
                        int vendidos[], int &total) {
    if (total >= MAX_PLATILLOS) {
        cout << "No se pueden registrar mas platillos. Limite de "
             << MAX_PLATILLOS << " alcanzado.\n";
        return;
    }

    cout << "--- Registrar nuevo platillo ---\n";
    cout << "Nombre del platillo: ";
    string nombre;
    getline(cin, nombre);

    float precio = leerFloatValido("Precio (0.5 - 100.0): ", 0.5f, 100.0f);
    int picante = leerEnteroValido("Nivel de picante (1 = suave, 5 = extremo): ", 1, 5);

    nombres[total] = nombre;
    precios[total] = precio;
    picantes[total] = picante;
    vendidos[total] = 0; // un platillo nuevo inicia sin ventas

    total++;
    cout << "Platillo \"" << nombre << "\" registrado con exito. ("
         << total << "/" << MAX_PLATILLOS << ")\n";
}

// ---------------------------------------------------------
// Muestra todos los platillos registrados
// ---------------------------------------------------------
void mostrarPlatillos(const string nombres[], const float precios[],
                       const int picantes[], const int vendidos[], int total) {
    if (total == 0) {
        cout << "Aun no hay platillos en el menu del food truck.\n";
        return;
    }

    cout << fixed << setprecision(2);
    cout << "--- Menu actual (" << total << " platillos) ---\n";
    for (int i = 0; i < total; i++) {
        cout << (i + 1) << ". " << nombres[i]
             << " | $" << precios[i]
             << " | Picante: " << picantes[i] << "/5"
             << " | Vendidos: " << vendidos[i] << " uds\n";
    }
}

// ---------------------------------------------------------
// Busqueda secuencial de un platillo por nombre
// Retorna el indice si lo encuentra, -1 si no.
// ---------------------------------------------------------
int buscarPlatillo(const string nombres[], int total) {
    if (total == 0) return -1;

    cout << "Nombre del platillo a buscar: ";
    string busqueda;
    getline(cin, busqueda);
    string busquedaMin = aMinusculas(busqueda);

    for (int i = 0; i < total; i++) {
        if (aMinusculas(nombres[i]) == busquedaMin) {
            return i;
        }
    }
    return -1;
}

// ---------------------------------------------------------
// Reporte general: al menos dos calculos sobre los datos
// ---------------------------------------------------------
void mostrarReporte(const string nombres[], const float precios[],
                     const int vendidos[], int total) {
    if (total == 0) {
        cout << "No hay datos suficientes para generar un reporte.\n";
        return;
    }

    float sumaPrecios = 0.0f;
    float ingresosTotales = 0.0f;
    int indiceMasVendido = 0;

    for (int i = 0; i < total; i++) {
        sumaPrecios += precios[i];
        ingresosTotales += precios[i] * vendidos[i];
        if (vendidos[i] > vendidos[indiceMasVendido]) {
            indiceMasVendido = i;
        }
    }

    float precioPromedio = sumaPrecios / total;

    cout << fixed << setprecision(2);
    cout << "--- Reporte general del food truck ---\n";
    cout << "Platillos registrados : " << total << "\n";
    cout << "Precio promedio       : $" << precioPromedio << "\n";
    cout << "Ingresos totales est. : $" << ingresosTotales << "\n";

    if (vendidos[indiceMasVendido] > 0) {
        cout << "Platillo mas vendido  : " << nombres[indiceMasVendido]
             << " (" << vendidos[indiceMasVendido] << " unidades)\n";
    } else {
        cout << "Platillo mas vendido  : aun no se registran ventas.\n";
    }
}

// ---------------------------------------------------------
// COMPONENTE CREATIVO: Combo Sorpresa del Dia
// Elige 2 platillos distintos al azar, calcula su precio con
// 10% de descuento, evalua el nivel de picante combinado y
// registra la "venta" incrementando las unidades vendidas.
// ---------------------------------------------------------
void comboSorpresa(string nombres[], float precios[], int picantes[],
                    int vendidos[], int total) {
    if (total < 2) {
        cout << "Se necesitan al menos 2 platillos registrados para armar un combo.\n";
        return;
    }

    int i = rand() % total;
    int j;
    do {
        j = rand() % total;
    } while (j == i); // asegura dos platillos distintos

    float precioSinDescuento = precios[i] + precios[j];
    float precioCombo = precioSinDescuento * 0.90f; // 10% de descuento
    float picantePromedio = (picantes[i] + picantes[j]) / 2.0f;

    cout << fixed << setprecision(2);
    cout << "*** COMBO SORPRESA DEL DIA ***\n";
    cout << "Incluye: " << nombres[i] << " + " << nombres[j] << "\n";
    cout << "Precio normal : $" << precioSinDescuento << "\n";
    cout << "Precio combo  : $" << precioCombo << " (10% de descuento)\n";
    cout << "Picante combinado promedio: " << picantePromedio << "/5\n";

    if (picantePromedio >= 4.0f) {
        cout << "Advertencia: Combo EXTREMO, solo para valientes!\n";
    } else if (picantePromedio >= 2.0f) {
        cout << "Combo EQUILIBRADO, un buen punto medio de sabor.\n";
    } else {
        cout << "Combo SUAVE, ideal para paladares sensibles.\n";
    }

    // Esta es la parte que hace que el componente realice una
    // operacion real: se registra la venta del combo.
    vendidos[i]++;
    vendidos[j]++;
    cout << "Venta del combo registrada. Las unidades vendidas de ambos "
            "platillos se actualizaron.\n";
}
