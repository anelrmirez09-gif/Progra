#include <iostream>
using namespace std;

int main() {
    float notas[3];
    float suma = 0;
    float mayor;

    // ingreso de notas
    for(int i = 0; i < 3; i++) {
        do {
            cout << "Ingrese nota (0 a 20): ";
            cin >> notas[i];
            if(notas[i] < 0 || notas[i] > 20) {
                cout << "Numero fuera de rango\n";
            }
        } while(notas[i] < 0 || notas[i] > 20);

        suma += notas[i]; // acumulo para promedio
        if(i == 0 || notas[i] > mayor) {
            mayor = notas[i]; // comparo para mayor
        }
    }

    // promedio
    float promedio = suma / 3;

    // mostrar notas originales
    cout << "\nNotas ingresadas: ";
    for(int i = 0; i < 3; i++) {
        cout << notas[i] << " ";
    }

    // ordenar manualmente (burbuja simple)
    for(int i = 0; i < 3; i++) {
        for(int j = i+1; j < 3; j++) {
            if(notas[j] < notas[i]) {
                float temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
            }
        }
    }

    // mostrar resultados
    cout << "\nNotas ordenadas de menor a mayor: ";
    for(int i = 0; i < 3; i++) {
        cout << notas[i] << " ";
    }

    cout << "\nNotas de mayor a menor: ";
    for(int i = 2; i >= 0; i--) {
        cout << notas[i] << " ";
    }

    cout << "\nPromedio: " << promedio;
    cout << "\nMayor: " << mayor << endl;

    return 0;
}
