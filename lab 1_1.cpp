#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{ double f,z,h,t;
cout << "Vvedit h=";
cin >> h;
cout << "Vvedit t=";
cin >> t;
f=h*exp(t)+(3*h/(cos(t)+4));
z=(h+sin(t+4*h))/(h*h+t);
cout <<"f="<<f<<endl;
cout <<"z="<<z<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
