#include <iostream>
using namespace std;
int main(){
int n=5,num=0,me15=0,ma50=0,m25_45=0;
cout<<"Ingresar "<<n<<" numeros naturales"<<endl;
for(int a=1;a<=n;a++){
cin>>num;
if(num<15)
me15++;
if(num>50)
ma50++;
if(num>25&&num<45)
m25_45++;
}
cout<<"Numeros menores de 15: "<<me15<<endl;
cout<<"Numeros mayores de 50: "<<ma50<<endl;
cout<<"Numeros entre 25 y 45: "<<m25_45<<endl;
return 0;
}
  
