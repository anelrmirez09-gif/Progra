#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Los digitos son:\n";

    // Guardamos los dígitos en un arreglo para luego mostrarlos en orden
    int digitos[20];
    int cant = 0;

    // Extraemos los dígitos de derecha a izquierda
    while(n > 0) {
        digitos[cant] = n % 10;
        n = n / 10;
        cant++;
    }

    // Mostramos los dígitos en el orden correcto
    for(int i = cant - 1; i >= 0; i--) {
        if(digitos[i] % 2 == 0)
            cout << digitos[i] << " es par\n";
        else
            cout << digitos[i] << " es impar\n";
    }

    return 0;
}
