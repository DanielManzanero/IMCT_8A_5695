#include <iostream>
using namespace std;
int main(){
int n,a,b;
cout<<"Ingrese un numero natural"<<endl;
cin>>n;
a=n%2;
b=n%3;
if(n!=3&&n!=2){
if(a==1&&b>0){
cout<<n<<" es primo"<<endl;}
else{
cout<<n<<" no es primo"<<endl;
}
}else{
cout<<n<<" es primo"<<endl;}
return 0;
}
