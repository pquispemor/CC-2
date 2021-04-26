#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	unsigned long long M[21][21];
	
	for(int i = 0; i < 21; i++)
		for(int j = 0; j < 21; j++)
			M[i][j] = 1;
	
	for(int i = 1; i < 21; i++)
		for(int j = 1; j < 21; j++)
			M[i][j] = M[i-1][j] + M[i][j-1];
	
	cout<<"Existen :"<<M[20][20]<<" rutas.";
	return 0;
}
