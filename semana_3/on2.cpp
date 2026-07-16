#include<iostream>
using namespace std;

int main(){
	int compra,descuento,total;
	
	cout<<"introduce monto de compra: "<<endl;
	cin>>compra;
	
	if(compra>500){
		descuento= compra *0.05;
		total= compra - descuento;
	}else if(compra>200){
		descuento= compra *0.02;
		total= compra - descuento;
	}else if(compra>100){
		descuento= compra *0.01;
		total= compra - descuento;	
	}else{
		total=compra;
	}
	
	cout<<"El monto total a pagar es: "<<total<<endl;
	
	return 0;
}
