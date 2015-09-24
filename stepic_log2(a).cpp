#include <iostream>
#include <cmath>

using namespace std;


int main()
{ int T, i, a, p;
double k, n = 2, m;
cin >> T;
while (T>0)
{
      for (i=0; i<T; i++)
{
      cin >> a;
      if (a>=1 && a<= 1E09)
      { k = (double)a ;
    m = log(k)/(log(n));
    p = (int)m;
    cout << p << endl;}
      else
      {return 0;}

}; return 0;
}
      
    return 0;
}
