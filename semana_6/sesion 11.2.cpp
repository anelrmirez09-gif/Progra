#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    int resultado = 0;

    // Si b es positivo, sumamos a varias veces
    if(b > 0) {
        for(int i = 0; i < b; i++) {
            resultado += a;
        }
    }
    // Si b es negativo, restamos a varias veces
    else {
        for(int i = 0; i > b; i--) {
            resultado -= a;
        }
    }

    cout << "La multiplicacion es: " << resultado << endl;
    return 0;
}
