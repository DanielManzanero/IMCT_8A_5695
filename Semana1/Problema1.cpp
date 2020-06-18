#include <iostream>
using namespace std;

int* algoritmo(int n,int* cadena,int pos){
if(n!=1){
if(n%2==0){
n=n/2;}else{
n=(n*3)+1;}
cadena[pos]=n;pos=pos+1;algoritmo(n,cadena,pos);}
return cadena;}

void visualizar(int* cadena,int pos){
cout<<cadena[pos]<<" ";
if(cadena[pos]==1)cout<<endl;else visualizar(cadena,(pos+1));}

int main(){
int n,pos=0;
int* cadena;
cin>>n;
cadena[pos]=n;pos++;
if(n<=106&&n>=1){cadena=algoritmo(n,cadena,pos);
visualizar(cadena,0);}
return 0;}
