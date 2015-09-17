#include "fun.h"

using namespace std;

int main()
{ char c;
	setlocale (LC_ALL,"Ukrainian");
	char *file_name[16];
    *file_name = open_F(f);
    
    //f = fopen(*file_name, "rb+");
    //cout << *file_name << endl;
    
 do
 	{
 		cout<<"Виберiть режим роботи:"<<endl;
 		cout<<"1 - Ввiд товару"<<endl;
 	cout<<"2 - Пошук за назвою "<<endl;
 	cout<<"3 - Пошук за кiлькiстю одиниць продукцiї"<<endl;
		cout<<"4 - Пошук за цiною"<<endl;
cout<<"5 - Знайти рiзномаїття (кiлькiсть) товарiв"<<endl;
cout<<"6 - Очистка бази даних"<<endl;
 	cout<<"0 - Вихiд"<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"Роботу завершено"<<endl;
					 fclose(f); return 0;
 		 	case '1': input_tovar(); break;
 	 		case '2': search_nazva(); break;
 	 		case '3': search_kilkist(); break;
		case '4': search_tsina(); break;
      	case '5': show_all(); break;
      	case '6': clear_file(*file_name); break;
 	 	}
 	} while (1);	
}
  
