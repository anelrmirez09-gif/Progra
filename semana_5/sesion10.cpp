#include <iostream>
using namespace std;

int main() {
    float notas[3] = {16.3, 12.5, 11.8};
    float suma = 0;
    float mayor = notas[0];

    cout << "Notas: ";
    for(int i = 0; i < 3; i++) {
        cout << notas[i] << "  ";
        suma += notas[i];           // acumulo para promedio
        if(notas[i] > mayor) {      // comparo para mayor
            mayor = notas[i];
        }
    }

    float promedio = suma / 3;

    cout << "\nEl promedio es: " << promedio << endl;
    cout << "La nota mayor es: " << mayor << endl;

    return 0;
}
