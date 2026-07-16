#include<iostream>
using namespace std;

int main(){
	int edad;
	
	cout<<"introduce edad: "<<endl;
	cin>>edad;
	
	if(edad<=12){
		cout<<"Es un ninio"<<endl;
	}
	else if(edad>=13 && edad<=17){
		cout<<"Es adolescente"<<endl;
	}
	else if(edad>=18 && edad<=59){
		cout<<"Es adulto"<<endl;
	}
	else if(edad>59 && edad<91){
		cout<<"Es anciano"<<endl;
	}else{
		cout<<"Es chino inmortal"<<endl;
	}
	
	return 0;
}
