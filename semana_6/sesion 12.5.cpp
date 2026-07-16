#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
 
    tuple<string,int,float> estudiantes[] = {
        {"Angel",20,15.5},
        {"Ana",19,18.2},
        {"Maria",21,14.8},
        {"Genaro",20,19.5}
    };

    int n = 4;

    sort(estudiantes, estudiantes + n,
    [](tuple<string,int,float> a,
       tuple<string,int,float> b) {
        return get<2>(a) > get<2>(b);
    });

    cout << "   ESTUDIANTES ORDENADOS POR PROMEDIO   \n\n";

    
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << get<0>(estudiantes[i])
             << "\nEdad: " << get<1>(estudiantes[i])
             << "\nPromedio: " << get<2>(estudiantes[i])
             << "\n------------------------\n";
    }
}
