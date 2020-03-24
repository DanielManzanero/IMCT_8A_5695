#include <iostream>
using namespace std;

double calcular(int N){
double S=0;
for(int a=1;a<=N;a++)
S=S+a;
return S;
}

int main(){
int N;
cin>>N;
double S=calcular(N);
	if(N<10000)
	cout<<S<<endl;
    return 0;
}
