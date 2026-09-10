/*
Buscar un numero en el arreglo
Autor: Andrés Guachamin
Fecha: 3 de septiempre de 2026

Enunciado:
    Realizar un programa en C++ que permita ingresar 6 numeros enteras en un arreglo.
    Luego pedir al usuario un numero adicional para buscar dentro del arreglo.

    el programa debe indicar:
        - si el numero fue encontrado
        - y en que posicion se encuentra
    
    Si el numero no existe en el arreglo, debe mostrar un mensaje indicando que no fue
    encontrado.
    En esta clase se trabajara con la primera coincidencia encontrada.
*/

#include <iostream>
using namespace std;

int main(){
    //Declaramos un arreglo de 5 enteros para guardar las notas
    int numeros[6]; 

    // Arreglo donde vamos a guardar 6 numero enteros
    int i;

    // Variable donde guardaremos el numero que el usuario quiere buscar
    int buscado;

    //Variable para guardar la posicion donde se encontro el numero
    int posicion = -1;

    // Variable bandera: nos ayuda a saber si encontramos o no el numero
    bool encontrado = false;

    // CARGA DE DATOS

    for(i=0; i < 6; i++){
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[1];
    }
    cout << endl;

    //Pedimos el numero que se desea buscar
    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscado;

    //BUSQUEDA SECUENCIAL

    // Recorremos el arreglo posicion por posicion
    for(i=0; i < 6; i++){
        // Comparamos si el valor guardado en la posicion i
        // es igual al numero que queremos buscar
        if(numeros[i] == buscado && encontrado == false){
            //Si coincide, marcamos que si fue encontrado
            encontrado = true;

            //Guardamos la posicion donde lo encontramos
            posicion = i;
        }
    }

    cout << endl;

    //RESULTADO FINAL
    if(encontrado == true){
        cout <<  "Numero encontrado en la posicion: " << posicion  << endl;
    }

}