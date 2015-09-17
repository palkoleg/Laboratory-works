#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{double a[20],S;
int n,i;
do
{cout <<"Kilkist elementiv masyvu N="; cin >>n;
}
while (n>20||n<1);
for (i=0;i<n;i++)
{cout <<"a["<<i+1<<"]=";
cin >>a[i];}
S=0;
for (i=0;i<n;i++)
{if (a[i]>0){S+=a[i];}}
cout <<"Suma dodatnich elementiv masyvu="<<S<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
