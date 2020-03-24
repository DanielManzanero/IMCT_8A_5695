#include <iostream>
using namespace std;

int N1=0,N2=0,suma=0;

void registro (){
    cin>>N1;
return;
}

void ciclo (){
    for (int i = 0; i < 10; i++)
    {
        registro();
        if (N1 > N2)
        {
            N2 = N1;
            suma = N2 + suma;
        }
        else
        {
            cout<<"La suma no se podrá hacer porque los números que ingresaste no están ordenados"<<endl;
            return;
        }        
    }
return;    
}

int main(){
    cout<<"Ingrese 10 números enteros"<<endl;
    ciclo();
    cout<<"La suma de sus números es: "<<suma<<endl;
return 0;
}


