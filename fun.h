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
    printf( "Введiть назву файлу: \n" );
    scanf( "%s", filename );
    if ((f = fopen(filename, "rb+")) == NULL)
        cout << "Файл не знайдено :(\n";
    else
        cout << "Файл вiдкрито успiшно :)\n";
 
    if(f == NULL){
        if((f = fopen(filename, "wb+")) == NULL)
            cout << "Не вдалось створити файл :(\n";
        else
            cout << "Файл створено успiшно :)\n";
    }
    char *fn = filename;
    return fn;
}

int input_tovar()
{struct tovar a;
int i,m;
    cout<<"Введiть характеристики товару"<<endl;
    cout<<"Введiть кiлькiсть товару, який додається в базу даних"<<endl; cin >>m;
	for (i=0;i<m;i++)
    {cout<<"Назва: "; cin>> a.nazva;
	cout<<"Кiлькiсть: "; cin>> a.kilkist;
	cout<<"Цiна (в грн.): "; cin>> a.tsina;
	fseek(f,0,2);
	fwrite(&a,sizeof(a),1,f);}
	return 0;
}


int print_tovar(struct tovar a)
{
	cout<<"Назва: "<<a.nazva<<endl;
	cout<<"Кiлькiсть: "<<a.kilkist<<endl;
	cout<<"Цiна (в грн.): "<<a.tsina<<endl<<endl;
	return 0;
}

 int search_nazva()
{char nazva_tovar[30];
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"Назва товару для пошуку: ";
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
	if (p==0) cout<<"Такого товару не знайдено"<<endl;
	else cout<<endl<<"Знайдено "<<p<<" товари (-iв)"<<endl<<endl;
        return p;
}

int search_kilkist()
{int kl;
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"Кiлькiсть одиниць товару для пошуку = ";
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
	if (p==0) cout<<"Товара з такою кiлькiстю не iснує"<<endl; 
	else cout<<endl<<"Знайдено "<<p<<" товарiв"<<endl;
        return p;

}

int search_tsina()
{int ts;
 struct tovar a;
 int p,r;
 	p=0;
	cout<<"Цiна для пошуку = ";
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
	if (p==0) cout<<"Товара з такою цiною не iснує"<<endl; 
	else cout<<endl<<"Знайдено "<<p<<" товарiв"<<endl;
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
	cout<<endl<<"Знайдено "<<p<<" товари (-iв)"<<endl<<endl;
        return p;
}


int clear_file(char *file_name)
{fclose(f);
	if ((f=fopen(file_name,"wb+"))==NULL)
 	{
 		cout<<"Неможливо створити файл товарiв !"<<endl;
 		return -1;
	}
	return 0;
}
#endif /*FUN_H*/
