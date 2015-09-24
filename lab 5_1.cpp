#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{double a,b,h,x,y;
cout <<"Tabuliuvania funkcii"<<endl;
cout <<"Pochatok intervalu="; cin >> a;
cout <<"Kinec intervalu="; cin >> b;
{cout <<"Krok ="; cin >> h;}
x=a;
while (x<=b)
{ y= (cos(x)+log10(x)/(4+x))+pow(x,2.0);
cout <<"x="<<x<<"y="<<y<<endl;
x+=h;}      
    system("PAUSE");
    return EXIT_SUCCESS;
}
