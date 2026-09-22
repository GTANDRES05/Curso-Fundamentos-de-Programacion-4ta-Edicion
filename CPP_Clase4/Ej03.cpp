/*
Titulo: Descuento por edad
Enunciado: Escribe un algoritmo que reciba la edad de una persona y determine
el precio a pagar: si edad >= 18, precio = $5.00; si edad < 18, precio = $2.50.

Entrada:  edad (int)
Proceso:  Evaluar si edad >= 18 para precio = 5.00, sino 2.50
Salida:   precioFinal (double)
 */

#include <iostream>
using namespace std;

int main() {
    int edad;
    double precioFinal;

    cout << "Ingrese la edad: ";
    cin >> edad;

    if (edad >= 18) {
        precioFinal = 5.00;
    } else {
        precioFinal = 2.50;
    }

    cout << "El precio a pagar es: $" << precioFinal << endl;

    return 0;
}