#include <iostream>
using namespace std;
int main(){
int total=0,x;
cout<<"Ingrese 500 numeros enteros"<<endl;
for(int n=1;n<=500;n++){
cin>>x;
if(x>0)
total++;
}
cout<<total<<" numeros son positivos"<<endl;
return 0;
}
