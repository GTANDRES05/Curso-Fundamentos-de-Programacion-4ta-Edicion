/*
EJERCICIO 3 - CONTADOR CON WHILE

Autor: Andrés Guachamín
Fecha: 2 de septiembre

Switch es una estructura de seleccion que permite ejecutar diferentes bloques de codigo segun el valor de
una variable.
Suele ser util cuando:
    - Hay varias opciones numericas o fijas
    - Se quiere organizar mejor un menu
    - Cada opción represneta un caso distinto.

Diferencias rapidas con if/else
    if/else sirve mas cuando las condiciones pueden ser variadas o complejas
    switch sirve mas cuando comparas una sola variable contra varios valores concretos

Enunciado:
    Elaborar un programa en C++ que muestre un menú con las siguientes opciones: 
        1.
        2. Mostrar el cuadrado de un numero
        3. Salir

    E/P/S

    Entrada:
        - Una opcion del menu
        - Si elige la opción 2, un numero entero

    Proceso:
        - Declarar las variables necesarias
        - Mostrar el menu
        - Leer las opciones
        - Evaluar la opcion del switch
        - Ejecutar la accion correspondiente


    Salida:
        - Mensaje de bienvenida
        - O el cuadrado de un numero
        - O el mensaje de salida
        - O mensaje de error por opcion invalida

*/

#include <iostream>
using namespace std;

int main(){
    //Declarar las variables necesarias
    int opcion, numero, cuadrado;
    //Usamos do while para que el menu muestre al menos una vez
    do{
        //Mostramos el menu
        cout <<"====== MENU CON SWITCH =====" << endl;
        cout << "1. Mostrar bienvenida" << endl;
        cout << "2. Mostrar cuadrado de un numero" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch(opcion){
            case 1:
                //Opcion 1: mostrar mensaje
                cout << "Bienvenidos a la clase 6 de C++" << endl;
                break;

            case 2:
                //Opcion 2: pedir un numero y mostrar su cuadrado
                cout << "Ingrese un numero: " << endl;
                cin >> numero;

                cuadrado = numero * numero;

                cout << "El cuadrado es: " << cuadrado << endl;
                break;

            case 3:
                // Opcion 3: salir del programa
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                //si la opcion no coincide con ningun caso
                cout << "Error: opcion invalida" 
                << endl;
            }
    }   //El

    while(opcion);
}