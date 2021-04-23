#include <iostream>
using namespace std;
int main(){
	int a = 1, b, num=0;
	while ( a > 0){
		b=1;
		while ( (a % b == 0) && (b <= 20)){
			if (b == 20){
				num = a;
				break;
			}
			b++;
		}
		a++;
		if (num > 0){
			break;
		}
	}
	cout<<"El numero positivo mas pequeño que es divisible por los numeros del 1 al 20 es: \n"<<num;
	return 0;
	
}

