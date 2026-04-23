#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingrese un numero del 1 al 7: ";
    cin >> dia;

    string nombre;
    bool laborable;

    switch (dia) {
        case 1: nombre = "Lunes"; laborable = true; break;
        case 2: nombre = "Martes"; laborable = true; break;
        case 3: nombre = "Miercoles"; laborable = true; break;
        case 4: nombre = "Jueves"; laborable = true; break;
        case 5: nombre = "Viernes"; laborable = true; break;
        case 6: nombre = "Sabado"; laborable = false; break;
        case 7: nombre = "Domingo"; laborable = false; break;
        default: cout << "Numero invalido" << endl; return 0;
    }

    cout << nombre << ", ";
    if (laborable) cout << "laborable" << endl;
    else cout << "no laborable" << endl;

    return 0;
}
