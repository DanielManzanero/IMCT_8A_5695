#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
srand(time(NULL));
int l_i=-20,l_s=20,suma=0;
	for(int i=0;i<20;i++){
	int valor =l_i + rand()%(l_s + 1 - l_i);
	cout<<valor<<endl;
	if(valor>0){
	suma+=valor;
	}
}
     int valor=rand()%100;	
cout<<"Suma es: "<<suma<<endl;
return 0;
}
