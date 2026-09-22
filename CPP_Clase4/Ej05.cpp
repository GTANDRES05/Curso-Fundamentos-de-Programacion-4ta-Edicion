/*
Titulo: Reparto de horas en semanas, dias y horas
Enunciado: Escribe un algoritmo que reciba un numero entero de horas totales
            (valor no negativo) y lo convierta a semanas, dias y horas sobrantes,
            considerando que una semana tiene 168 horas y un dia tiene 24 horas.

Entrada:  horasTotales (int, >= 0)
Proceso:  semanas = horasTotales / 168 ; sobranteSemanas = horasTotales % 168
          dias = sobranteSemanas / 24 ; horasSobrantes = sobranteSemanas % 24
Salida:   semanas, dias, horasSobrantes (int)
 */

#include <iostream>
using namespace std;

int main() {
    int horasTotales, semanas, sobranteSemanas, dias, horasSobrantes;

    cout << "Ingrese las horas totales: ";
    cin >> horasTotales;

    semanas = horasTotales / 168;
    sobranteSemanas = horasTotales % 168;
    dias = sobranteSemanas / 24;
    horasSobrantes = sobranteSemanas % 24;

    cout << horasTotales << " horas equivalen a: "
         << semanas << " semanas, " << dias << " dias y "
         << horasSobrantes << " horas sobrantes." << endl;

    return 0;
}