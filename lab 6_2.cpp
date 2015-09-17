#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{double a[20],S,b,p,m,max;
int n,i,k;
cout <<"Vvedit b="; cin >>b;
do
{cout <<"Kilkist elementiv masyvu N="; cin >>n;
}
while (n>20||n<1);
for (i=0;i<n;i++)
{cout <<"a["<<i+1<<"]=";
cin >>a[i];}
S=0;
for (i=4;i<=12;i++)
{S+=a[i];}
max=a[0];
k=0;
for (i=1;i<n;i++)
if (max<a[i])
{max=a[i];k=i;}
p=max;
m=a[19];
if (S>b)
{a[19]=p; a[k]=m;
for (i=0;i<n;i++)
cout <<"a["<<i+1<<"]="<<a[i]<<endl;}
else
{for(i=0;i<n;i++)
cout <<"a["<<i+1<<"]="<<a[i]<<endl;}
    system("PAUSE");
    return EXIT_SUCCESS;
}
