#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{int A,B,X;
cout <<"A=0 or A=1:"; cin >>A;         
switch (A)
{
case 0: cout <<"B=0 or B=1:"; cin >>B;
switch (B) 
{case 0: cout <<"X=0"; break; 
case 1: cout <<"X=1"; break; 
default: cout <<"Pomilka"; break;} break;
case 1: cout <<"X=1"; break;
default: cout <<"Pomilka"; break;
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
