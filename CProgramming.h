#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
class C_intro{
	char Ctopic[100];
	char CProgram[10000];
//-------------------------------------
	char into[10000];
	char var_data[10000];
	char coperator[10000];
	char statement[10000];
	char loop[10000];
	char Array[10000];
	char String[10000];
	char pointer[10000];
	char Function[10000];
	char MathFunction[10000];
	char Recursion[10000];
	char file_c[10000];
	char Structures[10000];
	public:
		void setData()
		{
			ofstream fout("CProgramming.txt",ios::app|ios::binary);
			cin.ignore();
			cout<<"Enter the Topic\n";
			cin.getline(Ctopic,100);
			cout<<"Enter the Related Data\n";
			cin.getline(CProgram,100000000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getData()
		{
			ifstream fin("CProgramming.txt",ios::in|ios::binary);
			char topic[100];
			cin.ignore();
			cout<<"Enter the Topic to Search\n";
			cin.getline(topic,100);
			system("cls");
			while(fin.read((char*)this,sizeof(*this)))
			{
				if(!strcmp(Ctopic,topic)){
					cout<<Ctopic<<endl;
					cout<<CProgram<<endl;
				}
			}
			fin.close();
		}
		void setintrodata()
		{
			ofstream fout("CIntroduction.txt",ios::app|ios::binary);
			cout<<"Enter the C Introduction\n";
			cin.ignore();
			cin.getline(into,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getintrodata()
		{
			ifstream fin("CIntroduction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<into<<endl;
			}
			fin.close();
		}
		void setvar_data()
		{
			ofstream fout("CVariableanddata.txt",ios::app|ios::binary);
			cout<<"Enter the C Variable and Data types\n";
			cin.ignore();
			cin.getline(var_data,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getvar_data()
		{
			ifstream fin("CVariableanddata.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<var_data<<endl;
			}
			fin.close();
		}
		void setcoperator()
		{
			ofstream fout("Coperator.txt",ios::app|ios::binary);
			cout<<"Enter the C Operator\n";
			cin.ignore();
			cin.getline(coperator,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getcoperator()
		{
			ifstream fin("Coperator.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<coperator<<endl;
			}
			fin.close();
		}
		void setstatement()
		{
			ofstream fout("Cstatement.txt",ios::app|ios::binary);
			cout<<"Enter the C Statement\n";
			cin.ignore();
			cin.getline(statement,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getstatement()
		{
			ifstream fin("Cstatement.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<statement<<endl;
			}
			fin.close();
		}
		void setloop()
		{
			ofstream fout("Cloops.txt",ios::app|ios::binary);
			cout<<"Enter the C loop\n";
			cin.ignore();
			cin.getline(loop,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getloop()
		{
			ifstream fin("Cloops.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<loop<<endl;
			}
			fin.close();
		}
		void setArray()
		{
			ofstream fout("CArray.txt",ios::app|ios::binary);
			cout<<"Enter the C Array\n";
			cin.ignore();
			cin.getline(Array,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getArray()
		{
			ifstream fin("CArray.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Array<<endl;
			}
			fin.close();
		}
		void setString()
		{
			ofstream fout("CString.txt",ios::app|ios::binary);
			cout<<"Enter the C String\n";
			cin.ignore();
			cin.getline(String,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getString()
		{
			ifstream fin("CString.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<String<<endl;
			}
			fin.close();
		}
		void setpointer()
		{
			ofstream fout("Cpointer.txt",ios::app|ios::binary);
			cout<<"Enter the C pointer\n";
			cin.ignore();
			cin.getline(pointer,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getpointer()
		{
			ifstream fin("Cpointer.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<pointer<<endl;
			}
			fin.close();
		}
		void setFunction()
		{
			ofstream fout("CFunction.txt",ios::app|ios::binary);
			cout<<"Enter the C Function\n";
			cin.ignore();
			cin.getline(Function,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getFunction()
		{
			ifstream fin("CFunction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Function<<endl;
			}
			fin.close();
		}
		void setMathFunction()
		{
			ofstream fout("CMathFunction.txt",ios::app|ios::binary);
			cout<<"Enter the C Math Function\n";
			cin.ignore();
			cin.getline(MathFunction,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getMathFunction()
		{
			ifstream fin("CMathFunction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<MathFunction<<endl;
			}
			fin.close();
		}
		void setRecursion()
		{
			ofstream fout("CRecursion.txt",ios::app|ios::binary);
			cout<<"Enter the C Recursion\n";
			cin.ignore();
			cin.getline(Recursion,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getRecursion()
		{
			ifstream fin("CRecursion.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Recursion<<endl;
			}
			fin.close();
		}
		void setfile_c()
		{
			ofstream fout("Cfilec.txt",ios::app|ios::binary);
			cout<<"Enter the C file_c\n";
			cin.ignore();
			cin.getline(file_c,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getfile_c()
		{
			ifstream fin("Cfilec.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<file_c<<endl;
			}
			fin.close();
		}
		void setStructures()
		{
			ofstream fout("CStructures.txt",ios::app|ios::binary);
			cout<<"Enter the C Structures\n";
			cin.ignore();
			cin.getline(Structures,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getStructures()
		{
			ifstream fin("CStructures.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Structures<<endl;
			}
			fin.close();
		}
};
