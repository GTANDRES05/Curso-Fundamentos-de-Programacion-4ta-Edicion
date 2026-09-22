/*
Titulo: Menu repetitivo (version con if / else)
Enunciado: Mostrar un menu con las opciones: 1) Mostrar el doble de un numero,
           2) Mostrar el triple de un numero, 3) Salir. El menu debe repetirse
           hasta que el usuario elija la opcion 3. Si ingresa una opcion invalida,
           mostrar un mensaje de error y volver a mostrar el menu.

Entrada:  opcion (int), numero (double, solo si aplica)
Proceso:  Repetir el menu con do-while; segun la opcion, calcular el doble o el
          triple del numero ingresado, o validar y avisar si la opcion es invalida
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

        if (opcion == 1) {
            cout << "Ingrese un numero: ";
            cin >> numero;
            cout << "El doble es: " << (numero * 2) << endl;
        } else if (opcion == 2) {
            cout << "Ingrese un numero: ";
            cin >> numero;
            cout << "El triple es: " << (numero * 3) << endl;
        } else if (opcion == 3) {
            cout << "Saliendo del programa..." << endl;
        } else {
            cout << "ERROR: opcion invalida, intente de nuevo." << endl;
        }

    } while (opcion != 3);

    return 0;
}