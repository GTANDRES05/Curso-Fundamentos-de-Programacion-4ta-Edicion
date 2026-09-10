/*
EJERCICIO 3 - CONTADOR CON WHILE

Autor: Andrés Guachamín
Fecha: 2 de septiembre

Enunciado:
    Elaborar un programa en C++ que solicite al usuario un numero entero positivo N
    y muestre en pantalla los numeros desde 1 hasta N usando un bucle while.
    Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje de error y
    terminar.

    E/P/S

    Entrada:
        - Un numero entero positivo N
    Proceso:
        - Leer el valor de N
        - Verificar si N es mayor que 0
        - Si no lo es, mostrar un mensaje de error
        - Si lo es, usar un contador que inicie en 1
        - Repetir mientras el contador sea menor o igual a N
        - Mostrar el valor del contador
    Salida:
        - Los numeros desde 1 hasta N
        - O mensaje de error

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int N, contador;

    // Pedimos al usuario un numero entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    // Validamos que el numero sea mayor que 0
    if (N <= 0)
    {
        cout << "Error: el numero debe ser mayo que cero." << endl;
    }
    else
    {
        // Inicializamos el contador en 1
        contador = 1;

        // Repetimos mientras el contador sea menor o igual a N
        while (contador <= N)
        {
            // Mostramos el valor actual del contador
            cout << contador << endl;

            // Aumentamos el contador en 1 para evitar bucles infitos
            contador = contador + 1;
        }
    }
    return 0;
}