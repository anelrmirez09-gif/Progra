#include<iostream>
using namespace std;
int main(){

char opcion;
float a,b,suma,resta,division,multiplicacion;

do{

	cout<<"Escriba primer numero: "<<endl;
	cin>>b;
	cout<<"Escriba segundo numero: "<<endl;
	cin>>a;
	
suma= a+b;
resta= a-b;
division= a/b;
multiplicacion= a * b;

	cout<<"\n"<<endl;
	cout<<"la suma es: "<<suma<<endl;
	cout<<"la resta es: "<<resta<<endl;
	cout<<"la division es: "<<division<<endl;
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\n"<<endl;
	
	cout<<"Deseas continuar? (s/n)"<<endl;
	cin>>opcion;
}while(opcion!='n');

	cout<<"operacion terminada"<<endl;
}
