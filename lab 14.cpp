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
 		cout<<"�����i�� ����� ������:"<<endl;
 		cout<<"1 - ��i� ������"<<endl;
 	cout<<"2 - ����� �� ������ "<<endl;
 	cout<<"3 - ����� �� �i���i��� ������� �������i�"<<endl;
		cout<<"4 - ����� �� �i���"<<endl;
cout<<"5 - ������ �i�������� (�i���i���) �����i�"<<endl;
cout<<"6 - ������� ���� �����"<<endl;
 	cout<<"0 - ���i�"<<endl;
 		c=getch();
 		switch(c)
 		{
		case '0': cout<<"������ ���������"<<endl;
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
  
