#include <iostream>
using namespace std;

int main(){
	int pin=123;
	int pinsito;
	int saldo=1500;
	int opciones,deposito,descuento;
	cout<<"-----CAJERO-----"<<endl;
	do{
	cout<<"ingrese pin: "<<endl;
	cin>>pinsito;
	 
	if(pinsito == pin){
		cout<<"codigo correcto,ingreso."<<endl;
		break;
	}
	}while(pinsito != pin);
	cout<<"-----OPCIONES-----"<<endl;
	
	cout<<"1.consultar saldo 2.retirar dinero 3.depositar dinero 4.salir"<<endl;
	cin>>opciones;
	
	switch(opciones){
		case 1:
			cout<<"Tu saldo actual es: "<<saldo<<endl;
			break;
		case 2:
			cout<<"ingrese cuanto desea retirar: "<<endl;
			cin>>descuento;
				
  				if (descuento <= saldo) {
                saldo = saldo - descuento;
                cout << "Su saldo actual ahora es: " << saldo << endl;
            	} else {
                cout << "Saldo insuficiente." << endl;
            	}
			break;
		case 3:
			cout<<"ingrese cuanto desea depositar: "<<endl;
			cin>>deposito;
			
			saldo = saldo + deposito;
			
			cout<<"saldo actual es: "<<saldo<<endl;
			break;
		case 4:
			cout<<"Salir.solo revise."<<endl;	
			break;
		
		default:
			cout<<"no se hizo nada"<<endl;			
		}
	return 0;
}