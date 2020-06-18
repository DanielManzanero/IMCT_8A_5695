#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
int a,t,l, valor;
        int lim_inf=0;
        int lim_sup=100;
        srand(time(NULL));
        for(a=1;a<=1000;a++){
                valor=lim_inf+rand()%(lim_sup+1-lim_inf);
                if(valor<=30){
                        t=t+1;
                        cout<<"gana to"<<endl;
                        }
                else{
                        l=l+1;
                        cout<<"gana li"<<endl;
                        }
        }
        cout<<"T=  "<<t<<endl;
cout<<"L=  "<<l<<endl;

        return 0;
}
