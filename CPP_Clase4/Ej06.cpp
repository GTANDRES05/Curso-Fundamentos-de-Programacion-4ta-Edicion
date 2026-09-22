/*
Titulo: Plan de internet (validacion + recargo)
Enunciado: Escribe un algoritmo que reciba el plan de internet (1 o 2) y el consumo
            (>= 0). Plan 1: tarifa base $12, limite 80. Plan 2: tarifa base $20,
            limite 150. Si el consumo supera el limite, se recarga $0.25 por unidad
            excedida. Si el plan o el consumo son invalidos, mostrar "DATOS INVALIDOS".

Entrada:  plan (int), consumo (double)
Proceso:  Validar plan = 1 o 2 y consumo >= 0; calcular tarifaBase y limite segun el
          plan; si consumo > limite, sumar recargo de 0.25 por unidad excedida.
Salida:   totalPagar (double) o mensaje "DATOS INVALIDOS"
 */

#include <iostream>
using namespace std;

int main() {
    int plan;
    double consumo, tarifaBase, limite, totalPagar;

    cout << "Ingrese el plan (1 o 2): ";
    cin >> plan;
    cout << "Ingrese el consumo: ";
    cin >> consumo;

    if ((plan == 1 || plan == 2) && consumo >= 0) {
        if (plan == 1) {
            tarifaBase = 12;
            limite = 80;
        } else {
            tarifaBase = 20;
            limite = 150;
        }

        if (consumo > limite) {
            totalPagar = tarifaBase + ((consumo - limite) * 0.25);
        } else {
            totalPagar = tarifaBase;
        }

        cout << "El total a pagar es: $" << totalPagar << endl;
    } else {
        cout << "DATOS INVALIDOS" << endl;
    }

    return 0;
}