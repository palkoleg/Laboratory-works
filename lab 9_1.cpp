#include <cstdlib>
#include <iostream>
#include <math.h>
#define p(k) (sqrt(pow(k,2.0)+pow(a,2.0))/(a*k))+a*k
using namespace std;
int main(int argc, char *argv[])
{double F, a=1.42, x=1.39, y=0.68, z=0.98;
F=(sqrt(p(x))/sin(x))+(tan(p(y))/log10(y))-p(z);
cout <<"F="<<F<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
