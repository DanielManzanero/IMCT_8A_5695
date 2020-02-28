#include <iostream>
using namespace std;
int main(){
float prom, notaA, suma=0;
int n;
cout<<"Ingrese el total de alumnos"<<endl;
cin>>n;
for(int a=1;a<=n;a++){
cin>>notaA;
suma+=notaA;
}
prom=suma/n;
cout<<"Promedio: "<<prom<<endl;
return 0;
}
