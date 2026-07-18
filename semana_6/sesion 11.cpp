#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    // BINARIO (usando división sucesiva)
    int num = n;
    int bin[32]; // arreglo para guardar los restos
    int i = 0;
    while(num > 0) {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }
    cout << "Binario: ";
    for(int j = i-1; j >= 0; j--) {
        cout << bin[j];
    }

    // HEXADECIMAL (usando división sucesiva)
    num = n;
    char hex[32];
    i = 0;
    while(num > 0) {
        int resto = num % 16;
        if(resto < 10)
            hex[i] = '0' + resto;
        else
            hex[i] = 'A' + (resto - 10);
        num = num / 16;
        i++;
    }
    cout << "\nHexadecimal: ";
    for(int j = i-1; j >= 0; j--) {
        cout << hex[j];
    }

    return 0;
}
