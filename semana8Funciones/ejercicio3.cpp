/*
Titulo: Area de un rectangulo
Enunciado: Ingresar la base y la altura de un rectangulo (valores reales) y usar
           funciones para leer los datos, calcular el area y mostrar el resultado.

Entrada:  base, altura (double)
Proceso:  leerDatos() solicita base y altura por referencia; calcularArea()
          recibe base y altura por valor y retorna el area
Salida:   area del rectangulo
*/

#include <iostream>
using namespace std;

void leerDatos(double &base, double &altura) {
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
}

double calcularArea(double base, double altura) {
    return base * altura;
}

void mostrarResultado(double area) {
    cout << "El area del rectangulo es: " << area << endl;
}

int main() {
    double base, altura;

    leerDatos(base, altura);

    double area = calcularArea(base, altura);

    mostrarResultado(area);

    return 0;
}