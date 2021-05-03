#include <iostream>
using namespace std;

#define num 1000000
void cambioI(int Array[]){
	int aux = 0;
	for(int i=0; i<num/2; i++){
		aux = Array[i];
		Array[i] = Array[num-i-1];
		Array[num-i-1] = aux;
   	}
}

void cambioR(int Array[], int a, long long int cont){
	int aux = 0;
	aux = Array[cont];
	Array[cont] = Array[a-cont-1];
	Array[a-cont-1] = aux;
	if(cont < a/2){
		cambioR(Array, a, ++cont);
	}
}

int main(){
	static int Array[num];
	long long int cont=0;
	for (long int i = 0; i < num; i++){
		Array[i] = i+1;
	}
	long int n=0;
	for (long int i = 0; i < num; i++){
		cout<<Array[i]<<endl;
	}
	
	// Cambio Iterativo
	cout<<"\nCambio Iterativo\n";
	cambioI(Array);
	for (long int i = 0; i < num; i++){
		cout<<Array[i]<<endl;
	}
	
	// Cambio Recursivo
	cout<<"\nCambio Recursivo\n";
	cambioR(Array, num, cont);
	for (long int i = 0; i < num; i++){
		cout<<Array[i]<<endl;
	}
   	return 0; 
}
