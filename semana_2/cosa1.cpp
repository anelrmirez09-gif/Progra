#include<iostream>
using namespace std;

int main(){
	int m,c,sumar,restar,dividir,multiplicar;
	int acumulador=0;
	char opcion;
	
	do{
	cout<<"Escriba primer numero: "<<endl;
	cin>>m;
	cout<<"Escriba segundo numero: "<<endl;
	cin>>c;
	
	sumar= m + c;
	restar= m + c;
	dividir= m / c;
	multiplicar= m * c;
	
	cout<<"\n"<<endl;
	cout<<"la suma es: "<<sumar<<endl;
		acumulador = acumulador + sumar;
	cout<<"la resta es: "<<restar<<endl;
		acumulador= acumulador + restar;
	cout<<"la division es: "<<dividir<<endl;
		acumulador= acumulador + dividir;
	cout<<"la multiplicacion es: "<<multiplicar<<endl;
		acumulador= acumulador + multiplicar;
		
	cout<<"La acumulacion total es: "<<acumulador<<endl;	
	
	cout<<"deseas continuar?(s/n): "<<endl;
	cin>>opcion;
	
	
	}while(opcion == 's' || opcion== 'S');
	
	cout<<"Programa terminado"<<endl;
	
	return 0;
}