#include <iostream>
using namespace std;

struct Contacto {
    string apellido;
    string nombre;
};

int main() {
    
    Contacto contactos[4] = {
        {"Garcia", "Juan"},
        {"Lopez", "Maria"},
        {"Alvarez", "Pedro"},
        {"cruz", "jair"}
    };

    cout << "\n";
    cout << "       AGENDA DE CONTACTOS   \n";
    cout << "\n";

    
    for(int i = 0; i < 4; i++) {
        cout << "Apellido : " << contactos[i].apellido << endl;
        cout << "Nombre   : " << contactos[i].nombre << endl;
        cout << "\n";
    }

    return 0;
}
