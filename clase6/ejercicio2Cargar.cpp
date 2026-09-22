/*
PLANTILLA ARREGLOS
Autor: Andrés Guachamin
Fecha: 3 de septiempre de 2026

Enunciado:
    Realizar un programa en C++ que permita ingresar 5 notas enteras en un arreglo.
    Luego, el programa debe mostrar todas las notas ingresadas, una por una, indicar
    tambien la posicion en la que fueron guardadas.
*/

#include <iostream>
using namespace std;

int main(){
    //Declaramos un arreglo de 5 enteros para guardar las notas
    int datos[5]; 

    // Variables que usaremos para recorrer el arreglo
    int i;

    // CARGA DE DATOS

    //Recorremos las 5 posiciones del arreglo
    for(i=0; i < 5; i++){
        // Pedimos al usuario una nota
        cout << "Ingrese la nota" << i + 1 << endl;

        cin >> notas[i];
    }

    cout << endl; // SIGNIFICA QUE SOLO DOY UN SALTO DE LINEA

    cout << "Notas registradas: " << endl;
}