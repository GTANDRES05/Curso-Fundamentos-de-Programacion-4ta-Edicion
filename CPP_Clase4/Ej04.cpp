/*
Titulo: Nota final con ponderaciones
Enunciado: Escribe un algoritmo que reciba tres calificaciones (Parcial 1, Parcial 2
y Proyecto) y calcule la nota final con ponderaciones: Parcial1 30%,
Parcial2 30% y Proyecto 40%.

Entrada:  parcial1, parcial2, proyecto (double)
Proceso:  notaFinal = (parcial1*0.30) + (parcial2*0.30) + (proyecto*0.40)
Salida:   notaFinal (double)
 */

#include <iostream>
using namespace std;

int main() {
    double parcial1, parcial2, proyecto, notaFinal;

    cout << "Ingrese la nota del Parcial 1: ";
    cin >> parcial1;
    cout << "Ingrese la nota del Parcial 2: ";
    cin >> parcial2;
    cout << "Ingrese la nota del Proyecto: ";
    cin >> proyecto;

    notaFinal = (parcial1 * 0.30) + (parcial2 * 0.30) + (proyecto * 0.40);

    cout << "La nota final ponderada es: " << notaFinal << endl;

    return 0;
}