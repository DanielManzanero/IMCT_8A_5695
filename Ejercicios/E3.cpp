#include <iostream>
using namespace std;
int suma=0;
unsigned long long producto=1;


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
cout<<"Y el producto de esos numeros es: "<<"EL NUMERO ES MAS GRANDE QUE UN UNSIGNED LONG LONG, ES ENORME Y NO ENCONTRE COMO EXPRESARLO :'C"<<endl;
return 0;
}

