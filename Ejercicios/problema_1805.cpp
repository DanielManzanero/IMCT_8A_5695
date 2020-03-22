#include <iostream>
#include <cstdlib>

using namespace std;

int calcular(int A,int B){
int R=(A+B)+(A-B)+(B+A)+(B-A);
return R;
}

int main(){
int A, B, R;
cin>>A>>B;
	if((1<=A)&&(B<=1000000000)){
	R=calcular(A,B);
	cout<<R<<endl;
	}
return 0;
}

