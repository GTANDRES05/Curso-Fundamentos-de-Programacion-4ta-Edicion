/*
Titulo: Registro de edades
Enunciado: Permitir ingresar 8 edades enteras en un arreglo. Mostrar todas las
           edades junto con su posicion, pedir una edad adicional para buscarla
           dentro del arreglo e indicar si fue encontrada. En caso de encontrarla,
           mostrar la posicion de la primera coincidencia.

Entrada:  8 edades enteras (int), edad a buscar (int)
Proceso:  Cargar el arreglo con un for; recorrerlo para mostrar los valores con
          su posicion; recorrerlo nuevamente para hacer busqueda secuencial
Salida:   listado de edades con su posicion, resultado de la busqueda
          (encontrada/no encontrada) y posicion de la primera coincidencia
 */

#include <iostream>
using namespace std;

int main() {
    const int TAMANIO = 8;
    int edades[TAMANIO];
    int edadBuscada;
    bool encontrado = false;
    int posicion = -1;

    for (int i = 0; i < TAMANIO; i++) {
        cout << "Ingrese la edad de la persona " << (i + 1) << ": ";
        cin >> edades[i];
    }

    cout << "\nEdades registradas:" << endl;
    for (int i = 0; i < TAMANIO; i++) {
        cout << "Posicion " << i << ": " << edades[i] << endl;
    }

    cout << "\nIngrese la edad que desea buscar: ";
    cin >> edadBuscada;

    for (int i = 0; i < TAMANIO; i++) {
        if (edades[i] == edadBuscada) {
            encontrado = true;
            posicion = i;
            break;
        }
    }

    if (encontrado) {
        cout << "La edad " << edadBuscada << " fue encontrada en la posicion " << posicion << "." << endl;
    } else {
        cout << "La edad " << edadBuscada << " no fue encontrada en el arreglo." << endl;
    }

    return 0;
}
