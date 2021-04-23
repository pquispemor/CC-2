#include <iostream>

#include <iostream>
using namespace std;

int main(){
    long long int a = 600851475143;
    int mayor = 0;
    for (int i = 2; i <= a; i++)
    {
        while(a % i == 0)
        {
            cout<<i<<" ";
            a = a / i;
        }
        if (mayor < i)
        	mayor = i;

    }
    cout<<"\nEl mayor factor primo es: "<<mayor;
    return 0;
}

