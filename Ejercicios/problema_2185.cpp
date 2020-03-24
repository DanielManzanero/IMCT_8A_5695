#include<iostream>
using namespace std;

void calcular(int A,int B){
cout<<(A+B)<<endl;
cout<<(A-B)<<endl;
cout<<(A*B)<<endl;
cout<<(A/B)<<endl;
cout<<(A%B)<<endl;
}

int main(){
int A, B;
cin>>A>>B;
if(A>=1&&B<=50)
calcular(A,B);
return 0;
}
