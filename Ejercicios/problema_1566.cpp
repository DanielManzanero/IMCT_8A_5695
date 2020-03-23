#include <iostream>
using namespace std;

long* leer(){
long* cadena;
int n,x=0;
        while(cin){
        cin>>n;
        if(n==0)
        break;
        if((n>=1)&&(n<=500))
        cadena[x]=((2*n*n*n)+(3*n*n)+n)/6;
        x++;
        }
return cadena;
}

void imprimir(long* cadena){
        for(int a=0;a<sizeof(cadena);a++){
                if(cadena[a]!=0)
                cout<<cadena[a]<<endl;
        }
}

int main(){

long* cadena=leer();
cout<<endl;
imprimir(cadena);

}
