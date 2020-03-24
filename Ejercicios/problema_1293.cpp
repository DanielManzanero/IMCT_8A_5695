#include<iostream>
using namespace std;

double calcular(int T){
double S=1;
for(int a=0;a<T;a++)
S=S*2;
return S;
}

int main(){
int T;
cin>>T;
	if((T>=0)&&(T<=265)){
	double S=calcular(T);
	cout<<S<<endl;
	}
return 0;
}
