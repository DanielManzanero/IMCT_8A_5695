#include <iostream>
using namespace std;
int main(){
int par=0,impar=0,n;
for(n=1;n<=200;n++){
if(n%2==0){
par=par+n;}else{impar=impar+n;}}
cout<<"la suma de todos los pares entre 1 y 200 es: "<<par<<endl;
cout<<"la suma de todos los impares entre 1 y 200 es: "<<impar<<endl;

}
