#include <iostream>
using namespace std;

int main() {
    int nums[10];
    int *p = nums; // puntero al inicio del arreglo

    cout << "Ingresa 10 numeros:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> *(p + i); // guardar usando puntero
    }

    int suma = 0;
    int mayor = *p;
    int menor = *p;

    // recorrer con puntero directamente
    for(int i = 0; i < 10; i++) {
        int valor = *(p + i);
        suma += valor;

        if(valor > mayor) mayor = valor;
        if(valor < menor) menor = valor;
    }

    cout << "\nResultados:\n";
    cout << "Suma: " << suma << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    cout << "Promedio: " << (float)suma / 10 << endl;

    return 0;
}
