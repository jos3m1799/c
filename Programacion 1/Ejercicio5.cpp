#include <iostream>
using namespace std;

int main() {
    double precio;
    int cantidad;
    double total;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese la cantidad comprada: ";
    cin >> cantidad;

    total = precio * cantidad;

    cout << "Total a pagar: " << total;

    return 0;
}