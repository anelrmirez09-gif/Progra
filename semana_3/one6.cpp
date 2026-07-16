#include<iostream>
using namespace std;

int main(){
	int x = 9;
	int intentos=0;
	bool acertado=false;
	for(int i=0; i<4; i++){
		
		cout<<"Adivina el numero: "<<endl;
		cin>>intentos;
		
	if(intentos == x){
		cout<<"Adivinaste el numero"<<endl;
		acertado=true;
		break;
	cout<<"\n"<<endl;
}
}
	if(!acertado) {
        cout << "No adivinaste" << endl;
}
return 0;	
}
