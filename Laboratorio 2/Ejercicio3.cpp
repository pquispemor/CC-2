#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

#define num 1000000

void ordenamientoasc(int Array[], int a){
	long long int aux;
	for(int i=0; i<a-1; i++){
		for(int j=0; j<a-1; j++){
			if(Array[j]>Array[j+1]){
				aux=Array[j];
				Array[j]=Array[j+1];
				Array[j+1]=aux;
			}
		}
	}
}

int main(){
	static int Array[num]; 
	srand(time(NULL));
	for (long int i = 0; i < num; i++){
		Array[i] = 1+rand()%(3);
	}
	//Imprimiendo Array
	/*
	for (long int i = 0; i < num; i++){
		cout<<Array[i]<<endl;
	}
	*/
	ordenamientoasc(Array, num);
	//Imprimiendo Array Ordenado
	cout<<"\nOrdenamiento Ascendente\n";
	for (long int i = 0; i < num; i++){
		cout<<Array[i]<<endl;
	}
   	return 0; 
}
