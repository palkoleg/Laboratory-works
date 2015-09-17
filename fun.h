#ifndef FUN_H
#define FUN_H

#include "library.h"

using namespace std;

struct tovar 
{ char nazva[30];
  int kilkist;
  int tsina;
};

FILE *f;

char *open_F(FILE *f) 
{
    char filename[16];
    printf( "����i�� ����� �����: \n" );
    scanf( "%s", filename );
    if ((f = fopen(filename, "rb+")) == NULL)
        cout << "���� �� �������� :(\n";
    else
        cout << "���� �i������ ���i��� :)\n";
 
    if(f == NULL){
        if((f = fopen(filename, "wb+")) == NULL)
            cout << "�� ������� �������� ���� :(\n";
        else
            cout << "���� �������� ���i��� :)\n";
    }
    char *fn = filename;
    return fn;
}

int input_tovar()
{struct tovar a;
int i,m;
    cout<<"����i�� �������������� ������"<<endl;
    cout<<"����i�� �i���i��� ������, ���� �������� � ���� �����"<<endl; cin >>m;
	for (i=0;i<m;i++)
    {cout<<"�����: "; cin>> a.nazva;
	cout<<"�i���i���: "; cin>> a.kilkist;
	cout<<"�i�� (� ���.): "; cin>> a.tsina;
	fseek(f,0,2);
	fwrite(&a,sizeof(a),1,f);}
	return 0;
}


int print_tovar(struct tovar a)
{
	cout<<"�����: "<<a.nazva<<endl;
	cout<<"�i���i���: "<<a.kilkist<<endl;
	cout<<"�i�� (� ���.): "<<a.tsina<<endl<<endl;
	return 0;
}

 int search_nazva()
{char nazva_tovar[30];
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"����� ������ ��� ������: ";
	gets(nazva_tovar);
	fseek(f,0,0);
	while (!feof(f))
	{
		r=fread(&a,sizeof(a),1,f);
		if (r<1) break;
		if (strcmp(a.nazva, nazva_tovar)== 0)
		{
			print_tovar(a);
			p++;
		}
	}
	if (p==0) cout<<"������ ������ �� ��������"<<endl;
	else cout<<endl<<"�������� "<<p<<" ������ (-i�)"<<endl<<endl;
        return p;
}

int search_kilkist()
{int kl;
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"�i���i��� ������� ������ ��� ������ = ";
	cin>>kl;
	fseek(f,0,0);
	while (!feof(f))
	{
		r=fread(&a,sizeof(a),1,f);
		if (r<1) break;
		if (a.kilkist == kl) 
		{
			print_tovar(a);
			p++;
		}
	}
	if (p==0) cout<<"������ � ����� �i���i��� �� i���"<<endl; 
	else cout<<endl<<"�������� "<<p<<" �����i�"<<endl;
        return p;

}

int search_tsina()
{int ts;
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"�i�� ��� ������ = ";
	cin>>ts;
	fseek(f,0,0);
	while (!feof(f))
	{
		r=fread(&a,sizeof(a),1,f);
		if (r<1) break;
		if (a.tsina == ts) 
		{
			print_tovar(a);
			p++;
		}
	}
	if (p==0) cout<<"������ � ����� �i��� �� i���"<<endl; 
	else cout<<endl<<"�������� "<<p<<" �����i�"<<endl;
        return p;

}
 

 
int show_all()
{
 struct tovar a;
 int p,r;
 	p=0;
	fseek(f,0,0);
	while (!feof(f))
	{
		r=fread(&a,sizeof(a),1,f);
		if (r<1) break;
		print_tovar(a);
		p++;
	}
	cout<<endl<<"�������� "<<p<<" ������ (-i�)"<<endl<<endl;
        return p;
}


int clear_file(char *file_name)
{fclose(f);
	if ((f=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"��������� �������� ���� �����i� !"<<endl;
 		return -1;
	}
	return 0;
}
#endif /*FUN_H*/
