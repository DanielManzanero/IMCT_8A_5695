#include <iostream>
using namespace std;
int main(){
unsigned int unid;
float cant,total,IVA,pors,desc;
cin>>cant>>unid;
total=cant*unid;
cout<<"Total: "<<total<<endl;
IVA=total*.15;
cout<<"IVA: "<<IVA<<endl;
pors=total+IVA;
cout<<"Total con IVA: "<<pors<<endl;
if(pors>50000){
desc=pors*.5;
cout<<"Total con descuento: "<<pors-desc<<endl;}
else{
cout<<"sin descuento"<<endl;}
return 0;
}
