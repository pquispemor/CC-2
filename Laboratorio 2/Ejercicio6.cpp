#include <iostream>
using namespace std;

#define num 1000000

long long cantidadI(char text[], long long cont){
	for(int i=0; text[i]!='\0'; ++i){
		cont++;
	}
	return cont;
}
void orden(char text1[], char abc[], long long aux1, long long aux2){
	static int text2[num];
	for(int i=0; i<aux1; i++){
		for(int j=0; j<aux2; j++){
			if(text1[i]==abc[j]){
				text2[i]=j;
			}
		}
	}
	//Ordenamiento
	long long int ayuda;
	for(int i=0; i<aux1-1; i++){
		for(int j=0; j<aux1-1; j++){
			if(text2[j]>text2[j+1]){
				ayuda=text2[j];
				text2[j]=text2[j+1];
				text2[j+1]=ayuda;
			}
		}
	}
	
	//Transformacion
	for(int i=0; i<aux1; i++){
		for(int j=0; j<aux2; j++){
			if(text2[i]==j){
				text1[i]=abc[j];
			}
		}
	}

	cout<<"\nCadena Lexicografica:\n";
	for(int i=0; i<aux1; ++i)
		cout<<text1[i];	
}

int main(){
	static char text1[num];
	char abc[]={"abcdefghijklmnopqrstuvwxyz"};
	long long cont = 0;
	long long aux1=0;
	long long aux2=0;
	cout<<"Digite la cadena 1: \n";
	cin.getline(text1,num,'\n');
	aux1=cantidadI(text1, cont);
	aux2=cantidadI(abc, cont);
	orden(text1, abc, aux1, aux2);
   	return 0; 
}
