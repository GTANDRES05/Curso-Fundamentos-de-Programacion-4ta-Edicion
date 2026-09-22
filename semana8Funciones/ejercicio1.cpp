/*
Titulo: Suma y promedio de 3 numeros
Enunciado: Ingresar 3 numeros enteros y usar funciones para leerlos, calcular la
           suma, calcular el promedio y mostrar los resultados.

Entrada:  3 numeros enteros (int)
Proceso:  leerNumeros() los solicita por parametro de referencia; calcularSuma()
          y calcularPromedio() reciben los valores por parametro (por value) y
          retornan el resultado
Salida:   suma y promedio de los 3 numeros
*/

#include <iostream>
using namespace std;

void leerNumeros(int &n1, int &n2, int &n3) {
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
}

int calcularSuma(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

double calcularPromedio(int suma, int cantidad) {
    return (double) suma / cantidad;
}

void mostrarResultados(int suma, double promedio) {
    cout << "\nLa suma de los 3 numeros es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
}

int main() {
    int n1, n2, n3;

    leerNumeros(n1, n2, n3);

    int suma = calcularSuma(n1, n2, n3);
    double promedio = calcularPromedio(suma, 3);

    mostrarResultados(suma, promedio);

    return 0;
}