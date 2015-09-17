#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{int i,j,m,n;
double a[m][n],D;
cout <<"Vvedit M="; cin >>m;
cout <<"Vvedit N="; cin >>n;
for (i=1;i<=m;i++)
for (j=1;j<=n;j++)
{cout <<"a["<<i<<"]["<<j<<"]=";
cin >>a[i][j];}
D=1;
for (i=1;i<=m;i++)
for (j=1;j<=n;j++)
D*=a[i][j];
cout <<"Dobutok elementuv masyvu ="<<D<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
