#include <iostream>
#include <string>
#include <cctype> // para tolower
using namespace std;

int main() {
    string palabra;
    char o;

    do {
        cout << "Ingrese una palabra: ";
        cin >> palabra;

        // convertir a minúsculas
        for(int i = 0; i < palabra.length(); i++) {
            palabra[i] = tolower(palabra[i]);
        }

        // verificar palíndromo comparando extremos
        bool esPalindromo = true;
        int inicio = 0, fin = palabra.length() - 1;
        while(inicio < fin) {
            if(palabra[inicio] != palabra[fin]) {
                esPalindromo = false;
                break;
            }
            inicio++;
            fin--;
        }

        if(esPalindromo)
            cout << "Es un palindromo\n";
        else
            cout << "NO es palindromo\n";

        cout << "Escriba 's' para continuar y cualquier otra tecla para salir: ";
        cin >> o;

    } while(o == 's' || o == 'S');

    return 0;
}
