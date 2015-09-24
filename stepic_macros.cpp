#include <iostream>

#define MAX(x, y, r) ({int x1=(x); int y1=(y); if(x1>y1)r=x1;else r=y1;})

using namespace std;

int main ()

{int a,b,c;
 cout << "A = " ; cin >> a;
 cout <<"B = "; cin >> b;
 MAX(a, b, c);
 cout << "C = " << c << endl;
 
    return 0;
}
