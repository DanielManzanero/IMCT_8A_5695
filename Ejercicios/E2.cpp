#include <iostream>
using namespace std;
int main(){
cout<<"Ingrese la rerie de numeros, el ultimo debe ser -99"<<endl;
int x,num=-99;
	do{
	cin>>x;
	if(x>num){
	num=x;
	}
	}while(x!=-99);
cout<<"El mayor de la reie es: "<<num<<endl;
return 0;
}

