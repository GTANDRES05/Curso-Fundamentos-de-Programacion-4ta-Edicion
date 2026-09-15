/*
Nombre del estudiante: Anrd
Fecha: 09/09/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda
*/

#include <iostream>
#include <string>
using namespace std;

// ---------- Constantes globales ----------
const int MAX_ESTUDIANTES = 20;
const int NOTA_MINIMA = 0;
const int NOTA_MAXIMA = 20;
const int NOTA_APROBACION = 14;

// ---------- Prototipos de funciones ----------
int mostrarMenu();
int leerCantidadValida();
int leerNotaValida(string nombreEstudiante);
void registrarEstudiantes(string nombres[], int notas[], int &cantidad);
void mostrarReporte(string nombres[], int notas[], int cantidad);
void buscarEstudiante(string nombres[], int notas[], int cantidad);
bool estaAprobado(int nota);
string obtenerEstado(int nota);

int main() {
    string nombres[MAX_ESTUDIANTES];
    int notas[MAX_ESTUDIANTES];
    int cantidadEstudiantes = 0;   // contador de estudiantes registrados
    bool hayDatos = false;         // bandera: ¿ya se registraron estudiantes?
    int opcion;

    do {
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                registrarEstudiantes(nombres, notas, cantidadEstudiantes);
                hayDatos = true;
                break;

            case 2:
                if (!hayDatos) {
                    cout << "\nTodavia no existen datos registrados.\n";
                } else {
                    mostrarReporte(nombres, notas, cantidadEstudiantes);
                }
                break;

            case 3:
                if (!hayDatos) {
                    cout << "\nTodavia no existen datos registrados.\n";
                } else {
                    buscarEstudiante(nombres, notas, cantidadEstudiantes);
                }
                break;

            case 4:
                cout << "\nSaliendo del programa. Hasta pronto.\n";
                break;
        }

    } while (opcion != 4);

    return 0;
}

// ---------------------------------------------------------
// Muestra el menú, valida la opción (1-4) y la devuelve
// ---------------------------------------------------------
int mostrarMenu() {
    int opcion;

    cout << "\n=========== MENU ===========\n";
    cout << "1. Registrar estudiantes y notas\n";
    cout << "2. Mostrar reporte general\n";
    cout << "3. Buscar estudiante por nombre\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    // Validación de la opción (1-4)
    while (opcion < 1 || opcion > 4) {
        cout << "Opcion invalida. Ingrese un numero entre 1 y 4: ";
        cin >> opcion;
    }

    return opcion;
}

// ---------------------------------------------------------
// Pide la cantidad de estudiantes y la valida entre 1 y 20
// ---------------------------------------------------------
int leerCantidadValida() {
    int cantidad;

    cout << "Ingrese la cantidad de estudiantes (1 a " << MAX_ESTUDIANTES << "): ";
    cin >> cantidad;

    while (cantidad < 1 || cantidad > MAX_ESTUDIANTES) {
        cout << "Cantidad invalida. Ingrese un valor entre 1 y " << MAX_ESTUDIANTES << ": ";
        cin >> cantidad;
    }

    return cantidad;
}

// ---------------------------------------------------------
// Pide una nota y la valida entre 0 y 20 (caso borde incluido)
// ---------------------------------------------------------
int leerNotaValida(string nombreEstudiante) {
    int nota;

    cout << "Nota de " << nombreEstudiante << " (0 a 20): ";
    cin >> nota;

    while (nota < NOTA_MINIMA || nota > NOTA_MAXIMA) {
        cout << "Nota invalida. Ingrese un valor entre 0 y 20: ";
        cin >> nota;
    }

    return nota;
}

// ---------------------------------------------------------
// Registra (o reemplaza) los datos de nombres y notas
// ---------------------------------------------------------
void registrarEstudiantes(string nombres[], int notas[], int &cantidad) {
    cantidad = leerCantidadValida();

    for (int i = 0; i < cantidad; i++) {
        cout << "\n--- Estudiante " << (i + 1) << " ---\n";
        cout << "Nombre: ";
        cin >> nombres[i];
        notas[i] = leerNotaValida(nombres[i]);
    }

    cout << "\nRegistro completado con exito.\n";
}

// ---------------------------------------------------------
// Determina si una nota es de aprobacion (>= 14)
// ---------------------------------------------------------
bool estaAprobado(int nota) {
    return nota >= NOTA_APROBACION;
}

// ---------------------------------------------------------
// Devuelve el texto de estado según la nota
// ---------------------------------------------------------
string obtenerEstado(int nota) {
    if (estaAprobado(nota)) {
        return "APROBADO";
    } else {
        return "REPROBADO";
    }
}

// ---------------------------------------------------------
// Muestra listado, promedio, mayor/menor nota y conteos
// ---------------------------------------------------------
void mostrarReporte(string nombres[], int notas[], int cantidad) {
    int sumaNotas = 0;       // acumulador
    int cantAprobados = 0;   // contador
    int cantReprobados = 0;  // contador

    int indiceMayor = 0;
    int indiceMenor = 0;

    cout << "\n=========== REPORTE GENERAL ===========\n";

    for (int i = 0; i < cantidad; i++) {
        cout << (i + 1) << ". " << nombres[i]
             << " - Nota: " << notas[i]
             << " - Estado: " << obtenerEstado(notas[i]) << endl;

        // Acumular para el promedio
        sumaNotas += notas[i];

        // Contar aprobados y reprobados
        if (estaAprobado(notas[i])) {
            cantAprobados++;
        } else {
            cantReprobados++;
        }

        // Buscar la nota mayor (primera aparicion en caso de empate)
        if (notas[i] > notas[indiceMayor]) {
            indiceMayor = i;
        }

        // Buscar la nota menor (primera aparicion en caso de empate)
        if (notas[i] < notas[indiceMenor]) {
            indiceMenor = i;
        }
    }

    double promedio = (double) sumaNotas / cantidad;

    cout << "\nPromedio general: " << promedio << endl;
    cout << "Nota mayor: " << nombres[indiceMayor] << " con " << notas[indiceMayor] << endl;
    cout << "Nota menor: " << nombres[indiceMenor] << " con " << notas[indiceMenor] << endl;
    cout << "Cantidad de aprobados: " << cantAprobados << endl;
    cout << "Cantidad de reprobados: " << cantReprobados << endl;
}

// ---------------------------------------------------------
// Busqueda secuencial de un estudiante por nombre exacto
// ---------------------------------------------------------
void buscarEstudiante(string nombres[], int notas[], int cantidad) {
    string nombreBuscado;
    bool encontrado = false;   // variable bandera

    cout << "\nIngrese el nombre a buscar: ";
    cin >> nombreBuscado;

    for (int i = 0; i < cantidad && !encontrado; i++) {
        if (nombres[i] == nombreBuscado) {
            cout << "\nEstudiante encontrado:\n";
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Nota: " << notas[i] << endl;
            cout << "Estado: " << obtenerEstado(notas[i]) << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "\nNo se encontro ningun estudiante con ese nombre.\n";
    }
}