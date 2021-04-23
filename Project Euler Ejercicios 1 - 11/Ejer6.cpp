#include <iostream>
using namespace std;
int main(){
	int suma1 = 0, suma2 = 0, resultado;
	for(int i = 1; i <=100; i++ ){
		suma1 = suma1 + (i*i);
		suma2 = suma2 + i;
	}
	suma2 = suma2 * suma2;
	resultado = suma2 - suma1;
	cout<<"La diferencia es: \n"<<resultado;
	return 0; 	
}

