#include <iostream>
using namespace std;

int main() {
    int numeros[10] = {5, 8, 12, 3, 9, 15, 20, 7, 1, 10};
    int *p = numeros; // puntero al primer elemento

    cout << "Del primero al ultimo:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " "; // acceso con desplazamiento
    }

    cout << "\n\nDel ultimo al primero:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << *(p + i) << " "; // acceso inverso
    }

    return 0;
}
