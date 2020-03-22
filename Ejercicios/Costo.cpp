#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int obtenerValor(int lim_inf,int lim_sup){
	int val=lim_inf+rand()%(lim_sup+1-lim_inf);
	return val;
}

int litros(int lim_inf,int lim_sup){
	int l;for(int x=0;x<2000;x++){
	int val=obtenerValor(lim_inf,lim_sup);
	if(val<100)l+=10;else l+=12;}return l;
}

int main(int argc, char *argv[]){
	srand(time(NULL));
if(argc!=3){
cout<<"Error falta parametros"<<endl;
return 1;}
int lim_inf=stoi(argv[1],nullptr,10);
int lim_sup=stoi(argv[2],nullptr,10);
int l=litros(lim_inf,lim_sup);
cout<<"El costo total del combustible es: $"<<(l*19)<<endl;return 0;}






