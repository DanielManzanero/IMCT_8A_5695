#include <iostream>
using namespace std;
int main(){
int n=0, sumpar=0, npar=0;
float media=0,nimpar=0,sumimpar=0;
cout<<"Ingrese 10 numeros enteros"<<endl;
for(int a=1;a<=10;a++){
cin>>n;
if(n%2==0){
npar++;
sumpar+=n;
}else{
nimpar++; 
sumimpar+=n;
}
}
if(nimpar!=0)
media=sumimpar/nimpar;
cout<<"Son "<<npar<<" numeros pares"<<endl;
cout<<"La suma de todos los pares es: "<<sumpar<<endl;
cout<<"La media de todos los impares es: "<<media<<endl;
return 0;
}
