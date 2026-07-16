#include<iostream>
using namespace std;

int main(){
	int tipoCliente;
	float consumo,descuento,total;
	
	cout<<"ingrese el total de consumo: "<<endl;
	cin>>consumo;
	
	cout<<"ingrese tipo de cliente que es(1.nacional, 2.vip, 3.premium): "<<endl;
	cin>>tipoCliente;
	
	switch(tipoCliente){
		//nacional
		case 1:
			descuento = consumo * 0.0;
				cout<<"El cliente nacional.Descuento el %0"<<endl;
		break;
		case 2:
			descuento = consumo * 0.20;
				cout<<"El cliente vip.Descuento el %20"<<endl;
		break;
		case 3:
			descuento = consumo * 0.30;
				cout<<"El cliente vip.Descuento el %30"<<endl;
		break;
	default:
		cout<<"Tipo de cliente invalido"<<endl;
		return 0;				
	}
	
	total = consumo - descuento;
		cout<<"total es pagar es: "<<total<<endl;
		
	return 0;	

}
