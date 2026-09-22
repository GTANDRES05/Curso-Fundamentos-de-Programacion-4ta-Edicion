/*
Titulo: Numero mayor entre dos valores
Enunciado: Ingresar dos numeros enteros y determinar cual es mayor, usando
           funciones para leer los datos, compararlos y mostrar el resultado.
           Si ambos numeros son iguales, tambien debe indicarlo.

Entrada:  2 numeros enteros (int)
Proceso:  leerDatos() solicita los 2 valores por referencia; compararValores()
          recibe los valores por valor y retorna un codigo (1, 2 o 0 si son
          iguales); mostrarResultado() interpreta ese codigo
Salida:   mensaje indicando cual numero es mayor, o si son iguales
 */

#include <iostream>
using namespace std;

void leerDatos(int &a, int &b) {
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}

int compararValores(int a, int b) {
    if (a > b) {
        return 1;
    } else if (b > a) {
        return 2;
    } else {
        return 0;
    }
}

void mostrarResultado(int a, int b, int resultado) {
    if (resultado == 1) {
        cout << "El numero mayor es: " << a << endl;
    } else if (resultado == 2) {
        cout << "El numero mayor es: " << b << endl;
    } else {
        cout << "Ambos numeros son iguales." << endl;
    }
}

int main() {
    int a, b;

    leerDatos(a, b);

    int resultado = compararValores(a, b);

    mostrarResultado(a, b, resultado);

    return 0;
}