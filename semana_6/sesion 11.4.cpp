#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if(n <= 0) {
        cout << "Error: ingrese un numero positivo mayor que 0." << endl;
        return 0;
    }

    int suma = 0;

    cout << "Serie: ";
    for(int i = 1; i <= n; i++) {
        suma += i;
        if(i < n)
            cout << i << " + ";
        else
            cout << i;
    }

    cout << " = " << suma << endl;

    return 0;
}
