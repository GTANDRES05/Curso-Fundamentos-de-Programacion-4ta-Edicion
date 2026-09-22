/*
Titulo: Numeros pares hasta N
Enunciado: Solicitar al usuario un numero entero positivo N y mostrar en pantalla
           todos los numeros pares desde 1 hasta N. Si N <= 0, mostrar un mensaje
           de error.

Entrada:  n (int)
Proceso:  Recorrer con while desde 1 hasta n, mostrando solo los numeros pares
Salida:   lista de numeros pares (o mensaje de error si n <= 0)
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingrese un numero entero positivo N: ";
    cin >> n;

    if (n <= 0) {
        cout << "ERROR: debe ingresar un numero mayor que 0." << endl;
    } else {
        cout << "Numeros pares del 1 al " << n << ":" << endl;

        int contador = 1;
        while (contador <= n) {
            if (contador % 2 == 0) {
                cout << contador << " ";
            }
            contador++;
        }
        cout << endl;
    }

    return 0;
}