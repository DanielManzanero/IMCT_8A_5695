#include <iostream>
using namespace std;
int main(){
cout<<"Contador de los primeros 100 numeros enteros:"<<endl;
for(int n=1;n<=100;n++){
cout<<n;
if(n<100)
cout<<", ";
else
cout<<"."<<endl;
}
return 0;
}
