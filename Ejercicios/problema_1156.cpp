#include <iostream>
using namespace std;


int* capturar(){
int* numeros;
int fin=0,num,x=0;
	while(cin){
	cin>>num;
		if(num==42)
		fin=1;
		if(fin==0&&(num>=0&&num<=100))
		numeros[x]=num;
	x++;
	}
return numeros;
}

void imprimir(int* numeros){
	for(int a=0;a<(sizeof(numeros,0))-1;a++)
	cout<<numeros[a]<<endl;
}

int main(){
int* numeros;
numeros=capturar();
cout<<endl;
imprimir(numeros);
return 0;
}
