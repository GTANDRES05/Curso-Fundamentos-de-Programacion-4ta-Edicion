/*
Titulo: Tabla de multiplicar repetitiva
Enunciado: Solicitar al usuario un numero entero y mostrar su tabla de multiplicar
           del 1 al 10. Al final, mostrar un mensaje indicando que la tabla fue
           generada correctamente.

Entrada:  numero (int)
Proceso:  Multiplicar el numero por cada valor del 1 al 10 usando un ciclo for
Salida:   tabla de multiplicar del 1 al 10, mensaje de confirmacion
 */

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    cout << "Tabla generada correctamente." << endl;

    return 0;
}