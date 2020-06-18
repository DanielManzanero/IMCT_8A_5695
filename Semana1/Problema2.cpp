#include <iostream>
using namespace std;


int* obtener_arg(int n){
int* arreglo=new int[n];
for(int k=0;k<n;k++)cin>>arreglo[k];
return arreglo;
}

int verificar(int* arreglo,int* pos,int x){
if(arreglo[pos[0]]+arreglo[pos[1]]+arreglo[pos[2]]+arreglo[pos[3]]==x)return 1;else return 0;}


int* calcular(int* arreglo,int n,int x,int y){
int* pos=new int[4];
int* cadenaP=new int[4];
for(pos[0]=0;pos[0]<n;pos[0]++){
	for(pos[1]=0;pos[1]<n;pos[1]++){
		for(pos[2]=0;pos[2]<n;pos[2]++){
			for(pos[3]=0;pos[3]<n;pos[3]++){
	if((pos[0]!=pos[1]&&pos[0]!=pos[2]&&pos[0]!=pos[3]&&pos[1]!=pos[2]&&pos[1]!=pos[3]&&pos[2]!=pos[3])&&y==0){
		y=verificar(arreglo,pos,x);if(y==1){cadenaP[0]=pos[0];cadenaP[1]=pos[1];cadenaP[2]=pos[2];cadenaP[3]=pos[3];}}
			}
		}
	}
}
return cadenaP;
}


void visualizar(int* arreglo,int* ar_pos){
if(ar_pos[0]==ar_pos[1]&&ar_pos[0]==ar_pos[2]&&ar_pos[0]==ar_pos[3]){cout<<"IMPOSIBLE"<<endl;}else{
cout<<ar_pos[0]<<" "<<ar_pos[1]<<" "<<ar_pos[2]<<" "<<ar_pos[3]<<endl;}}



int main(){
int n,x;
cin>>n>>x;
int* arreglo=obtener_arg(n);
int* ar_pos=calcular(arreglo,n,x,0);
visualizar(arreglo,ar_pos);
return 0;
}





