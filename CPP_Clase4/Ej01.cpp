/*
Titulo: Conversion de temperatura
Enunciado: Escribe un algoritmo que reciba una temperatura en grados Celsius
y la convierta a grados Fahrenheit, usando la formula F = (C * 9/5) + 32.

Entrada:  celsius (double)
Proceso:  Aplicar la formula de conversion F = (C * 9/5) + 32
Salida:   fahrenheit (double)
*/

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;

    return 0;
}