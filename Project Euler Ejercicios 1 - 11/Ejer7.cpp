#include <iostream>
using namespace std;

int main(){
    int a, cont = 0, primo = 2;
    while(10001 > cont){
        a = 0;
        for (int i = 1; i <= primo; i++){
            if(primo % i == 0){
                a++;
            }
        }
        if(a == 2){
            cout<<"El "<<cont + 1<<" primo es: "<<primo<<"\n";
            cont++;
        }
        primo++;
    }
    return 0;
}
