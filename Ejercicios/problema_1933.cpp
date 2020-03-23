#include <iostream>
using namespace std;

int* leer(){
int* cadena;
int L,R,n=0;
	while(cin){
	cin>>L>>R;
	if((L+R)==0)
	break;
	if((L>=1)&&(R<=5))
	cadena[n]=L+R;
	n++;
	}
return cadena;
}

void imprimir(int* cadena){
	for(int a=0;a<sizeof(cadena);a++){
		if(cadena[a]!=0)
		cout<<cadena[a]<<endl;
	}
}

int main(){

int* cadena=leer();
imprimir(cadena);

}

