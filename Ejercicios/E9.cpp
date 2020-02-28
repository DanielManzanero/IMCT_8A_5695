#include <iostream>
using namespace std;
int main(){
int n=50,s=0;
float media=0;
cout<<"Ingresar "<<n<<" numeros"<<endl;
for(int a=1;a<=n;a++){
cin>>s;
media+=s;
}
media=media/n;
cout<<"La media es: "<<media<<endl;
return 0; 
}
