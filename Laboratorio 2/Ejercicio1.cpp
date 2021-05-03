#include <iostream>
using namespace std;

#define num 100000

long long sumaI(int Array[]){
	long long int suma=0;
	for(int i=0; i<num; i++){
   		suma=suma+Array[i];
   	}
   	return suma;
}

long long sumaR(int Array[], int a){
	if (a == 0)
		return Array[0];
	else
		return Array[a] + sumaR(Array,--a);		  	
}

int main(){
	static int Array[num]; 
	for (long int i = 0; i < num; i++){
		Array[i] = i+1;
	}
	long int n=0;
	cout<<"La suma Iterativa es: "<<sumaI( Array)<<endl;
   	cout<<"La suma Recursiva es: "<<sumaR( Array, num);
   	return 0; 
}







