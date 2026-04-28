#include<iostream>
using namespace std;

int sumar(int a,int b){
	return a+b;
}
int resta(int x,int y){
	return x-y;
}
float division(float q, float w){
	if(w == 0){
		cout<<"error, division indefinida "<<endl;
		return 0;
	}
	return q/w;
}
int multiplicacion(int e, int r){
	return e*r;
}

int main(){
	int m,c;
	cout<<"Escriba primer numero: "<<endl;
	cin>>m;
	cout<<"Escriba segundo numero: "<<endl;
	cin>>c;
	cout<<"\n"<<endl;
	cout<<"la suma es: "<<sumar(m,c)<<endl;
	cout<<"la resta es: "<<resta(m,c)<<endl;
	cout<<"la division es: "<<division(m,c)<<endl;
	cout<<"la multiplicacion es: "<<multiplicacion(m,c)<<endl;
	
	return 0;
}
