#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{int i,j,m,n;
double S,b,a[m][n],x[m];
cout <<"Vvedit M="; cin >>m;
cout <<"Vvedit N="; cin >>n;
cout <<"Vvedit B="; cin >>b;
for (i=1;i<=m;i++)
for (j=1;j<=n;j++)
{cout <<"a["<<i<<"]["<<j<<"]="; 
cin >>a[i][j];}
for (S,i=1;i<=m;i++)
{ S=0;
for (j=1;j<=n;j++)
if (a[i][j]>b)
{x[i]=S+=a[i][j];
cout <<"Suma elementiv "<<i<<"riadka, bilshych vid chysla b ="<<S<<endl;}}
for (i=1;i<=m;i++)
cout <<"X["<<i<<"]="<<x[i]<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
