#include <iostream>
#include <cstdlib>
using namespace std;


int recibir(int cantidad){
float num1;
int num2,entero,decimal;

	for(int a=0;a<cantidad;a++){
	cin>>num1>>num2;
	float circ=(((num1/3.1416)/2)*3);
	entero=circ;
	decimal=int(((circ-entero)*(num2*100)));
	cout<<entero<<"."<<decimal<<" ";
int d=1;	
while(d<entero){
if(entero>d){
cout<<"#";
d+=10;
}
}
	}
return 0;
}


int main(){
int x;
cin>>x;
recibir(x);
return 0;

}
