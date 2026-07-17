#include <iostream>
using namespace std;

class Estudiante {
private:
    float promedio;
public:
    void ingresarNota(float nota) {
        if (nota < 0 || nota > 20) {
            cout << "Error: la nota ingresada esta fuera del rango permitido." << endl;
            return; // salir de la función sin guardar
        }
        promedio = nota;
        cout << "Promedio registrado: " << promedio << endl;
    }
};

int main() {
    Estudiante e;
    float nota;

    cout << "Ingrese el promedio del estudiante: ";
    cin >> nota;

    e.ingresarNota(nota);

    return 0;
}
