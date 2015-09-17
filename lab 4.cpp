#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{ double S=0,a=2.1;
int i,n;
cout <<"N="; cin >> n;
for (i=1; i<=n; i++)
{ S+=a/i;}
cout <<"Suma="<<S<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
