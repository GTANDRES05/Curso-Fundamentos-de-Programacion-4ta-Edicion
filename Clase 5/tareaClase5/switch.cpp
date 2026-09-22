/*
Titulo: Menu repetitivo (Con switch)
Enunciado: Mismo menu del Ejercicio 4 (doble, triple, salir), resuelto con switch
           en lugar de if / else, para comparar ambas formas de programarlo.

Entrada:  opcion (int), numero (double, solo si aplica)
Proceso:  Repetir el menu con do-while; usar switch segun la opcion elegida
Salida:   doble o triple del numero, o mensaje de error, hasta elegir salir
*/

#include <iostream>
using namespace std;

int main() {
    int opcion;
    double numero;

    do {
        cout << "\n----- MENU -----" << endl;
        cout << "1. Mostrar el doble de un numero" << endl;
        cout << "2. Mostrar el triple de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El doble es: " << (numero * 2) << endl;
                break;
            case 2:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El triple es: " << (numero * 3) << endl;
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "ERROR: opcion invalida, intente de nuevo." << endl;
        }

    } while (opcion != 3);

    return 0;
}