#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
double p(double k);
double p(double k)
{ double a=1.42;
return (sqrt(pow(k,2.0)+pow(a,2.0))/(a*k))+a*k;}
int main(int argc, char *argv[])
{double F, x=1.39, y=0.68, z=0.98;
F=(sqrt(p(x))/sin(x))+(tan(p(y))/log10(y))-p(z);
cout <<"F="<<F<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
