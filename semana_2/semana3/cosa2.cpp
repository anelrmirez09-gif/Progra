#include<iostream>
using namespace std;

int main(){
	float a,b,c;
	
	cout<<"inserte primer lado: "<<endl;
	cin>>a;
	cout<<"inserte segundo lado: "<<endl;
	cin>>b;
	cout<<"inserte tercer lado: "<<endl;
	cin>>c;
	cout<<"\n"<<endl;
	
	if(a==0 || b==0 || c==0){
		cout<<"No es triangulo"<<endl;
	}
	else if(a == b && b == c){
		cout<<"el triangulo es equilatero"<<endl;
	}
	else if(a==b || b==c || a==c){
		cout<<"el triangulo es isoseles"<<endl;
	}
	else if(a!= b && b!=c && a!=c){
		cout<<"el triangulo es escaleno"<<endl;
	}
	
	return 0;
}
