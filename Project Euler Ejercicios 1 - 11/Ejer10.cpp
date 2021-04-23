#include <iostream>
#include <math.h>
using namespace std;

#define num 2000001

int main(){
    static int primo[num];
    long long i, j, suma = 0;
    for (i=1; i <= num; i++)
    	primo[i] = 1;
	for (i = 2; i <= sqrt(num); i++)
		if (primo[i] == 1)
			for( j = i; i*j <=num; j++)
				primo[i*j] = 0;
	for (i = 2; i <= num; i++)
		if (primo[i] == 1)
			suma = suma + i;
    cout<<"La suma de los numeros primos por debajo de 2 millones es: "<<suma;
    return 0;
}
