#include <iostream>
using namespace std;
int suma=0;
long double producto=1;


int calcular(){
        for(int a=20;a<=400;a+=2){
         if(a%2==0){
         producto=producto*a;
         suma+=a;
         }
        }
return 0;
}



int main(){
calcular();
cout<<"La suma de los numeros pares comprendidos entre 20 y 400 inclusive es: "<<suma<<endl;
cout<<"Y el producto de esos numeros es: "<<producto<<endl;
return 0;
}

