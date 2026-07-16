#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, map<string, float>> estudiantes;

    
    estudiantes["Ana"]["Matematica"] = 16;
    estudiantes["Ana"]["Fisica"] = 17;
    estudiantes["Ana"]["Programacion"] = 18;

    
    estudiantes["Maria"]["Matematica"] = 14;
    estudiantes["Maria"]["Fisica"] = 19;
    estudiantes["Maria"]["Programacion"] = 15;

    
    estudiantes["Genaro"]["Matematica"] = 20;
    estudiantes["Genaro"]["Fisica"] = 18;
    estudiantes["Genaro"]["Programacion"] = 19;

    
    for (auto estudiante : estudiantes) {
        float suma = 0; 
        cout << "\n=== Estudiante: " << estudiante.first << " ===\n";
        for (auto nota : estudiante.second) {
            cout << nota.first << ": " << nota.second << endl;
            suma += nota.second;
        }
        float promedio = suma / estudiante.second.size();
        cout << "Promedio: " << promedio << endl;
    }
}
