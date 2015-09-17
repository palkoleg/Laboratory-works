#include <cstdlib>
#include <iostream>
#include <stdio.h>
#define n 10
#define m 50

using namespace std;

FILE *z ( FILE *f)
{int i,;
char nazva[m],kilkist[m],tsina[m];
f=fopen("tovar.txt","at+");

for(i=1;i<=n;i++) 
{puts("Vvedit nazvu tovaru:");
cin >> nazva;;
fprintf (f, "Nazva %d: %s\n",i,nazva); 
puts("Vvedit kilkist tovaru:");
cin >> kilkist;
fprintf (f, "Kilkist %d: %s\n",i,kilkist);
puts("Vvedit tsinu tovaru:");
cin >> tsina;
fprintf (f, "Tsina %d: %s grn.\n",i,tsina);
}

fclose(f);
return 0;
}

FILE *ch ( FILE *f)
{int i;
char nazva[m],kilkist[m],tsina[m];
f=fopen("tovar.txt","at+");

for (i=1;i<=n;i++)
{fgets (nazva,m,f);
cout << nazva<<endl;
fgets (kilkist,m,f);
cout << kilkist<<endl;;
fgets (tsina,m,f);
cout << tsina<<endl;}

fclose(f);
return 0;
}

FILE *s ( FILE *f)
{f=fopen("tovar.txt","wt+");

fclose(f);
return 0;
}

int main(int argc, char *argv[])
{FILE *f;
int a,b; 

cout <<"Vyberit rezym roboty:"<<endl<<"1-zapys;"<<endl<<"2-chytania;"<<endl<<"3-ochystka ta stvorenia novogo failu;"<<endl<<"4-vychid:"<<endl; cin >> a;

switch (a)

{case 1: z (f); cout << "Gotovo" << endl; break;
case 2: ch(f);cout << "Gotovo" << endl; break;
case 3: s(f); cout << "Gotovo. Jaka podalsha dija ?"<<endl<<"1-zapys;"<<endl<<"2-vychid:"<<endl; cin >> b;

switch (b)

{case 1: z(f); cout <<"Gotovo"<< endl; break;
case 2: return EXIT_SUCCESS;break;
default: cout << "Takogo rezymu ne icnye. Vidkryjte programu znovy ta oberit virnyj rezym."<<endl;} break;

case 4: return EXIT_SUCCESS;break;

default: cout <<"Takogo rezymu ne icnye. Vidkryjte programu znovy ta oberit virnyj rezym."<<endl;}


    system("PAUSE");
    return EXIT_SUCCESS;
}
