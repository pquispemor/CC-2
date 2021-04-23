#include <iostream>
using namespace std;

int main (){
	int a = 0, b = 1, aux, fibo = 0;
	do{
		aux = a+b;
		a = b;
		b = aux;
		if (a%2 == 0){
			fibo = fibo + a;
		}
				
	}while(a <= 4000000);
	
	cout<<"Suma de fibonacci pares "<< fibo;
	return 0;
}
