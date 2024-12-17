#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
class Cplushplush{
	char Cplushtopic[100];
	char CplushProgram[10000];
//------------------------------------------
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
	char Encapsulation[10000];
	char Objecclass[10000];
	char inheritance[10000];
	char polymorphism[10000];
	char Abstraction[10000];
	char Exception[10000];
	public:
		void setData()
		{
			ofstream fout("CplushProgramming.txt",ios::app|ios::binary);
			cin.ignore();
			cout<<"Enter the Topic\n";
			cin.getline(Cplushtopic,100);
			cout<<"Enter the Related Data\n";
			cin.getline(CplushProgram,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getData()
		{
			ifstream fin("CplushProgramming.txt",ios::in|ios::binary);
			char topic[100];
			cin.ignore();
			cout<<"Enter the Topic to Search\n";
			cin.getline(topic,100);
			system("cls");
			while(fin.read((char*)this,sizeof(*this)))
			{
				if(!strcmp(Cplushtopic,topic)){
					cout<<Cplushtopic<<endl;
					cout<<CplushProgram<<endl;
				}
			}
			fin.close();
		}
		void setintrodata()
		{
			ofstream fout("CplushplushIntroduction.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Introduction\n";
			cin.ignore();
			cin.getline(into,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getintrodata()
		{
			ifstream fin("CplushplushIntroduction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<into<<endl;
			}
			fin.close();
		}
		void setvar_data()
		{
			ofstream fout("CplushplushVariableanddata.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Variable and Data types\n";
			cin.ignore();
			cin.getline(var_data,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getvar_data()
		{
			ifstream fin("CplushplushVariableanddata.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<var_data<<endl;
			}
			fin.close();
		}
		void setcoperator()
		{
			ofstream fout("Cplushplushoperator.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Operator\n";
			cin.ignore();
			cin.getline(coperator,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getcoperator()
		{
			ifstream fin("Cplushplushoperator.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<coperator<<endl;
			}
			fin.close();
		}
		void setstatement()
		{
			ofstream fout("Cplushplushstatement.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Statement\n";
			cin.ignore();
			cin.getline(statement,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getstatement()
		{
			ifstream fin("Cplushplushstatement.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<statement<<endl;
			}
			fin.close();
		}
		void setloop()
		{
			ofstream fout("Cplushplushloops.txt",ios::app|ios::binary);
			cout<<"Enter the C++ loop\n";
			cin.ignore();
			cin.getline(loop,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getloop()
		{
			ifstream fin("Cplushplushloops.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<loop<<endl;
			}
			fin.close();
		}
		void setArray()
		{
			ofstream fout("CplushplushArray.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Array\n";
			cin.ignore();
			cin.getline(Array,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getArray()
		{
			ifstream fin("CplushplushArray.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Array<<endl;
			}
			fin.close();
		}
		void setString()
		{
			ofstream fout("CplushplushString.txt",ios::app|ios::binary);
			cout<<"Enter the C++ String\n";
			cin.ignore();
			cin.getline(String,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getString()
		{
			ifstream fin("CplushplushString.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<String<<endl;
			}
			fin.close();
		}
		void setpointer()
		{
			ofstream fout("Cplushplushpointer.txt",ios::app|ios::binary);
			cout<<"Enter the C++ pointer\n";
			cin.ignore();
			cin.getline(pointer,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getpointer()
		{
			ifstream fin("Cplushplushpointer.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<pointer<<endl;
			}
			fin.close();
		}
		void setFunction()
		{
			ofstream fout("CplushplushFunction.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Function\n";
			cin.ignore();
			cin.getline(Function,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getFunction()
		{
			ifstream fin("CplushplushFunction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Function<<endl;
			}
			fin.close();
		}
		void setMathFunction()
		{
			ofstream fout("CplushplushMathFunction.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Math Function\n";
			cin.ignore();
			cin.getline(MathFunction,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getMathFunction()
		{
			ifstream fin("CplushplushMathFunction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<MathFunction<<endl;
			}
			fin.close();
		}
		void setRecursion()
		{
			ofstream fout("CplushplushRecursion.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Recursion\n";
			cin.ignore();
			cin.getline(Recursion,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getRecursion()
		{
			ifstream fin("CplushplushRecursion.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Recursion<<endl;
			}
			fin.close();
		}
		void setfile_c()
		{
			ofstream fout("Cplushplushfilec.txt",ios::app|ios::binary);
			cout<<"Enter the C++ file_c\n";
			cin.ignore();
			cin.getline(file_c,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getfile_c()
		{
			ifstream fin("Cplushplushfilec.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<file_c<<endl;
			}
			fin.close();
		}
		void setStructures()
		{
			ofstream fout("CplushplushStructures.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Structures\n";
			cin.ignore();
			cin.getline(Structures,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getStructures()
		{
			ifstream fin("CplushplushStructures.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Structures<<endl;
			}
			fin.close();
		}
		void setObjecclass()
		{
			ofstream fout("CplushplushObjecclass.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Objec class\n";
			cin.ignore();
			cin.getline(Objecclass,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getObjecclass()
		{
			ifstream fin("CplushplushObjecclass.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Objecclass<<endl;
			}
			fin.close();
		}
		void setEncapsulation()
		{
			ofstream fout("CplushplushEncapsulation.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Encapsulation\n";
			cin.ignore();
			cin.getline(Encapsulation,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getEncapsulation()
		{
			ifstream fin("CplushplushEncapsulation.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Encapsulation<<endl;
			}
			fin.close();
		}
		void setinheritance()
		{
			ofstream fout("Cplushplushinheritance.txt",ios::app|ios::binary);
			cout<<"Enter the C++ inheritance\n";
			cin.ignore();
			cin.getline(inheritance,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getinheritance()
		{
			ifstream fin("Cplushplushinheritance.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<inheritance<<endl;
			}
			fin.close();
		}
		void setpolymorphism()
		{
			ofstream fout("Cplushplushpolymorphism.txt",ios::app|ios::binary);
			cout<<"Enter the C++ polymorphism\n";
			cin.ignore();
			cin.getline(polymorphism,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getpolymorphism()
		{
			ifstream fin("Cplushplushpolymorphism.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<polymorphism<<endl;
			}
			fin.close();
		}
		void setAbstraction()
		{
			ofstream fout("CplushplushAbstraction.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Abstraction\n";
			cin.ignore();
			cin.getline(Abstraction,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getAbstraction()
		{
			ifstream fin("CplushplushAbstraction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Abstraction<<endl;
			}
			fin.close();
		}
		void setException()
		{
			ofstream fout("CplushplushException.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Exception\n";
			cin.ignore();
			cin.getline(Exception,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getException()
		{
			ifstream fin("CplushplushException.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Exception<<endl;
			}
			fin.close();
		}
};
