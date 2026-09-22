/*
Titulo: Area y perimetro de un rectangulo
Enunciado: Escribe un algoritmo que reciba la base y la altura de un rectangulo
y calcule y muestre el area y el perimetro.

Entrada:  base, altura (double)
Proceso:  area = base * altura ; perimetro = 2 * (base + altura)
Salida:   area, perimetro (double)
 */

#include <iostream>
using namespace std;

int main() {
    double base, altura, area, perimetro;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "El area es: " << area << endl;
    cout << "El perimetro es: " << perimetro << endl;

    return 0;
}