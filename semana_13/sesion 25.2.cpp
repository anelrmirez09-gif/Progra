#include <iostream>
using namespace std;

int main() {
    double saldo = 1000;
    double retiro;

    cout << "Saldo disponible: S/ " << saldo << endl;
    cout << "Ingrese el monto a retirar: ";
    cin >> retiro;

    if (retiro > saldo) {
        cout << "Error: saldo insuficiente." << endl;
    } else if (retiro < 0) {
        cout << "Error: el monto no puede ser negativo." << endl;
    } else {
        saldo -= retiro;
        cout << "Retiro realizado con exito." << endl;
        cout << "Saldo restante: S/ " << saldo << endl;
    }

    return 0;
}
