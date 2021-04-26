#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int nt, nn = 0; 
	int div;
	while(1){
		nn++;
		nt += nn;
		div = 0;
		for(int i = 1; i < (int)floor(sqrt(nt)); i++){
			if(nt % i == 0)
				div += 2;
			if((int)floor(sqrt(nt)) * (int)floor(sqrt(nt)) == nt)
				div--;
		}
		if(div>500)
			break;
	}
	cout<<"\nPrimer numero del Triangulo: "<<nt;
	cout<<"\nNumero de Divisores: "<<div;
}
