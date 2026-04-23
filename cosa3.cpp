#include<iostream>
using namespace std;

int main(){
	int a;
	
	cout<<"escriba el anio a analizar: "<<endl;
	cin>>a;
	
	if(a<1000 || a>9999){
		cout<<"anio invalido,vuelve a compilar"<<endl;
		return 0;
	}
	
	 if ((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        cout << a << " es bisiesto." << endl;
    } else {
        cout << a << " no es bisiesto." << endl;
    }

    return 0;	
}