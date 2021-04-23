#include <iostream>
using namespace std;

int main (){
	int cont = 0;
	for (int i = 0; i < 1000; i++){
		if (i%3 == 0 || i%5 == 0){
			cont = cont + i;
		}
			
	}
	cout<<"la suma de todos los multiplos de 3 o 5 por debajo de 1000 es: "<<cont;
	return 0;
}
