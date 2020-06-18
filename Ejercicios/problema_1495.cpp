
#include <iostream> 
using namespace std; 
  
int* obtener(int N){ 
int* numeros=new int[N];

	for(int a=0;a<N;a++)
	cin>>numeros[a];

return numeros; 
} 

long sumar(int N,int* recibido){
long suma=0;
        for(int a=0;a<N;a++)
        suma+=recibido[a];
return suma;
}

int* ordenar(int N, int* recibido){
int* numeros=new int[N+1];
int menor=1,posicion=0,pos=0,posA=0;
long suma=1;
	while(posicion<=N){
			if(recibido[pos]==menor){
			numeros[posicion]=menor;
			recibido[pos]=0;
			posicion++;
			posA=pos;
			}
		pos++;
			if(pos>=N){pos=0;}
			if(posA==pos){menor++;}
		suma=sumar(N,recibido);
			if(suma==0||menor>1000){numeros[posicion]=0;posicion++;}
		}
return numeros;
}

void imprimir(int* numeros){
	for(int a=0;a<sizeof(numeros);a++){
	if(numeros[a]<=1000&&numeros[a]>=1)
	cout<<numeros[a]<<endl;
	}
}

int main(){ 
int N;
cin>>N;
int* numeros=obtener(N); 
numeros=ordenar(N,numeros);
cout<<endl;
imprimir(numeros);

return 0; 
} 

