#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	long Inicio, resultado;
	long long numero;
	int cond,cond2;
	
	for(int i=2; i < 1000000; i++){
		cond = 1;
		numero = i;
		while (numero > 1){
			while(numero % 2 == 0){
				numero /= 2;
				cond++;
			}
			if(numero > 1){
				numero = (numero * 3) + 1;
				cond++;
			}
		}
		if(cond > cond2){
			cond2 = cond;
			resultado = i;
		}
	}
	cout<<"Numero Inicial :"<<resultado<<", Cadena mas larga :"<<cond2;
	return 0;
}
