/*
REPASO

sin & = copia
con & = variable original


*/

#include <iostream>
using namespace std;


void aumentar (int x)
{
    x = x +1;
    cout << "Dentro de la funcion, x vale:" << x << endl;
}

int main(){
    int a = 10;

    //LLAMAR A MI FUNCION y le paso de parametros la variable a
    aumentar(a);

    cout << "Fuera de la funcion, a vale:" << a << endl;

    return 0;

}