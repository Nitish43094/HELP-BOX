#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
using namespace std;
class Java{
	char Javatopic[100];
	char JavaProgram[10000];
//--------------------------------------
	char into[10000];
	char data[10000];
	char var_data[10000];
	char coperator[10000];
	char statement[10000];
	char loop[10000];
	char Array[10000];
	char String[10000];
	char Reference[10000];
	char Function[10000];
	char MathFunction[10000];
	char Recursion[10000];
	char file[10000];
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
			ofstream fout("JavaProgramming.txt",ios::app|ios::binary);
			cin.ignore();
			cout<<"Enter the Topic\n";
			cin.getline(Javatopic,100);
			cout<<"Enter the Related Data\n";
			cin.getline(JavaProgram,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getData()
		{
			ifstream fin("JavaProgramming.txt",ios::in|ios::binary);
			char topic[100];
			cin.ignore();
			cout<<"Enter the Topic to Search\n";
			cin.getline(topic,100);
			system("cls");
			while(fin.read((char*)this,sizeof(*this)))
			{
				if(!strcmp(Javatopic,topic)){
					cout<<Javatopic<<endl;
					cout<<JavaProgram<<endl;
				}
			}
			fin.close();
		}
//1.---------------------------------------------
		void setintrodata()
		{
			ofstream fout("JavaIntroduction.txt",ios::app|ios::binary);
			cout<<"Enter the Java Introduction\n";
			cin.ignore();
			cin.getline(into,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getintrodata()
		{
			ifstream fin("JavaIntroduction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<into<<endl;
			}
			fin.close();
		}
//2.-------------------------------------------------------
		void setdata()
		{
			ofstream fout("JavaData.txt",ios::app|ios::binary);
			cout<<"Enter the Java data Type\n";
			cin.ignore();
			cin.getline(data,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getdata()
		{
			ifstream fin("JavaData.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<data<<endl;
			}
			fin.close();
		}
//3.----------------------------------------
		void setvar_data()
		{
			ofstream fout("JavaVariableanddata.txt",ios::app|ios::binary);
			cout<<"Enter the Java Variable and Data types\n";
			cin.ignore();
			cin.getline(var_data,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
		}
		void getvar_data()
		{
			ifstream fin("JavaVariableanddata.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<var_data<<endl;
			}
			fin.close();
		}
//4.---------------------------------
		void setcoperator()
		{
			ofstream fout("Javaoperator.txt",ios::app|ios::binary);
			cout<<"Enter the Java Operator\n";
			cin.ignore();
			cin.getline(coperator,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getcoperator()
		{
			ifstream fin("Javaoperator.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<coperator<<endl;
			}
			fin.close();
		}
//-----------------------------------
		void setstatement()
		{
			ofstream fout("Javastatement.txt",ios::app|ios::binary);
			cout<<"Enter the Java Statement\n";
			cin.ignore();
			cin.getline(statement,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getstatement()
		{
			ifstream fin("Javastatement.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<statement<<endl;
			}
			fin.close();
		}
//-----------------------------------------
		void setloop()
		{
			ofstream fout("Javaloops.txt",ios::app|ios::binary);
			cout<<"Enter the Java loop\n";
			cin.ignore();
			cin.getline(loop,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getloop()
		{
			ifstream fin("Javaloops.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<loop<<endl;
			}
			fin.close();
		}
//---------------------------------------------
		void setArray()
		{
			ofstream fout("CplushplushArray.txt",ios::app|ios::binary);
			cout<<"Enter the Java Array\n";
			cin.ignore();
			cin.getline(Array,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getArray()
		{
			ifstream fin("JavaArray.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Array<<endl;
			}
			fin.close();
		}
//-----------------------------------------------
		void setString()
		{
			ofstream fout("JavaString.txt",ios::app|ios::binary);
			cout<<"Enter the Java String\n";
			cin.ignore();
			cin.getline(String,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getString()
		{
			ifstream fin("JavaString.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<String<<endl;
			}
			fin.close();
		}
//--------------------------------------------------
		void setReference()
		{
			ofstream fout("JavaReference.txt",ios::app|ios::binary);
			cout<<"Enter the Java Reference\n";
			cin.ignore();
			cin.getline(Reference,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getReference()
		{
			ifstream fin("JavaReference.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Reference<<endl;
			}
			fin.close();
		}
//------------------------------------------------------
		void setFunction()
		{
			ofstream fout("JavaFunction.txt",ios::app|ios::binary);
			cout<<"Enter the Java Function\n";
			cin.ignore();
			cin.getline(Function,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getFunction()
		{
			ifstream fin("JavaFunction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Function<<endl;
			}
			fin.close();
		}
//------------------------------------------------------
		void setMathFunction()
		{
			ofstream fout("JavaMathFunction.txt",ios::app|ios::binary);
			cout<<"Enter the Java Math Function\n";
			cin.ignore();
			cin.getline(MathFunction,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getMathFunction()
		{
			ifstream fin("JavaMathFunction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<MathFunction<<endl;
			}
			fin.close();
		}
//------------------------------------------
		void setRecursion()
		{
			ofstream fout("JavaRecursion.txt",ios::app|ios::binary);
			cout<<"Enter the Java Recursion\n";
			cin.ignore();
			cin.getline(Recursion,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getRecursion()
		{
			ifstream fin("JavaRecursion.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Recursion<<endl;
			}
			fin.close();
		}
//------------------------------------------------
		void setfile()
		{
			ofstream fout("Javafiles.txt",ios::app|ios::binary);
			cout<<"Enter the Java file\n";
			cin.ignore();
			cin.getline(file,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getfile()
		{
			ifstream fin("Javafiles.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<file<<endl;
			}
			fin.close();
		}
//---------------------------------------------------
		void setObjecclass()
		{
			ofstream fout("JavaObjecclass.txt",ios::app|ios::binary);
			cout<<"Enter the Java Objec class\n";
			cin.ignore();
			cin.getline(Objecclass,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getObjecclass()
		{
			ifstream fin("JavaObjecclass.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Objecclass<<endl;
			}
			fin.close();
		}
//----------------------------------------------------------
		void setEncapsulation()
		{
			ofstream fout("JavaEncapsulation.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Encapsulation\n";
			cin.ignore();
			cin.getline(Encapsulation,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getEncapsulation()
		{
			ifstream fin("JavaEncapsulation.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Encapsulation<<endl;
			}
			fin.close();
		}
//--------------------------------------------------
		void setinheritance()
		{
			ofstream fout("Javainheritance.txt",ios::app|ios::binary);
			cout<<"Enter the Java inheritance\n";
			cin.ignore();
			cin.getline(inheritance,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getinheritance()
		{
			ifstream fin("Javainheritance.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<inheritance<<endl;
			}
			fin.close();
		}
//-------------------------------------------------------
		void setpolymorphism()
		{
			ofstream fout("Javapolymorphism.txt",ios::app|ios::binary);
			cout<<"Enter the Java polymorphism\n";
			cin.ignore();
			cin.getline(polymorphism,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getpolymorphism()
		{
			ifstream fin("Javapolymorphism.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<polymorphism<<endl;
			}
			fin.close();
		}
//----------------------------------------------------
		void setAbstraction()
		{
			ofstream fout("JavaAbstraction.txt",ios::app|ios::binary);
			cout<<"Enter the C++ Abstraction\n";
			cin.ignore();
			cin.getline(Abstraction,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getAbstraction()
		{
			ifstream fin("JavaAbstraction.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Abstraction<<endl;
			}
			fin.close();
		}
//-----------------------------------------------------
		void setException()
		{
			ofstream fout("JavaException.txt",ios::app|ios::binary);
			cout<<"Enter the Java Exception\n";
			cin.ignore();
			cin.getline(Exception,100000,'@');
			fout.write((char*)this,sizeof(*this));
			fout.close();
			system("cls");
		}
		void getException()
		{
			ifstream fin("JavaException.txt",ios::in|ios::binary);
			while(fin.read((char*)this,sizeof(*this)))
			{
				cout<<Exception<<endl;
			}
			fin.close();
		}
};
