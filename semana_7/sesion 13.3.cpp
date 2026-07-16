#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = 3;

    // punteros inicializados directamente
    int *ptr = &a;
    int *pt  = &b;

    cout << "Los numeros son: " << *ptr << " y " << *pt << endl;

    // suma usando los valores apuntados
    int suma = *ptr + *pt;
    cout << "La suma es " << suma << endl;

    return 0;
}
