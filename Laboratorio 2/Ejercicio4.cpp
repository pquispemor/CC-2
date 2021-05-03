#include <iostream>

using namespace std;

#define num 1000000

long long cantidadI(char text[], long long cont){
	for(int i=0; text[i]!='\0'; ++i){
		cont++;
	}
	return cont;
}

long long cantidadR(char text[], long long cont){
	if(text[cont]=='\0')
		return cont;
	return cantidadR(text,++cont);
}

int main(){
	static char text[num];
	long long cont = 0;
	cout<<"Digite su texto: \n";
	cin.getline(text,num,'\n');
	cout<<"\nIterativa\n";
	cout<<"Numero de elementos: "<<cantidadI(text, cont)<<endl;
	cout<<"\nRecursiva\n";
	cout<<"Numero de elementos: "<<cantidadR(text, cont)<<endl;
   	return 0; 
}
