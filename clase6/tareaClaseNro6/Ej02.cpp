/*
Titulo: Registro de cantidades vendidas
Enunciado: Permitir ingresar 6 cantidades enteras de productos vendidos durante
           el dia en un arreglo. Mostrar todas las cantidades, pedir una cantidad
           especifica para buscar, indicar si se encuentra dentro del arreglo y
           mostrar la posicion donde aparece por primera vez, o un mensaje
           indicando que no fue encontrada.

Entrada:  6 cantidades enteras (int), cantidad a buscar (int)
Proceso:  Cargar el arreglo con un for; recorrerlo para mostrar los valores;
          realizar busqueda secuencial usando una variable bandera "encontrado"
Salida:   listado de cantidades ingresadas, resultado de la busqueda
          (encontrada/no encontrada) y posicion de la primera coincidencia
 */

#include <iostream>
using namespace std;

int main() {
    const int TAMANIO = 6;
    int cantidades[TAMANIO];
    int cantidadBuscada;
    bool encontrado = false;
    int posicion = -1;

    for (int i = 0; i < TAMANIO; i++) {
        cout << "Ingrese la cantidad vendida del producto " << (i + 1) << ": ";
        cin >> cantidades[i];
    }

    cout << "\nCantidades vendidas ingresadas:" << endl;
    for (int i = 0; i < TAMANIO; i++) {
        cout << "Producto " << (i + 1) << ": " << cantidades[i] << endl;
    }

    cout << "\nIngrese la cantidad que desea buscar: ";
    cin >> cantidadBuscada;

    for (int i = 0; i < TAMANIO; i++) {
        if (cantidades[i] == cantidadBuscada) {
            encontrado = true;
            posicion = i;
            break;
        }
    }

    if (encontrado) {
        cout << "La cantidad " << cantidadBuscada << " fue encontrada en la posicion " << posicion << "." << endl;
    } else {
        cout << "La cantidad " << cantidadBuscada << " no fue encontrada en el arreglo." << endl;
    }

    return 0;
}
