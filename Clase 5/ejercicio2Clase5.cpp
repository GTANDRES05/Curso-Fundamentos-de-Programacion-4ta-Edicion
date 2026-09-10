/*
EJERCICIO 2 - Conversion de tiempo a minutos

Autor: Andrés Guachamín
Fecha: 2 de septiembre

Enunciado:
    Recibe horas y minutos, y muestra el total de minutos.
    Reglas:
    - horas >= 0
    - minutos entre 0 y 59
    Si no cumple, mostrar "Datos invalidos"
    
    
    E/P/S:

    -Entrada: horas, minutos
    -Proceso: validar rangos, totalMinutos
    -Salida: totalMinutos o "Datos invalidos"
    */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //1) Variables
    int horas, minutos, totalMinutos;

    //2) Lectura de datos
    cout << "Ingrese horas (>= 0): ";
    cin >> horas;

    cout << "Ingrese minutos (0 a 59): ";
    cin >> minutos;

    //3) Validacion
    if(horas< 0 || minutos < 0 || minutos > 59)
    {
        cout << "Datos invalidos" << endl;
        return 0;
    }

    //4) Proceso

    totalMinutos = (horas * 60) + minutos;

    //5) Salida
    cout << "Total de minutos: " << totalMinutos << endl ;

    return 0;
}