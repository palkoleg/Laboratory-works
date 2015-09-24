#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{ double A,C=1.231,D=1.152,x,y;
cout <<"Vvedit x=";
cin >> x;
cout <<"Vvedit y=";
cin >> y;
if (x<=y)
A=log10(C*x)+y;
else
A=pow(x,1.0/3.0)+D*exp(y);
cout <<"A="<<A<<endl;
                          
    system("PAUSE");
    return EXIT_SUCCESS;
}
