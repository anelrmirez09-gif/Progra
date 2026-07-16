#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// ================== CLASE PERSONA ==================
class Persona {
private:
    string dni;
    string nombre;
    string tipo; // Docente o Alumno

public:
    Persona(string dni = "", string nombre = "", string tipo = "")
        : dni(dni), nombre(nombre), tipo(tipo) {}

    string getDni() const { return dni; }
    string getNombre() const { return nombre; }
    string getTipo() const { return tipo; }

    void mostrar() const {
        cout << "DNI: " << dni << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
    }
};

// ================== CLASE CURSO ==================
class Curso {
private:
    string codigo;
    string nombreCurso;
    Persona docente;
    int cantidadAlumnos;

public:
    Curso(string codigo = "", string nombreCurso = "", Persona docente = Persona(), int cantidadAlumnos = 0)
        : codigo(codigo), nombreCurso(nombreCurso), docente(docente), cantidadAlumnos(cantidadAlumnos) {}

    string getCodigo() const { return codigo; }
    string getNombreCurso() const { return nombreCurso; }
    Persona getDocente() const { return docente; }
    int getCantidadAlumnos() const { return cantidadAlumnos; }

    void mostrar() const {
        cout << "Codigo: " << codigo << endl;
        cout << "Nombre del curso: " << nombreCurso << endl;
        cout << "Docente: " << docente.getNombre() << " (DNI: " << docente.getDni() << ")" << endl;
        cout << "Cantidad de alumnos: " << cantidadAlumnos << endl;
    }
};

// ================== FUNCIONES ==================
void mostrarDocentes(const vector<Persona>& docentes) {
    cout << "\n--- DOCENTES REGISTRADOS ---" << endl;
    if (docentes.empty()) {
        cout << "No hay docentes registrados." << endl;
    }
    for (size_t i = 0; i < docentes.size(); i++) {
        cout << "\nDocente #" << i + 1 << endl;
        docentes[i].mostrar();
    }
}

void mostrarAlumnos(const vector<Persona>& alumnos) {
    cout << "\n--- ALUMNOS REGISTRADOS ---" << endl;
    if (alumnos.empty()) {
        cout << "No hay alumnos registrados." << endl;
    }
    for (size_t i = 0; i < alumnos.size(); i++) {
        cout << "\nAlumno #" << i + 1 << endl;
        alumnos[i].mostrar();
    }
}

void mostrarCursos(const vector<Curso>& cursos) {
    cout << "\n--- CURSOS REGISTRADOS ---" << endl;
    if (cursos.empty()) {
        cout << "No hay cursos registrados." << endl;
    }
    for (size_t i = 0; i < cursos.size(); i++) {
        cout << "\nCurso #" << i + 1 << endl;
        cursos[i].mostrar();
    }
}

void guardarTodoEnUnArchivo(const vector<Persona>& docentes,
                            const vector<Persona>& alumnos,
                            const vector<Curso>& cursos) {
    ofstream archivo("datos.txt");

    archivo << "===== DOCENTES =====" << endl;
    for (const auto& d : docentes) {
        archivo << "DNI: " << d.getDni() << endl;
        archivo << "Nombre: " << d.getNombre() << endl;
        archivo << "Tipo: " << d.getTipo() << endl;
        archivo << "--------------------" << endl;
    }

    archivo << endl << "===== ALUMNOS =====" << endl;
    for (const auto& a : alumnos) {
        archivo << "DNI: " << a.getDni() << endl;
        archivo << "Nombre: " << a.getNombre() << endl;
        archivo << "Tipo: " << a.getTipo() << endl;
        archivo << "--------------------" << endl;
    }

    archivo << endl << "===== CURSOS =====" << endl;
    for (const auto& c : cursos) {
        archivo << "Codigo: " << c.getCodigo() << endl;
        archivo << "Nombre del curso: " << c.getNombreCurso() << endl;
        archivo << "Docente: " << c.getDocente().getNombre()
                << " (DNI: " << c.getDocente().getDni() << ")" << endl;
        archivo << "Cantidad de alumnos: " << c.getCantidadAlumnos() << endl;
        archivo << "--------------------" << endl;
    }

    archivo.close();
    cout << "\n? Datos guardados correctamente en datos.txt" << endl;
}

// ================== MAIN ==================
int main() {
    vector<Persona> docentes;
    vector<Persona> alumnos;
    vector<Curso> cursos;

    int opcion;

    do {
        cout << "\n========= MENU PRINCIPAL =========" << endl;
        cout << "1. Registrar docente" << endl;
        cout << "2. Registrar alumno" << endl;
        cout << "3. Registrar curso" << endl;
        cout << "4. Mostrar docentes" << endl;
        cout << "5. Mostrar alumnos" << endl;
        cout << "6. Mostrar cursos" << endl;
        cout << "7. Guardar todo en un solo archivo TXT" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            string dni, nombre;
            cout << "\n--- REGISTRAR DOCENTE ---" << endl;
            cout << "Ingrese DNI: ";
            cin >> dni;
            cin.ignore();
            cout << "Ingrese nombre: ";
            getline(cin, nombre);
            docentes.emplace_back(dni, nombre, "Docente");
            cout << "Docente registrado." << endl;
            break;
        }
        case 2: {
            string dni, nombre;
            cout << "\n--- REGISTRAR ALUMNO ---" << endl;
            cout << "Ingrese DNI: ";
            cin >> dni;
            cin.ignore();
            cout << "Ingrese nombre: ";
            getline(cin, nombre);
            alumnos.emplace_back(dni, nombre, "Alumno");
            cout << "Alumno registrado." << endl;
            break;
        }
        case 3: {
            string codigo, nombreCurso, dniDocente;
            int cantidadAlumnos;
            cout << "\n--- REGISTRAR CURSO ---" << endl;
            cout << "Ingrese codigo del curso: ";
            cin >> codigo;
            cin.ignore();
            cout << "Ingrese nombre del curso: ";
            getline(cin, nombreCurso);
            cout << "Ingrese DNI del docente: ";
            cin >> dniDocente;
            cout << "Ingrese cantidad de alumnos: ";
            cin >> cantidadAlumnos;

            bool encontrado = false;
            for (const auto& d : docentes) {
                if (d.getDni() == dniDocente) {
                    cursos.emplace_back(codigo, nombreCurso, d, cantidadAlumnos);
                    cout << "Curso registrado." << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << "Error: docente con ese DNI no existe." << endl;
            }
            break;
        }
        case 4: mostrarDocentes(docentes); break;
        case 5: mostrarAlumnos(alumnos); break;
        case 6: mostrarCursos(cursos); break;
        case 7: guardarTodoEnUnArchivo(docentes, alumnos, cursos); break;
        case 8: cout << "\nSaliendo del programa..." << endl; break;
        default: cout << "Opcion incorrecta." << endl; break;
        }
    } while (opcion != 8);

    return 0;
}