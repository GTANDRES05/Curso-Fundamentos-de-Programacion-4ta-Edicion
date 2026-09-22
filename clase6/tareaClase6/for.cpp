/*
Titulo: Suma de 5 numeros
Enunciado: Solicitar al usuario 5 numeros enteros y calcular la suma total de
           esos valores. Mostrar la suma total y cuantos numeros fueron ingresados.

Entrada:  5 numeros enteros (int)
Proceso:  Acumular la suma de los 5 numeros ingresados con un ciclo for
Salida:   suma total, cantidad de numeros ingresados
*/

#include <iostream>
using namespace std;

int main() {
    const int CANTIDAD = 5;
    int numero;
    int suma = 0;

    for (int i = 1; i <= CANTIDAD; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        suma = suma + numero;
    }

    cout << "La suma total es: " << suma << endl;
    cout << "Cantidad de numeros ingresados: " << CANTIDAD << endl;

    return 0;
}