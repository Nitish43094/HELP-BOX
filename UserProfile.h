#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
class UserPassword{
	char Name[60];
	char UserName[60];
	char UserPas[60];
	public:
		void CreateProfile()
		{
			ofstream fout("UPassword.txt",ios::app|ios::binary);
			gotoxy(60, 0);
			cout<<"+-------------------------------------------+\n";
			gotoxy(60, 1);
			cout<<"|Enter the Name :                           |\n";
			gotoxy(60, 2);
			cout<<"|-------------------------------------------|\n";
			string phar="Please Enter the Name";
			string command="espeak \""+ phar +"\"";
			const char *CharCommand=command.c_str();
			system(CharCommand);
			gotoxy(60, 3);
			cin.getline(Name,60);
			gotoxy(60, 4);
			cout<<"|Create User Name :                         |\n";
			gotoxy(60, 5);
			cout<<"|-------------------------------------------|\n";
			string phar1="Please Create User Name";
			string command1="espeak \""+ phar1 +"\"";
			const char *CharCommand1=command1.c_str();
			system(CharCommand1);
			gotoxy(60, 6);
			cin.getline(UserName,60);
			gotoxy(60, 7);
			cout<<"|Create User Password :                     |\n";
			gotoxy(60, 8);
			cout<<"+-------------------------------------------+\n";
			string phar2="Please Enter the User Password";
			string command2="espeak \""+ phar2 +"\"";
			const char *CharCommand2=command2.c_str();
			system(CharCommand2);
			gotoxy(60, 9);
			cin.getline(UserPas,60);
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
//---------------------------------------------------------------------
		void UpdateProfile()
		{
			ifstream fin("UPassword.txt",ios::in|ios::binary);
			ofstream fout("demo1.txt",ios::app|ios::binary);
			bool flage=false;
			int i=0;
			char uname[60];
			char upass[60],ch;
			cin.ignore();
			gotoxy(60, 0);
			cout<<"Enter the User-Name : ";
			string phar="Please Enter the User Name";
			string command="espeak \""+ phar +"\"";
			const char *CharCommand=command.c_str();
			system(CharCommand);
			gotoxy(60, 1);
			cin.getline(uname,60);
			gotoxy(60, 2);
			cout<<"Enter teh User-Password : ";
			string phar1="Please Enter the User Password";
			string command1="espeak \""+ phar1 +"\"";
			const char *CharCommand1=command1.c_str();
			system(CharCommand1);
			gotoxy(60, 3);
			while(i<40 && ch!=13)
			{
				ch=getch();
				cout<<"*";
				if(ch!=13)
				upass[i++]=ch;
			}
			upass[i]!='\0';
			system("cls");
			while(fin.read((char*)this,sizeof(*this)))
			{
				if(!strcmp(uname,UserName))
				{
					if(!strcmp(upass,UserPas))
					{
						gotoxy(60, 0);
						cout<<"Update the Name : ";
						string phar1="Update the Your Name";
						string command="espeak \""+ phar1 +"\"";
						const char *CharCommand1=command1.c_str();
						system(CharCommand1);
						gotoxy(60, 1);
						cin.getline(Name,60);
						gotoxy(60, 2);
						cout<<"Update User Name : ";
						string phar2="Update the User Name";
						string command2="espeak \""+ phar2 +"\"";
						const char *CharCommand2=command2.c_str();
						system(CharCommand2);
						gotoxy(60, 3);
						cin.getline(UserName,60);
						gotoxy(60, 4);
						cout<<"Update User Password : ";
						string phar3="Update the User Password";
						string command3="espeak \""+ phar3 +"\"";
						const char *CharCommand3=command3.c_str();
						system(CharCommand3);
						gotoxy(60, 5);
						cin.getline(UserPas,60);
						fout.write((char*)this,sizeof(*this));
						flage=true;
					}else{
						fout.write((char*)this,sizeof(*this));
					}
				}
			}
			if(flage==false){
				gotoxy(60, 0);
				cout<<"\nRecord Not Found\n";
				string phar="Record Not Found";
				string command="espeak \""+ phar +"\"";
				const char *CharCommand=command.c_str();
				system(CharCommand);
			}
			system("cls");
			fin.close();
			fout.close();
			remove("UPassword.txt");
			rename("demo1.txt","UPassword.txt");
			
		}
//-----------------------------------------------------------------
		int Login()
		{
			int flage=0;
			int i=0;
			char uname[40];
			char upass[40],ch;
			ifstream fin("UPassword.txt",ios::in|ios::binary);
			
			cin.ignore();
			gotoxy(60, 0);
			cout<<"Enter the User-Name : ";
			string phar="Please Enter the Your User Name";
			string command="espeak \""+ phar +"\"";
			const char *CharCommand=command.c_str();
			system(CharCommand);
			gotoxy(60, 1);
			cin.getline(uname,40);
			gotoxy(60, 2);
			cout<<"Enter teh User-Password : ";
			string phar1="Please Enter the Your User Password";
			string command1="espeak \""+ phar1 +"\"";
			const char *CharCommand1=command1.c_str();
			system(CharCommand1);
			gotoxy(60, 3);
			while(i<40 && ch!=13)
			{
				ch=getch();
				cout<<"*";
				if(ch!=13)
				upass[i++]=ch;
			}
			upass[i]!='\0';
			while(fin.read((char*)this,sizeof(*this)))
			{
				if(!strcmp(uname,UserName))
				{
					if(!strcmp(upass,UserPas))
					{
						flage=1;
					}
				}
			}
			system("cls");
			return flage;
			fin.close();
		}
		void Profile()
		{
			ifstream fin("UPassword.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				string phar="Hello This is Youe Profile";
				string command="espeak \""+ phar +"\"";
				const char *CharCommand=command.c_str();
				system(CharCommand);
				gotoxy(60, 0);
				cout<<"Your Name : "<<Name<<endl;
				gotoxy(60, 1);
				cout<<"Your User-Name : "<<UserName<<endl;
				gotoxy(60, 2);
				cout<<"Your User-Password : "<<UserPas<<endl;
			}
			system("pause");
			system("cls");
			fin.close();
		}
		void gotoxy(short x, short y)                                           
		{
		 COORD pos ={x,y};
		 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		}
};
