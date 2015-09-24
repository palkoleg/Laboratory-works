#include <iostream>
#include <string.h>
#define N 100
using namespace std;
int main(int argc, char *argv[])
{ char s[N];
int n,k,i,l;
cout <<"Vvedit strichku:";
fgets(s,N,stdin);
n=0;
k=0;
for (i=0;s[i]!=0;i++)
{if((s[i]>='a')&&(s[i]<='z')) {n++;}
if((s[i]>='A')&&(s[i]<='Z')) {k++;}}
l=n+k;
cout <<"Text mistyt "<<l<<" bukv"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
