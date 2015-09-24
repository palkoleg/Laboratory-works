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
    cout<<"Введiть характеристики товару"<<endl;
    cout<<"Введiть кiлькiсть товару, який додається в базу даних"<<endl; cin >>m;
	for (i=0;i<m;i++)
    {cout<<"Назва: "; cin>> a.nazva;
	cout<<"Кiлькiсть: "; cin>> a.kilkist;
	cout<<"Цiна (в грн.): "; cin>> a.tsina;
	fseek(f_tovar,0,2);
	fwrite(&a,sizeof(a),1,f_tovar);}
	return 0;
}


int print_tovar(struct tovar a)
{
	cout<<"Назва: "<<a.nazva<<endl;
	cout<<"Кiлькiсть: "<<a.kilkist<<endl;
	cout<<"Цiна (в грн.): "<<a.tsina<<endl<<endl;
	return 0;
}

 
int search_tsina()
{int ts;
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"Цiна для пошуку = ";
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
	if (p==0) cout<<"Товара з такою цiною не iснує"<<endl; 
	else cout<<endl<<"Знайдено "<<p<<" товарiв"<<endl;
        return p;

}
 
int search_nazva()
{char nazva_tovar[30];
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"Назва товару для пошуку: ";
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
	if (p==0) cout<<"Такого товару не знайдено"<<endl;
	else cout<<endl<<"Знайдено "<<p<<" товари (-iв)"<<endl<<endl;
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
	cout<<endl<<"Знайдено "<<p<<" товари (-iв)"<<endl<<endl;
        return p;
}


int clear_file()
{
	fclose(f_tovar);
	if ((f_tovar=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл товарiв !"<<endl;
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
 		cout<<"Неможливо створити файл товарiв !"<<endl;
 		return -1;
	}
		cout<<"Створено новий файл товарiв !"<<endl;
 	}
 	do
 	{
 		cout<<"Виберiть режим роботи"<<endl;
 		cout<<"1 - Ввiд товару"<<endl;
 	cout<<"2 - Пошук за назвою "<<endl;
		cout<<"3 - Пошук за цiною"<<endl;
cout<<"4 - Знайти рiзномаїття (кiлькiсть) товарiв"<<endl;
cout<<"5 - Очистка бази даних"<<endl;
 	cout<<"0 - Вихiд"<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"Роботу завершено"<<endl;
					 fclose(f_tovar); return 0;
 		 	case '1': input_tovar(); break;
 	 		case '2': search_nazva(); break;
		case '3': search_tsina(); break;
      	case '4': show_all(); break;
      	case '5': clear_file(); break;
 	 	}
 	} while (1);	
}
