#include <iostream>
using namespace std;

#define num 1000000

long long cantidadI(char text[], long long cont){
	for(int i=0; text[i]!='\0'; ++i){
		cont++;
	}
	return cont;
}
void concatena(char text1[], char text2[], long long aux1, long long aux2){
	int z=0;
	for(int i=aux2; i<aux1+aux2+1; ++i){
		text2[i]=text1[z];
		z++;
	}
	cout<<"\nCadena concatenada:\n";
	for(int i=0; i<(aux1+aux2); ++i)
		cout<<text2[i];	
}

int main(){
	static char text1[num];
	static char text2[num];
	long long cont = 0;
	long long aux1=0;
	long long aux2=0;
	cout<<"Digite la cadena 1: \n";
	cin.getline(text1,num,'\n');
	cout<<"Digite la cadena 2: \n";
	cin.getline(text2,num,'\n');
	aux1=cantidadI(text1, cont);
	aux2=cantidadI(text2, cont);
	concatena(text1, text2, aux1, aux2);
   	return 0; 
}
