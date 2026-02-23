#include <iostream>
using namespace std;

int main() {
    double monto, porcentaje, nuevoMonto;

    cout << "Ingrese el monto inicial: ";
    cin >> monto;

    cout << "Ingrese el porcentaje de incremento: ";
    cin >> porcentaje;

    nuevoMonto = monto + (monto * porcentaje / 100);

    cout << "El nuevo monto es: " << nuevoMonto;

    return 0;
}