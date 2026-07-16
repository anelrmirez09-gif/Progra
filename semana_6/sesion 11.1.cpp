#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Ingrese un numero: ";
    cin >> a;

    cout << "Los divisores son:\n";
    for(int i = 1; i <= a; i++) {
        if(a % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
