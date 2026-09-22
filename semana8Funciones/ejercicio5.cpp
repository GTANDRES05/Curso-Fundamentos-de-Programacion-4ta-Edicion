/*
Titulo: Contador actualizado con referencia
Enunciado: Pedir un numero entero positivo n e incrementar un contador desde 0
           hasta n, usando una funcion que actualice el valor del contador por
           referencia. Mostrar el valor del contador en cada incremento.

Entrada:  n (int, > 0)
Proceso:  leerLimite() solicita n por referencia; incrementarContador() recibe
          el contador por referencia y le suma 1 cada vez que se llama
Salida:   valor del contador en cada incremento, desde 1 hasta n
*/

#include <iostream>
using namespace std;

void leerLimite(int &n) {
    cout << "Ingrese un numero entero positivo n: ";
    cin >> n;
}

void incrementarContador(int &contador) {
    contador++;
}

int main() {
    int n;

    leerLimite(n);

    if (n <= 0) {
        cout << "ERROR: debe ingresar un numero mayor que 0." << endl;
    } else {
        int contador = 0;
        cout << "\nIncrementando el contador:" << endl;
        for (int i = 1; i <= n; i++) {
            incrementarContador(contador);
            cout << "Contador: " << contador << endl;
        }
    }

    return 0;
}