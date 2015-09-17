#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct tovar 
{ char nazva[30];
  int kilkist;
  int tsina;
};

FILE * f_tovar;

const char file_name[]="i:/tovar.bin";

 
int input_tovar()
{struct tovar a;
int i,m;
    cout<<"����i�� �������������� ������"<<endl;
    cout<<"����i�� �i���i��� ������, ���� �������� � ���� �����"<<endl; cin >>m;
	for (i=0;i<m;i++)
    {cout<<"�����: "; cin>> a.nazva;
	cout<<"�i���i���: "; cin>> a.kilkist;
	cout<<"�i�� (� ���.): "; cin>> a.tsina;
	fseek(f_tovar,0,2);
	fwrite(&a,sizeof(a),1,f_tovar);}
	return 0;
}


int print_tovar(struct tovar a)
{
	cout<<"�����: "<<a.nazva<<endl;
	cout<<"�i���i���: "<<a.kilkist<<endl;
	cout<<"�i�� (� ���.): "<<a.tsina<<endl<<endl;
	return 0;
}

 
int search_tsina()
{int ts;
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"�i�� ��� ������ = ";
	cin>>ts;
	fseek(f_tovar,0,0);
	while (!feof(f_tovar))
	{
		r=fread(&a,sizeof(a),1,f_tovar);
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
 
int search_nazva()
{char nazva_tovar[30];
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"����� ������ ��� ������: ";
	gets(nazva_tovar);
	fseek(f_tovar,0,0);
	while (!feof(f_tovar))
	{
		r=fread(&a,sizeof(a),1,f_tovar);
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
 
int show_all()
{
 struct tovar a;
 int p,r;
 	p=0;
	fseek(f_tovar,0,0);
	while (!feof(f_tovar))
	{
		r=fread(&a,sizeof(a),1,f_tovar);
		if (r<1) break;
		print_tovar(a);
		p++;
	}
	cout<<endl<<"�������� "<<p<<" ������ (-i�)"<<endl<<endl;
        return p;
}


int clear_file()
{
	fclose(f_tovar);
	if ((f_tovar=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"��������� �������� ���� �����i� !"<<endl;
 		return -1;
	}
	return 0;
}


int main() 
{ 
    char c;
	setlocale (LC_ALL,"Ukrainian");
 	if ((f_tovar=fopen(file_name,"rb+"))==NULL)
 	{
 	if ((f_tovar=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"��������� �������� ���� �����i� !"<<endl;
 		return -1;
	}
		cout<<"�������� ����� ���� �����i� !"<<endl;
 	}
 	do
 	{
 		cout<<"�����i�� ����� ������"<<endl;
 		cout<<"1 - ��i� ������"<<endl;
 	cout<<"2 - ����� �� ������ "<<endl;
		cout<<"3 - ����� �� �i���"<<endl;
cout<<"4 - ������ �i�������� (�i���i���) �����i�"<<endl;
cout<<"5 - ������� ���� �����"<<endl;
 	cout<<"0 - ���i�"<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"������ ���������"<<endl;
					 fclose(f_tovar); return 0;
 		 	case '1': input_tovar(); break;
 	 		case '2': search_nazva(); break;
		case '3': search_tsina(); break;
      	case '4': show_all(); break;
      	case '5': clear_file(); break;
 	 	}
 	} while (1);	
}
