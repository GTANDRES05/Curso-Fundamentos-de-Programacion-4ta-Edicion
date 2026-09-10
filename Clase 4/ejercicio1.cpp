/*
EJERCICIO 1 - SUMA DE DOS ENTERO (I/O BASICOS)

Autor: Andrés Guachamín
Fecha: 31 de agosto 2026

Enunciado: Pide dos enteros y muestra la suma

*/

#include <iostream>
using namespace std;

int main(){ 
    //Declaracion de variables
    int num1, num2, suma;

    // Toda variable calculada es recomendable inicializarla
    suma = 0;

    // Ingreso de datos
    cout << "Ingrese num1: ";
    cin >> num1;
    cout << "Ingrese num2: ";
    cin >> num2;

    // Procesp o calculo
    suma = num1 + num2;

    // << sirve tambien para concatenar texto con variables
    cout << "Suma = " << suma << endl;

    return 0;

}