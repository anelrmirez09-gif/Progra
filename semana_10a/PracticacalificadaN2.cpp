#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Paciente{

	private:
		string nombre;
		int edad;
		string dni;	
	public:
		//mi constructor
		Paciente(){}
		Paciente(string _nombre, int _edad, string _dni){
			
			nombre= _nombre;
			edad= _edad;
			dni= _dni;
		}	
		//mis getters
		string getNombre(){ return nombre;}
		int getEdad(){ return edad;}
		string getDni(){ return dni;}
		
		//mis setters
		void setNombre(string _nombre){ nombre= _nombre;}
		void setEdad(int _edad){ edad= _edad;}
		void setDni(string _dni){ dni= _dni;}
		
		//mi metodo
		void informacion(){
			cout<<"nombre del paciente: "<<nombre<<" || Edad: "<<edad<<" || Dni: "<<dni<<endl;
		}
	};
	
class Medicos{
	
	private:
		string nombre;
		string tipomedico;
	
	public:
		//constructor
		Medicos(){}
		Medicos(string n, string tipo){
			
			nombre= n;
			tipomedico= tipo;
		}
		//getters
		string getNombre(){return nombre;}
		string getTipomedico(){ return tipomedico;}
		
		//setters
		void setNombre(string n){ nombre = n;}
		void setTipomedico(string tipo){ tipomedico= tipo;}	
		//metodo
		
		void mostrarMedico(){
			cout<<"nombre del Medico: "<<nombre<<" || especialidad: "<<tipomedico<<endl;
		}
	};

class Servicio{
	
	private:
		string especialidad;
		double costo;
	
	public:
		//constructor
		Servicio(){} 	
		Servicio(string especial, double cost){
				
			especialidad= especial;
			costo = cost;
		}
		//getter
		string getEspecialidad(){return especialidad;}
		double getCosto(){return costo;}
		//setter 
		void setEspecialidad(string especial){ especialidad= especial;}
		void setCosto(double cost){ costo = cost;}
		
		void mostrarServicio(){
			cout << "Servicio: "<< especialidad <<" || Costo: "<< costo << endl;
		}
	};

class Cita{
	
	private:
		string fecha;
		Paciente paciente;
		Medicos medicos;
		Servicio servicio;
	public:
		//constructor
		Cita() {}
		Cita(string f, Paciente pac, Medicos medi, Servicio servi){
			
			fecha = f;
			paciente = pac;
			medicos = medi;
			servicio = servi;
		}
		//getter
		string getFecha(){ return fecha;}
		Paciente getPaciente(){ return paciente;}
		Medicos getMedicos(){ return medicos;}
		Servicio getServicio(){ return servicio; }
		//setter
		   void setFecha(string f) { fecha = f; }
    	void setPaciente(Paciente pac) { paciente = pac; }
    	void setMedicos(Medicos medi) { medicos = medi; }
    	void setServicio(Servicio servi) { servicio = servi; }
    	
    	//metodo
    	void mostrarInfo() {
    	cout << "Cita: " << fecha
         << " | Paciente: " << paciente.getNombre()
         << " | Medico: " << medicos.getNombre()
         << " | Servicio: " << servicio.getEspecialidad()
         << " | Costo: " << servicio.getCosto()
         << endl;
		}

	};
	
int main(){
	
	//creo los servicios fijos a elegir
	Servicio a1("Odontologia",100);
	Servicio a2("Psiquiatria",200);
	Servicio a3("Podologia",50);
	
	//creo los variables de pacientes, medicos y las citas
	Paciente p1,p2,p3,p4,p5;
	int numPacientes=0;
	
	Medicos m1,m2,m3;
	int numMedicos=0;
	
	Cita c1,c2,c3;
	int numCitas=0;
	
	//creo el menu de opciones 
	
	int opcion;
	do {
		cout<<"----------CENTRO MEDICO ANEL----------"<<endl;
		cout<<"1.Registrar paciente 2.Registrar Medico 3.Crear cita 4.MOSTRAR CITAS 0.salir"<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1:{
				 if (numPacientes < 5) {
                    string nombre, dni;
                    int edad;
                    cout << "Nombre: "; cin >> nombre;
                    cout << "Edad: "; cin >> edad;
                    cout << "DNI: "; cin >> dni;

                    if (numPacientes == 0) p1 = Paciente(nombre, edad, dni);
                    else if (numPacientes == 1) p2 = Paciente(nombre, edad, dni);
                    else if (numPacientes == 2) p3 = Paciente(nombre, edad, dni);
                    else if (numPacientes == 3) p4 = Paciente(nombre, edad, dni);
                    else if (numPacientes == 4) p5 = Paciente(nombre, edad, dni);

                    numPacientes++;
                } else {
                    cout << "Ya hay 5 pacientes registrados." << endl;
				}
				break;
			}
			case 2: {
                string nombre, especialidad;
                cout << "Nombre: "; cin >> nombre;
                cout << "Especialidad: "; cin >> especialidad;

                if (numMedicos == 0) m1 = Medicos(nombre, especialidad);
                else if (numMedicos == 1) m2 = Medicos(nombre, especialidad);
                else if (numMedicos == 2) m3 = Medicos(nombre, especialidad);

                numMedicos++;
                break;
            }
            case 3: {
                if (numPacientes == 0 || numMedicos == 0) {
                    cout << "Debe haber al menos un paciente y un medico." << endl;
                } else {
                    string fecha;
                    int pacienteSel, medicoSel, servicioSel;
                    cout << "Fecha de la cita: "; cin >> fecha;

                    cout << "Seleccione paciente (1-" << numPacientes << "): ";
                    cin >> pacienteSel;
                    cout << "Seleccione medico (1-" << numMedicos << "): ";
                    cin >> medicoSel;

                    cout << "Servicios disponibles:" << endl;
                    cout << "1. Odontologia" << endl;
                    cout << "2. Psiquiatria" << endl;
                    cout << "3. Podologia" << endl;
                    cout << "Seleccione servicio (1-3): ";
                    cin >> servicioSel;

                    // Elegir paciente
                    Paciente pacienteElegido;
                    if (pacienteSel == 1) pacienteElegido = p1;
                    else if (pacienteSel == 2) pacienteElegido = p2;
                    else if (pacienteSel == 3) pacienteElegido = p3;
                    else if (pacienteSel == 4) pacienteElegido = p4;
                    else pacienteElegido = p5;

                    // Elegir medico
                    Medicos medicoElegido;
                    if (medicoSel == 1) medicoElegido = m1;
                    else if (medicoSel == 2) medicoElegido = m2;
                    else medicoElegido = m3;

                    // Elegir servicio
                    Servicio servicioElegido;
                    if (servicioSel == 1) servicioElegido = a1;
                    else if (servicioSel == 2) servicioElegido = a2;
                    else servicioElegido = a3;

                    // Crear nuevo objeto cita, para ahcer paso por valor con el costructor de la clase
                    Cita nuevaCita(fecha, pacienteElegido, medicoElegido, servicioElegido);
                    nuevaCita.mostrarInfo();

                    // Guardar en archivo directo
                    ofstream archivo("citas.txt", ios::app);
                    archivo << "Fecha: " << nuevaCita.getFecha() << endl;
                    archivo << "Paciente: " << nuevaCita.getPaciente().getNombre()
                            << " | Edad: " << nuevaCita.getPaciente().getEdad()
                            << " | DNI: " << nuevaCita.getPaciente().getDni() << endl;
                    archivo << "Medico: " << nuevaCita.getMedicos().getNombre()
                            << " | Especialidad: " << nuevaCita.getMedicos().getTipomedico() << endl;
                    archivo << "Servicio: " << nuevaCita.getServicio().getEspecialidad()
                            << " | Costo: " << nuevaCita.getServicio().getCosto() << endl;
                    archivo << "----------------------------------------" << endl;
                    archivo.close();

                    cout << "Cita guardada en archivo correctamente." << endl;

                    // Guardar en memoria para mostrar en pantalla
                    if (numCitas == 0) c1 = nuevaCita;
                    else if (numCitas == 1) c2 = nuevaCita;
                    else if (numCitas == 2) c3 = nuevaCita;
                    numCitas++;
                }
                break;
            }
            case 4: {
                if (numCitas > 0) c1.mostrarInfo();
                if (numCitas > 1) c2.mostrarInfo();
                if (numCitas > 2) c3.mostrarInfo();
                break;
            }
        }
    } while(opcion != 0);

    return 0;
}	