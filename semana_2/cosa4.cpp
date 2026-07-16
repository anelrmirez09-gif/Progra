#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    // Mayor
    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    // Menor
    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    // Igualdad
    if (a == b && b == c) {
        cout << "Los tres numeros son iguales." << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Hay al menos dos numeros iguales." << endl;
    } else {
        cout << "Todos los numeros son diferentes." << endl;
    }

    return 0;
}
