#include<iostream>
#include<math.h>
using namespace std;
int main (){
	int a, b, c, resultado, a2, b2, c2 = 0;
	for(a = 1; a < (1000 / 3); a++){
		for(b = 2; b < (1000 / 2); b++){
			c = 1000 - b - a;
			a2 = pow(a,2);
			b2 = pow(b,2);
			c2 = pow(c,2);
			if((a2 + b2) == c2){
				cout<<"Los numeros "<<a<<" + " <<b<< " + "<<c<<" = 1000\n";
				resultado=a * b * c;
				cout<<"\nEl Producto de estos es: "<<a<<" * " <<b<< " * "<<c<<" = "<<resultado;
			}
		}
	}
	return 0;
}
