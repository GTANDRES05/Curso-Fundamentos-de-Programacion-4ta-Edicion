/*





Enunciado: Pide una base y una altura (Enteros) y calcule el area
*/

#include <iostream>
#include <string> // (Opcional y depende del ejercicio)
using namespace std;

int main(){
    int base, altura, area;

    area = 0;

    cout << "Ingrese base:"<< endl;
    cin >> base;
    cout << "Ingrese altura: ";
    cin >> altura;

    area = base * altura;
    cout << "Area= " << area << endl;

    return 0;

}