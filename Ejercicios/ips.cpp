#include <iostream>
using namespace std;

void getRed(int ip[],int mask[])
{
for(int i=0;int mask[])

int main(int argc, char *argv[])
{
int ip[4];
int mask[4];
if(argc==9)
{
ip[0]=stoi(argv[1]);
ip[1]=stoi(argv[2]);
ip[2]=stoi(argv[3]);
ip[3]=stoi(argv[4]);

mask[0]=stoi(argv[5]);
mask[1]=stoi(argv[6]);
mask[2]=stoi(argv[7]);
mask[3]=stoi(argv[8]);
cout<<ip[0]<<"."<<ip[1]<<"."<<ip[2]<<"."<<ip[3]<<endl;
cout<<mask[0]<<"."<<mask[1]<<"."<<mask[2]<<"."<<mask[3]<<endl;
getRed(ip,mask);
}
return 0;
}






