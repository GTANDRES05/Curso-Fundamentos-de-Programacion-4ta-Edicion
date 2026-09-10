/*
Nombre del estudiante: Andrés Guachamín
Fecha: 09/09/2026
Tema: Sistema de registro y análisis de notas
Entrada: cantidad, nombres, notas, opción del menú y nombre a buscar
Proceso: validar, almacenar, recorrer, calcular y buscar
Salida: reporte general y resultado de búsqueda
*/

#include <iostream>
#include <string>
using namespace std;

const int max_estudiantes = 20;

const int nota_minima = 0;

const int nota_maxima = 20;

const int nota_aprobacion = 14;


int mostrarMenu();
int leerCantidadValida();
int leerNotaValida(string nombreEstudiante);
void registrarEstudiantes(string nombres[], int notas[], int &cantidad);
void mostrarReporte(string nombres[], int notas[], int cantidad);
void buscarEstudiante(string nombres[], int notas[], int cantidad);
bool estaAprobado(int nota);
string obtenerEstado(int nota);

int main() {

    string nombres[max_estudiantes];
    int notas[max_estudiantes];
    int cantidadEstudiantes = 0;
    bool hayDatos = false;
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

                    cout << "Todavia no hay datos registrados";
                }
                else {

                    mostrarReporte(nombres, notas, cantidadEstudiantes);
                }
                break;

            case 3:
                if (!hayDatos) {

                    cout << "Todavia no existen datos registrados";
                }
                else {

                    buscarEstudiante(nombres, notas, cantidadEstudiantes);
                }
                break;

            case 4:
                cout << "Saliendo del programa. Hasta luego";
                break;
        }

    } while (opcion != 4);

    return 0;
}

int mostrarMenu() {

    int opcion;

    cout << "=========== MENU ===========";
    cout << "1. Registrar estudiantes y notas";
    cout << "2. Mostrar reporte general";
    cout << "3. Buscar estudiante por nombre";
    cout << "4. Salir";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    while (opcion < 1 || opcion > 4) {

        cout << "Opcion invalida. Ingrese un numero entre 1 y 4: ";
        cin >> opcion;
    }

    return opcion;
}

int leerCantidadValida() {
    int cantidad;

    cout << "Ingrese la cantidad de estudiantes (1 a " << max_estudiantes << "): ";
    cin >> cantidad;

    while (cantidad < 1 || cantidad > max_estudiantes) {

        cout << "Cantidad invalida. Ingrese un valor entre 1 y " << max_estudiantes << ": ";
        cin >> cantidad;
    }

    return cantidad;
}

int leerNotaValida(string nombreEstudiante) {

    int nota;

    cout << "Nota de " << nombreEstudiante << " (0 a 20): ";
    cin >> nota;

    while (nota < nota_minima || nota > nota_maxima) {

        cout << "Nota invalida. Ingrese un valor entre 0 y 20: ";
        cin >> nota;
    }

    return nota;
}


void registrarEstudiantes(string nombres[], int notas[], int &cantidad) {
    cantidad = leerCantidadValida();

    for (int i = 0; i < cantidad; i++) {

        cout << "--- Estudiante " << (i + 1) << " ---";
        cout << "Nombre: ";
        cin >> nombres[i];
        notas[i] = leerNotaValida(nombres[i]);
    }

    cout << "Registro completado con exito";
}

bool estaAprobado(int nota) {

    return nota >= nota_aprobacion;
}

string obtenerEstado(int nota) {

    if (estaAprobado(nota)) {

        return "APROBADO";
    }
    else {

        return "REPROBADO";
    }
}

void mostrarReporte(string nombres[], int notas[], int cantidad) {

    int sumaNotas = 0;
    int cantAprobados = 0;
    int cantReprobados = 0;

    int indiceMayor = 0;
    int indiceMenor = 0;

    cout << "=========== REPORTE GENERAL ===========";

    for (int i = 0; i < cantidad; i++) {

        cout << (i + 1) << ". " << nombres[i]
             << " - Nota: " << notas[i]
             << " - Estado: " << obtenerEstado(notas[i]) << endl;

        sumaNotas += notas[i];

        if (estaAprobado(notas[i])) {

            cantAprobados++;
        } 
        else {

            cantReprobados++;
        }

        if (notas[i] > notas[indiceMayor]) {

            indiceMayor = i;
        }

        if (notas[i] < notas[indiceMenor]) {

            indiceMenor = i;
        }
    }

    double promedio = (double) sumaNotas / cantidad;

    cout << "Promedio general: " << promedio << endl;
    cout << "Nota mayor: " << nombres[indiceMayor] << " con " << notas[indiceMayor] << endl;
    cout << "Nota menor: " << nombres[indiceMenor] << " con " << notas[indiceMenor] << endl;
    cout << "Cantidad de aprobados: " << cantAprobados << endl;
    cout << "Cantidad de reprobados: " << cantReprobados << endl;
}

void buscarEstudiante(string nombres[], int notas[], int cantidad) {

    string nombreBuscado;
    bool encontrado = false;

    cout << "Ingrese el nombre a buscar: ";
    cin >> nombreBuscado;

    for (int i = 0; i < cantidad && !encontrado; i++) {

        if (nombres[i] == nombreBuscado) {

            cout << "Estudiante encontrado:";
            cout << "Nombre: " << nombres[i] << endl;
            cout << "Nota: " << notas[i] << endl;
            cout << "Estado: " << obtenerEstado(notas[i]) << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {

        cout << "No se encontro ningun estudiante con ese nombre";
    }
}