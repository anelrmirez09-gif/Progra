#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("mensajito_UwU.txt");
    string linea;

    if (!archivo) {
        // Mensaje de error con cout
        cout << "Error: no se pudo abrir el archivo." << endl;
        return 1; // salir del programa
    }

    cout << "Contenido del archivo:" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close();
    return 0;
}
