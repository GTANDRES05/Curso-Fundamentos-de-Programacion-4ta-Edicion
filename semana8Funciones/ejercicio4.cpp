/*
Titulo: Intercambio de dos numeros
Enunciado: Ingresar dos numeros enteros y luego intercambiar sus valores usando
           una funcion. Mostrar los valores antes y despues del intercambio.

Entrada:  2 numeros enteros (int)
Proceso:  leerDatos() solicita los 2 valores por referencia; intercambiar() usa
          paso por referencia para modificar directamente las variables de main
Salida:   valores antes y despues del intercambio
 */

#include <iostream>
using namespace std;

void leerDatos(int &a, int &b) {
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}

void mostrarValores(int a, int b) {
    cout << "a = " << a << ", b = " << b << endl;
}

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;

    leerDatos(a, b);

    cout << "\nAntes del intercambio:" << endl;
    mostrarValores(a, b);

    intercambiar(a, b);

    cout << "\nDespues del intercambio:" << endl;
    mostrarValores(a, b);

    return 0;
}