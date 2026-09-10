/*
EJERCICIO 3 - CONTADOR CON WHILE

Autor: Andrés Guachamín
Fecha: 2 de septiembre

Enunciado:
    Desarrollar un programa en C++ que me permita ingresar 4 numeros enteros.
    El programa debe usar funciones para:
        - Leer los 4 números
        - Calcular la suma
        - Calcular el promedio
        - Mostrar los resultados en pantalla
    El objetivo es comprender como dividir un problema en varias funciones claves claras

E/P/S

    Entrada:
        4 numeros enteros
    Proceso:
        Leer 4 numeros
        Calcular la suma
        - Calcular el promedio
        - Mostrar los resultados en pantalla
    Salida:
    La suma de los 4 numeros
    El promedio de los 4 numeros
*/


#include <iostream>
using namespace std;


int main(){
    //Variables donde se guardarán los numeros
    int n1, n2, n3, n4;

    //Variables para resultados
    int suma;
    double promedio;

    //LLAMAMOS A LA FUNCION QUE LEE LOS 4 NUMEROS
    leerCuatroNumeros(n1, n2, n3, n4);


}

//Esta funcion lee 4 numeros y los guarda en las variables originales
void leerCuatroNumeros(int &a, &b, &c, &d){
     cout << "Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}
   
