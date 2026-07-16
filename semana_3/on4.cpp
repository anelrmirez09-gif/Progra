#include<iostream>
using namespace std;

int main(){
	int numPar=0,numImpar=0;
	
	for(int i=0; i<=100; i++){
		
		if(i % 2 == 0){
			numPar += i;
		}else{
			numImpar += i;
		}
	}
	 cout<<"suma de pares: "<<numPar<<endl;
	 cout<<"suma de impares: "<<numImpar<<endl;
	
	return 0;
}
