#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
srand(time(NULL));
int lim_inf=98;
int lim_sup=100;
for(int x=0;;x++){
int val=lim_inf+rand()%(lim_sup+1-lim_inf);
cout<<val<<endl;

cout<<time(NULL)<<endl;
}

/*cout<<rand()<<endl;
cout<<rand()<<endl;
cout<<rand()<<endl;*/
return 0;
}
