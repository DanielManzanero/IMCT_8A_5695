#include <iostream>
#include <cstdlib>

using namespace std;

int calcular(int R1,int S){
int R2=((S*2)-R1);
return R2;
}

int main(){
int R1, R2, S;
cin>>R1>>S;
        if((-1000>R1<1000)&&(-1000>S<1000)){
        R2=calcular(R1,S);
        cout<<R2<<endl;
        }
return 0;
}

