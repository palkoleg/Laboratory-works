#include "MY_MODUL.h"

using namespace std;

int main(int argc, char *argv[])

{int i,j,m,n;
setlocale(LC_ALL,"Ukrainian");

cout <<"����i�� �i���i��� ����i� ������i A �� B: "; cin >> m;
cout <<"����i�� �i���i��� ������i� ������i A �� B: "; cin >> n;

double A[m][n],B[m][n],C[m][n];

cout <<"����i�� �������� ������i A:"<<endl;

for (i=0;i<m;i++)
for (j=0;j<n;j++)
{cout <<"A["<<i+1<<"]["<<j+1<<"]="; cin >> A[i][j];}

cout <<"����i�� �������� ������i B:"<<endl;

for (i=0;i<m;i++)
for (j=0;j<n;j++)
{cout <<"B["<<i+1<<"]["<<j+1<<"]="; cin >> B[i][j];}

for (i=0;i<m;i++)
for (j=0;j<n;j++)
{C[i][j]=0;
C[i][j]=A[i][j]+B[i][j];}

cout <<"����� ������� A i B � ������� �:"<<endl;

for (i=0;i<m;i++)
for (j=0;j<n;j++)
{cout <<"C["<<i+1<<"]["<<j+1<<"]="<<C[i][j]<<endl;}

    system("PAUSE");
    return EXIT_SUCCESS;
}
