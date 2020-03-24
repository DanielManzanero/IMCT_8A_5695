#include <iostream>
using namespace std;
int n=0,m=0,t=0;
void ingresar(){
cin>>n;
return;
}

void calcular(){
    ingresar();
    cout<<"Los múltiplos son:"<<endl;
    for (int i = 0; i < n; i++)
    {
        m=4*t++;
        cout<<m<<endl;
    }
return;
}

int main(){
    cout<<"Ingrese la cantidad de múltiplos de 4 que desee"<<endl;
    calcular();
return 0;
}




