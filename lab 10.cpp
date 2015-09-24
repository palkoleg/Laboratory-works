#include <cstdlib>
#include <iostream>
#include <math.h>
#define a 0.58
#define c 1.1
#define n 2
#define m 2

using namespace std;

double fx (double b[n][m], int i)
{ int j;
double s=0;
for (j=0; j<m;j++)
{s+=a*b[i][j]/(c*pow(b[i][j],2.0));}
return(s);
}

void vvid (double b [n][m])
{int i,j;
for (i=0;i<n;i++)
for (j=0;j<m;j++)
{cout <<"b["<<i+1<<"]["<<j+1<<"]=";
cin >>b[i][j];}}

int main(int argc, char *argv[])

{double F, b[n][m], s1=0, s2=0;
int i;
vvid (b);
for (i=0;i<n;i++)
{s1+=fx(b,i);
 s2+=pow(a,2.0)*fx(b,i);}
F=(s1/a)+s2;
cout <<"F="<<F<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
