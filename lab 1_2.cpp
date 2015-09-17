#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{ double a,b,x,y;
cout << "Vvedit a=";
cin >> a;
cout << "Vvedit b=";
cin >> b;
cout << "Vvedit x=";
cin >> x;
y=(exp(2*x)*tan(a*x)*tan(a*x))+log10(acos(b*x))+pow(x,3.1);
cout <<"y="<<y<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
