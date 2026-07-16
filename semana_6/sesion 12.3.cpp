#include <iostream>
using namespace std;

struct Evento {
    string nombre;
    string fecha;
    string hora;
};

int main() {
    // lista de eventos
    Evento eventos[2] = {
        {"Parcial 3 de programacion", "jueves 25 de junio", "2:00 pm"},
        {"Parcial 4 de redes informaticas", "jueves 18 de junio", "10:00 am"}
    };

    cout << "\n----Agenda de eventos----\n\n";

    for(int i = 0; i < 2; i++) {
        cout << "Evento " << i+1 << endl;
        cout << "Nombre: " << eventos[i].nombre << endl;
        cout << "Fecha: " << eventos[i].fecha << endl;
        cout << "Hora: " << eventos[i].hora << endl;
        cout << endl;
    }

    return 0;
}
