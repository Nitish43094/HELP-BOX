#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "Java.h"
#include "Cplushplush.h"
#include "Cprogramming.h"
#include "UserProfile.h"
#include "Admine.h"
//------------------------------------------------------------------
void gotoxy(short x, short y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//-------------------------------------------------------------------
using namespace std;
int main()
{
	int ch, Ad = 0, User = 0;
	Password p;
	UserPassword us;
	//	us.CreateProfile();
	C_intro ci;
	Cplushplush cplush;
	Java j;
	//---------------------------------------------------------------------
	//	gotoxy(70,20);
	//	printf("Loading...");
	//	for(int i=0;i<50;i++)
	//	Sleep(100);
	//	system("cls");
	//----------------------------------------------------------------------
	string phar = "WELCOME TO HELP BOX";
	string command = "espeak \"" + phar + "\"";
	const char *CharCommand = command.c_str();
	system(CharCommand);
	while (1)
	{	page1:
		gotoxy(60, 0);
		cout << "+-------------------------------------------+\n";
		gotoxy(60, 1);
		cout << "|1.Admin Login                              |\n";
		gotoxy(60, 2);
		cout << "|-------------------------------------------|\n";
		gotoxy(60, 3);
		cout << "|2.User Login                               |\n";
		gotoxy(60, 4);
		cout << "|-------------------------------------------|\n";
		gotoxy(60, 5);
		cout << "|3.Exit                                     |\n";
		gotoxy(60, 6);
		cout << "|-------------------------------------------|\n";
		gotoxy(60, 7);
		cout << "|Enter the Choise                           |\n";
		gotoxy(60, 8);
		cout << "+-------------------------------------------+\n";
		gotoxy(60, 9);
		string phar = "Please Select Your Option";
//		string command = "espeak \"" + phar + "\"";
//		const char *CharCommand = command.c_str();
//		system(CharCommand);
		cin >> ch;
		system("cls");
		switch (ch)
		{
			case 1:
				Ad = p.Login();
				cout << "\a";
				break;
			case 2:
				User = us.Login();
				cout << "\a";
				break;
			case 3:
				exit(0);
				break;
			default:
				gotoxy(60, 0);
				cout << "\nInvalid...\a\n";
		}
		gotoxy(60, 1);
		system("cls");
		if (Ad)
		{
			while (1)
			{
				page2:
				system("cls");
				string phar = "You are Login Admin Page";
//				string command = "espeak \"" + phar + "\"";
//				const char *CharCommand = command.c_str();
//				system(CharCommand);
				gotoxy(60, 0);
				cout << "+-------------------------------------------+\n";
				gotoxy(60, 1);
				cout << "|1.See Your Profile                         |\n";
				gotoxy(60, 2);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 3);
				cout << "|2.C TUTORIAl                               |\n";
				gotoxy(60, 4);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 5);
				cout << "|3.C++ TUTORIAl                             |\n";
				gotoxy(60, 6);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 7);
				cout << "|4.JAVA TUTORIAl                            |\n";
				gotoxy(60, 8);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 9);
				cout << "|5.Exit                                     |\n";
				gotoxy(60, 10);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 11);
				cout << "|6.Back                                     |\n";
				gotoxy(60, 12);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 13);
				cout << "|           Select The Option               |\n";
				gotoxy(60, 14);
				cout << "+-------------------------------------------+\n";
				string phar1 = "Select the Language";
//				string command1 = "espeak \"" + phar1 + "\"";
//				const char *CharCommand1 = command1.c_str();
//				system(CharCommand1);
				gotoxy(60, 15);
				cin >> ch;
				system("cls");
				switch (ch)
				{
				case 1:
					p.Profile();
					break;
				case 2:
					while (1)
					{
						page3:
						system("cls");
						string phar = "WELCOME TO C TUTORIAl";
//						string command = "espeak \"" + phar + "\"";
//						const char *CharCommand = command.c_str();
//						system(CharCommand);
						gotoxy(60, 1);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 2);
						cout << "|-----------WELCOME TO C TUTORIAL-----------|\n";
						gotoxy(60, 3);
						cout << "|                0.Search                   |\n";
						gotoxy(60, 4);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 5);
						cout << "|                C Syllabus                 |\n";
						gotoxy(60, 6);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 7);
						cout << "|1.Introduction                             |\n";
						gotoxy(60, 8);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 9);
						cout << "|2.Variable & Data Type                     |\n";
						gotoxy(60, 10);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 11);
						cout << "|3.Operator                                 |\n";
						gotoxy(60, 12);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 13);
						cout << "|4.Conditanal Statement                     |\n";
						gotoxy(60, 14);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 15);
						cout << "|5.Loop                                     |\n";
						gotoxy(60, 16);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 17);
						cout << "|6.Array                                    |\n";
						gotoxy(60, 18);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 19);
						cout << "|7.Pointer                                  |\n";
						gotoxy(60, 20);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 21);
						cout << "|8.Function                                 |\n";
						gotoxy(60, 22);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 23);
						cout << "|9.Math Function                            |\n";
						gotoxy(60, 24);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 25);
						cout << "|10.Recursion                               |\n";
						gotoxy(60, 26);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 27);
						cout << "|11.File                                    |\n";
						gotoxy(60, 28);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 29);
						cout << "|12.Structures                              |\n";
						gotoxy(60, 30);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 31);
						cout << "|13.Exit                                    |\n";
						gotoxy(60, 32);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 33);
						cout << "|14.Back                                    |\n";
						gotoxy(60, 34);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 35);
						cout << "|15.Add C Contant                           |\n";
						gotoxy(60, 36);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 37);
						cout << "|             Select The Option             |\n";
						gotoxy(60, 38);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 39);
						string phar1 = "Select The Option";
//						string command1 = "espeak \"" + phar1 + "\"";
//						const char *CharCommand1 = command1.c_str();
//						system(CharCommand1);
						gotoxy(60, 40);
						cin >> ch;
						system("cls");
						switch (ch)
						{
						case 0:
							ci.getData();
							break;
						case 1:
							ci.getintrodata();
							break;
						case 2:
							ci.getvar_data();
							break;
						case 3:
							ci.getcoperator();
							break;
						case 4:
							ci.getstatement();
							break;
						case 5:
							ci.getloop();
							break;
						case 6:
							ci.getArray();
							break;
						case 7:
							ci.getpointer();
							break;
						case 8:
							ci.getFunction();
							break;
						case 9:
							ci.getMathFunction();
							break;
						case 10:
							ci.getRecursion();
							break;
						case 11:
							ci.getfile_c();
							break;
						case 12:
							ci.getStructures();
							break;
						case 13:
							exit(1);
							break;
						case 14:
							goto page2;
							break;
						case 15:
							while(1)
							{
								system("cls");
								gotoxy(60, 0);
								cout << "+-------------------------------------------+\n";
								gotoxy(60, 1);
								cout << "|              Add C Contant                |\n";
								gotoxy(60, 2);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 3);
								cout << "|      0.Add Data in C Programming          |\n";
								gotoxy(60, 4);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 5);
								cout << "|1.Set introduction                         |\n";
								gotoxy(60, 6);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 7);
								cout << "|2.Set Variable and Data type               |\n";
								gotoxy(60, 8);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 9);
								cout << "|3.Set Operator in C                        |\n";
								gotoxy(60, 10);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 11);
								cout << "|4.Set Statement in C                       |\n";
								gotoxy(60, 12);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 13);
								cout << "|5.Set Loop in C                            |\n";
								gotoxy(60, 14);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 15);
								cout << "|6.Set Array in C                           |\n";
								gotoxy(60, 16);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 17);
								cout << "|7.Set String in C                          |\n";
								gotoxy(60, 18);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 19);
								cout << "|8.Set Pointer in C                         |\n";
								gotoxy(60, 20);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 21);
								cout << "|9.Set Function in C                        |\n";
								gotoxy(60, 22);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 23);
								cout << "|10.Set Math Function in C                  |\n";
								gotoxy(60, 24);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 25);
								cout << "|11.Set Recursion in C                      |\n";
								gotoxy(60, 26);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 27);
								cout << "|12.Set File in C                           |\n";
								gotoxy(60, 28);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 29);
								cout << "|13.Set Structures in C                     |\n";
								gotoxy(60, 30);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 31);
								cout << "|14.Exit                                    |\n";
								gotoxy(60, 32);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 33);
								cout << "|15.Back                                    |\n";
								gotoxy(60, 34);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 35);
								cout << "|          Select The Option                |\n";
								gotoxy(60, 36);
								cout << "+-------------------------------------------+\n";
								gotoxy(60, 37);
								cin >> ch;
								switch (ch)
								{
									case 0:
										ci.setData();
										break;
									case 1:
										ci.setintrodata();
										break;
									case 2:
										ci.setvar_data();
										break;
									case 3:
										ci.setcoperator();
										break;
									case 4:
										ci.setstatement();
										break;
									case 5:
										ci.setloop();
										break;
									case 6:
										ci.setArray();
										break;
									case 7:
										ci.setString();
										break;
									case 8:
										ci.setpointer();
										break;
									case 9:
										ci.setFunction();
										break;
									case 10:
										ci.setRecursion();
										break;
									case 11:
										ci.setfile_c();
										break;
									case 13:
										ci.setStructures();
										break;
									case 14:
										exit(0);
										break;
									case 15:
										goto page3;
										break;
									default:
										cout << "Invalid\a\n";
								}
								system("pause");
							}
							break;
						}
						system("pause");
					}
					break;
				case 3:
					while (1)
					{
						page4:
						system("cls");
//						string phar = "WELCOME TO C plush plush TUTORIAl";
//						string command = "espeak \"" + phar + "\"";
//						const char *CharCommand = command.c_str();
//						system(CharCommand);
						gotoxy(60, 0);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 1);
						cout << "|----------WELCOME TO C++ TUTORIAL----------|\n";
						gotoxy(60, 2);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 3);
						cout << "|                 0.Search                  |\n";
						gotoxy(60, 4);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 5);
						cout << "|               C++ Syllabus                |\n";
						gotoxy(60, 6);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 7);
						cout << "|1.Introduction                             |\n";
						gotoxy(60, 8);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 9);
						cout << "|2.Variable & Data Type                     |\n";
						gotoxy(60, 10);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 11);
						cout << "|3.Operator                                 |\n";
						gotoxy(60, 12);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 13);
						cout << "|4.Conditanal Statement                     |\n";
						gotoxy(60, 14);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 15);
						cout << "|5.Loop                                     |\n";
						gotoxy(60, 16);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 17);
						cout << "|6.String                                   |\n";
						gotoxy(60, 18);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 19);
						cout << "|7.Array                                    |\n";
						gotoxy(60, 20);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 21);
						cout << "|8.Pointer                                  |\n";
						gotoxy(60, 22);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 23);
						cout << "|9.Function                                 |\n";
						gotoxy(60, 24);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 25);
						cout << "|10.Math Function                           |\n";
						gotoxy(60, 26);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 27);
						cout << "|11.Recursion                               |\n";
						gotoxy(60, 28);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 29);
						cout << "|12.Structures                              |\n";
						gotoxy(60, 30);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 31);
						cout << "|13.Object Class                            |\n";
						gotoxy(60, 32);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 33);
						cout << "|14.Encapsulation                           |\n";
						gotoxy(60, 34);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 35);
						cout << "|15.Inheritance                             |\n";
						gotoxy(60, 36);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 37);
						cout << "|16.Polymorphism                            |\n";
						gotoxy(60, 38);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 39);
						cout << "|17.Abstraction                             |\n";
						gotoxy(60, 40);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 41);
						cout << "|18.Exceptions                              |\n";
						gotoxy(60, 42);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 43);
						cout << "|19.File and Stream                         |\n";
						gotoxy(60, 44);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 45);
						cout << "|20.Exit                                    |\n";
						gotoxy(60, 46);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 47);
						cout << "|21.Back                                    |\n";
						gotoxy(60, 48);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 49);
						cout << "|22.Add C++ Contant                         |\n";
						gotoxy(60, 50);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 51);
						cout << "|             Select The Option             |\n";
						gotoxy(60, 52);
						cout << "+-------------------------------------------+\n";
						string phar1 = "Select the Option";
						string command1 = "espeak \"" + phar1 + "\"";
						const char *CharCommand1 = command1.c_str();
						system(CharCommand1);
						gotoxy(60, 53);
						cin >> ch;
						system("cls");
						switch (ch)
						{
						case 0:
							cplush.getData();
							break;
						case 1:
							cplush.getintrodata();
							break;
						case 2:
							cplush.getvar_data();
							break;
						case 3:
							cplush.getcoperator();
							break;
						case 4:
							cplush.getstatement();
							break;
						case 5:
							cplush.getloop();
							break;
						case 6:
							break;
						case 7:
							cplush.getArray();
							break;
						case 8:
							cplush.getpointer();
							break;
						case 9:
							cplush.getFunction();
							break;
						case 10:
							cplush.getMathFunction();
							break;
						case 11:
							cplush.getRecursion();
							break;
						case 12:
							cplush.getStructures();
							break;
						case 13:
							cplush.getObjecclass();
							break;
						case 14:
							cplush.getEncapsulation();
							break;
						case 15:
							cplush.getinheritance();
							break;
						case 16:
							cplush.getpolymorphism();
							break;
						case 17:
							cplush.getAbstraction();
							break;
						case 18:
							cplush.getException();
							break;
						case 19:
							cplush.getfile_c();
							break;
						case 20:
							exit(0);
							break;
						case 21:
							goto page2;
							break;
						case 22:
							while(1)
							{
								system("cls");
								gotoxy(60, 0);
								cout << "+-------------------------------------------+\n";
								gotoxy(60, 1);
								cout << "|              Add C++ Contant              |\n";
								gotoxy(60, 2);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 3);
								cout << "|            0.Add Data                     |\n";
								gotoxy(60, 4);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 5);
								cout << "|1.Set introduction in c++                  |\n";
								gotoxy(60, 6);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 7);
								cout << "|2.Set Variable and Data type in c++        |\n";
								gotoxy(60, 8);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 9);
								cout << "|3.Set Operator in C++                      |\n";
								gotoxy(60, 10);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 11);
								cout << "|4.Set Statement in C++                     |\n";
								gotoxy(60, 12);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 13);
								cout << "|5.Set Loop in C++                          |\n";
								gotoxy(60, 14);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 15);
								cout << "|6.Set Array in C++                         |\n";
								gotoxy(60, 16);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 17);
								cout << "|7.Set String in C++                        |\n";
								gotoxy(60, 18);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 19);
								cout << "|8.Set Pointer in C++                       |\n";
								gotoxy(60, 20);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 21);
								cout << "|9.Set Function in C++                      |\n";
								gotoxy(60, 22);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 23);
								cout << "|10.Set Math Function in C++                |\n";
								gotoxy(60, 24);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 25);
								cout << "|11.Set Recursion in C++                    |\n";
								gotoxy(60, 26);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 27);
								cout << "|12.Set File in C++                         |\n";
								gotoxy(60, 28);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 29);
								cout << "|13.Set Structures in C++                   |\n";
								gotoxy(60, 30);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 31);
								cout << "|14.Object Class                            |\n";
								gotoxy(60, 32);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 33);
								cout << "|15.Encapsulation                           |\n";
								gotoxy(60, 34);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 35);
								cout << "|16.Inheritance                             |\n";
								gotoxy(60, 36);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 37);
								cout << "|17.Polymorphism                            |\n";
								gotoxy(60, 38);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 39);
								cout << "|18.Abstraction                             |\n";
								gotoxy(60, 40);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 41);
								cout << "|19.Exceptions                              |\n";
								gotoxy(60, 42);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 43);
								cout << "|20.Exit                                    |\n";
								gotoxy(60, 44);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 45);
								cout << "|21.Back                                    |\n";
								gotoxy(60, 46);
								cout << "|-------------------------------------------|\n";
								gotoxy(60, 47);
								cout << "|              Select The Option            |\n";
								gotoxy(60, 48);
								cout << "+-------------------------------------------+\n";
								gotoxy(60, 49);
								cin >> ch;
								switch (ch)
								{
								case 0:
									cplush.setData();
									break;
								case 1:
									cplush.setintrodata();
									break;
								case 2:
									cplush.setvar_data();
									break;
								case 3:
									cplush.setcoperator();
									break;
								case 4:
									cplush.setstatement();
									break;
								case 5:
									cplush.setloop();
									break;
								case 6:
									cplush.setArray();
									break;
								case 7:
									ci.setString();
									break;
								case 8:
									cplush.setpointer();
									break;
								case 9:
									cplush.setFunction();
									break;
								case 10:
									cplush.setRecursion();
									break;
								case 11:
									cplush.setfile_c();
									break;
								case 13:
									cplush.setStructures();
									break;
								case 14:
									cplush.setObjecclass();
									break;
								case 15:
									cplush.setEncapsulation();
									break;
								case 16:
									cplush.setinheritance();
									break;
								case 17:
									cplush.setpolymorphism();
									break;
								case 18:
									cplush.setAbstraction();
									break;
								case 19:
									cplush.setException();
									break;
								case 20:
									exit(0);
									break;
								case 21:
									goto page4;
									break;
								default:
									cout << "Invalid\a\n";
								}
							}
							break;
						}
						system("pause");
					}
					break;
				case 4:
					while (1)
					{
						page5:
						system("cls");
//						string phar = "WELCOME TO JAVA TUTORIAl";
//						string command = "espeak \"" + phar + "\"";
//						const char *CharCommand = command.c_str();
//						system(CharCommand);
						gotoxy(60, 0);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 1);
						cout << "|----------WELCOME TO JAVA TUTORIAL---------|\n";
						gotoxy(60, 2);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 3);
						cout << "|                 1.Search                  |\n";
						gotoxy(60, 4);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 5);
						cout << "|                Java Syllabus              |\n";
						gotoxy(60, 6);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 7);
						cout << "|2.Basic of Java                            |\n";
						gotoxy(60, 8);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 9);
						cout << "|3.Data Type                                |\n";
						gotoxy(60, 10);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 11);
						cout << "|4.Variable,Consttrains and Literals        |\n";
						gotoxy(60, 12);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 13);
						cout << "|5.Operator                                 |\n";
						gotoxy(60, 14);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 15);
						cout << "|6.Conditanal Statement                     |\n";
						gotoxy(60, 16);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 17);
						cout << "|7.Loop                                     |\n";
						gotoxy(60, 18);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 19);
						cout << "|8.String                                   |\n";
						gotoxy(60, 20);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 21);
						cout << "|9.Array                                    |\n";
						gotoxy(60, 22);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 23);
						cout << "|10.Math Function                            |\n";
						gotoxy(60, 24);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 25);
						cout << "|11.Class and Object                        |\n";
						gotoxy(60, 26);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 27);
						cout << "|12.Methods                                 |\n";
						gotoxy(60, 28);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 29);
						cout << "|13.Constructor                             |\n";
						gotoxy(60, 30);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 31);
						cout << "|14.Modifiers                               |\n";
						gotoxy(60, 32);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 33);
						cout << "|15.Static Keyword                          |\n";
						gotoxy(60, 34);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 35);
						cout << "|16.Final Keyword                           |\n";
						gotoxy(60, 36);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 37);
						cout << "|17.Inner Class                             |\n";
						gotoxy(60, 38);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 39);
						cout << "|18.Super and this keyword                  |\n";
						gotoxy(60, 40);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 41);
						cout << "|19.Encapsulation                           |\n";
						gotoxy(60, 42);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 43);
						cout << "|20.Inheritance                             |\n";
						gotoxy(60, 44);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 45);
						cout << "|21.Polymorphi                              |\n";
						gotoxy(60, 46);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 47);
						cout << "|22.Abstraction                             |\n";
						gotoxy(60, 48);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 49);
						cout << "|23.Exit                                    |\n";
						gotoxy(60, 50);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 56);
						cout << "|24.Back                                    |\n";
						gotoxy(60, 57);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 58);
						cout << "|24.Add Java Contant                        |\n";
						gotoxy(60, 59);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 60);
						cout << "|            Select The Option              |\n";
						gotoxy(60, 61);
						cout << "+-------------------------------------------+\n";
//						string phar1 = "Select The Option";
//						string command1 = "espeak \"" + phar1 + "\"";
//						const char *CharCommand1 = command1.c_str();
//						system(CharCommand1);
						gotoxy(60, 62);
						cin>>ch;
						switch(ch){
							case 1:
								j.getData();
								break;
							case 2:
								j.getintrodata();
								break;
							case 3:
								j.getdata();
								break;
							case 4:
								j.getvar_data();
								break;
							case 5:
								j.getcoperator();
								break;
							case 6:
								j.getstatement();
								break;
							case 7:
								j.getloop();
								break;
							case 8:
								j.getString();
								break;
							case 9:
								j.getArray();
								break;
							case 10:
								j.getMathFunction();
								break;
							case 11:
								j.getObjecclass();
								break;
							case 12:
								
								break;
							case 13:
								
								break;
							case 14:
								
								break;
							case 16:
								
								break;
							case 17:
								
								break;
							case 18:
								
								break;
							case 19:
								
								break;
							case 20:
								
								break;
							case 21:
								
								break;
							case 22:
								
								break;
							case 23:
								
								break;
							case 24:
								goto page6;
								break;
							default:
								cout << "Invalid...\a\n";
						}
						system("pause");
						system("cls");
					}
					break;
				case 5:
					exit(0);
					break;
				case 6:
					goto page1;
					break;
				default:
					cout << "Invalid\a\n";
				}
				system("pause");
			}
		}
		if (User)
		{
			while (1)
			{
				page6:
				system("cls");
//				string phar = "You are Login User Page";
//				string command = "espeak \"" + phar + "\"";
//				const char *CharCommand = command.c_str();
//				system(CharCommand);
				gotoxy(60, 0);
				cout << "+-------------------------------------------+\n";
				gotoxy(60, 1);
				cout << "|1.See Your Profile                         |\n";
				gotoxy(60, 2);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 3);
				cout << "|2.C TUTORIAl                               |\n";
				gotoxy(60, 4);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 5);
				cout << "|3.C++ TUTORIAl                             |\n";
				gotoxy(60, 6);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 7);
				cout << "|4.JAVA TUTORIAl                            |\n";
				gotoxy(60, 8);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 9);
				cout << "|5.Exit                                     |\n";
				gotoxy(60, 10);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 11);
				cout << "|6.Back                                     |\n";
				gotoxy(60, 12);
				cout << "|-------------------------------------------|\n";
				gotoxy(60, 13);
				cout << "|Please Select your Choise                  |\n";
				gotoxy(60, 14);
				cout << "+-------------------------------------------+\n";
//				string phar1 = "Select the Language";
//				string command1 = "espeak \"" + phar1 + "\"";
//				const char *CharCommand1 = command1.c_str();
//				system(CharCommand1);
				gotoxy(60, 15);
				cin >> ch;
				system("cls");
				switch (ch)
				{
				case 1:
					us.Profile();
					break;
				case 2:
					while (1)
					{
						system("cls");
//						string phar = "WELCOME TO C TUTORIAl";
//						string command = "espeak \"" + phar + "\"";
//						const char *CharCommand = command.c_str();
//						system(CharCommand);
						gotoxy(60, 1);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 2);
						cout << "|-----------WELCOME TO C TUTORIAL-----------|\n";
						gotoxy(60, 3);
						cout << "|             0.Search The Data             |\n";
						gotoxy(60, 4);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 5);
						cout << "|                C Syllabus                 |\n";
						gotoxy(60, 6);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 7);
						cout << "|1.Introduction                             |\n";
						gotoxy(60, 8);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 9);
						cout << "|2.Variable & Data Type                     |\n";
						gotoxy(60, 10);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 11);
						cout << "|3.Operator                                 |\n";
						gotoxy(60, 12);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 13);
						cout << "|4.Conditanal Statement                     |\n";
						gotoxy(60, 14);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 15);
						cout << "|5.Loop                                     |\n";
						gotoxy(60, 16);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 17);
						cout << "|6.Array                                    |\n";
						gotoxy(60, 18);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 19);
						cout << "|7.Pointer                                  |\n";
						gotoxy(60, 20);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 21);
						cout << "|8.Function                                 |\n";
						gotoxy(60, 22);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 23);
						cout << "|9.Math Function                            |\n";
						gotoxy(60, 24);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 25);
						cout << "|10.Recursion                               |\n";
						gotoxy(60, 26);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 27);
						cout << "|11.File                                    |\n";
						gotoxy(60, 28);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 29);
						cout << "|12.Structures                              |\n";
						gotoxy(60, 30);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 31);
						cout << "|13.Exit                                    |\n";
						gotoxy(60, 32);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 33);
						cout << "|14.Back                                    |\n";
						gotoxy(60, 34);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 35);
						cout << "|Enter The Your Choise                      |\n";
						gotoxy(60, 36);
						cout << "+-------------------------------------------+\n";
						string phar1 = "Select The Topic";
						string command1 = "espeak \"" + phar1 + "\"";
						const char *CharCommand1 = command1.c_str();
						system(CharCommand1);
						gotoxy(60, 37);
						cin >> ch;
						system("cls");
						switch (ch)
						{
						case 0:
							ci.getData();
							break;
						case 1:
							ci.getintrodata();
							break;
						case 2:
							ci.getvar_data();
							break;
						case 3:
							ci.getcoperator();
							break;
						case 4:
							ci.getstatement();
							break;
						case 5:
							ci.getloop();
							break;
						case 6:
							ci.getArray();
							break;
						case 7:
							ci.getpointer();
							break;
						case 8:
							ci.getFunction();
							break;
						case 9:
							ci.getMathFunction();
							break;
						case 10:
							ci.getRecursion();
							break;
						case 11:
							ci.getfile_c();
							break;
						case 12:
							ci.getStructures();
							break;
						case 13:
							exit(1);
							break;
						case 14:
							goto page6;
							break;
						default:
							cout << "Invalid..\a\n";
						}
						system("pause");
					}
					break;
				case 3:
					while (1)
					{
						system("cls");
						string phar = "WELCOME TO C plush plush TUTORIAl";
						string command = "espeak \"" + phar + "\"";
						const char *CharCommand = command.c_str();
						system(CharCommand);
						gotoxy(60, 0);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 1);
						cout << "|----------WELCOME TO C++ TUTORIAL----------|\n";
						gotoxy(60, 2);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 3);
						cout << "|                 0.Search                  |\n";
						gotoxy(60, 4);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 5);
						cout << "|               C++ Syllabus                |\n";
						gotoxy(60, 6);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 7);
						cout << "|1.Introduction                             |\n";
						gotoxy(60, 8);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 9);
						cout << "|2.Variable & Data Type                     |\n";
						gotoxy(60, 10);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 11);
						cout << "|3.Operator                                 |\n";
						gotoxy(60, 12);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 13);
						cout << "|4.Conditanal Statement                     |\n";
						gotoxy(60, 14);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 15);
						cout << "|5.Loop                                     |\n";
						gotoxy(60, 16);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 17);
						cout << "|6.String                                   |\n";
						gotoxy(60, 18);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 19);
						cout << "|7.Array                                    |\n";
						gotoxy(60, 20);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 21);
						cout << "|8.Pointer                                  |\n";
						gotoxy(60, 22);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 23);
						cout << "|9.Function                                 |\n";
						gotoxy(60, 24);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 25);
						cout << "|10.Math Function                           |\n";
						gotoxy(60, 26);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 27);
						cout << "|11.Recursion                               |\n";
						gotoxy(60, 28);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 29);
						cout << "|12.Structures                              |\n";
						gotoxy(60, 30);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 31);
						cout << "|13.Object Class                            |\n";
						gotoxy(60, 32);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 33);
						cout << "|14.Encapsulation                           |\n";
						gotoxy(60, 34);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 35);
						cout << "|15.Inheritance                             |\n";
						gotoxy(60, 36);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 37);
						cout << "|16.Polymorphism                            |\n";
						gotoxy(60, 38);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 39);
						cout << "|17.Abstraction                             |\n";
						gotoxy(60, 40);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 41);
						cout << "|18.Exceptions                              |\n";
						gotoxy(60, 42);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 43);
						cout << "|19.File and Stream                         |\n";
						gotoxy(60, 44);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 45);
						cout << "|20.Exit                                    |\n";
						gotoxy(60, 46);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 47);
						cout << "|21.Back                                    |\n";
						gotoxy(60, 48);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 49);
						cout << "|Enter The Your Choise                      |\n";
						gotoxy(60, 50);
						cout << "+-------------------------------------------+\n";
						string phar1 = "Select the Topic";
						string command1 = "espeak \"" + phar1 + "\"";
						const char *CharCommand1 = command1.c_str();
						system(CharCommand1);
						gotoxy(60, 51);
						cin >> ch;
						system("cls");
						switch (ch)
						{
						case 0:
							cplush.getData();
							break;
						case 1:
							cplush.getintrodata();
							break;
						case 2:
							cplush.getvar_data();
							break;
						case 3:
							cplush.getcoperator();
							break;
						case 4:
							cplush.getstatement();
							break;
						case 5:
							cplush.getloop();
							break;
						case 6:
							break;
						case 7:
							cplush.getArray();
							break;
						case 8:
							cplush.getpointer();
							break;
						case 9:
							cplush.getFunction();
							break;
						case 10:
							cplush.getMathFunction();
							break;
						case 11:
							cplush.getRecursion();
							break;
						case 12:
							cplush.getStructures();
							break;
						case 13:
							cplush.getObjecclass();
							break;
						case 14:
							cplush.getEncapsulation();
							break;
						case 15:
							cplush.getinheritance();
							break;
						case 16:
							cplush.getpolymorphism();
							break;
						case 17:
							cplush.getAbstraction();
							break;
						case 18:
							cplush.getException();
							break;
						case 19:
							cplush.getfile_c();
							break;
						case 20:
							exit(0);
							break;
						case 21:
							goto page6;
							break;
						default:
							cout << "Invalid...\a\n";
						}
						system("pause");
					}
					break;
				case 4:
					while (1)
					{
						system("cls");
						string phar = "WELCOME TO JAVA TUTORIAl";
						string command = "espeak \"" + phar + "\"";
						const char *CharCommand = command.c_str();
						system(CharCommand);
						gotoxy(60, 0);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 1);
						cout << "|----------WELCOME TO JAVA TUTORIAL---------|\n";
						gotoxy(60, 2);
						cout << "+-------------------------------------------+\n";
						gotoxy(60, 3);
						cout << "|                 1.Search                  |\n";
						gotoxy(60, 4);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 5);
						cout << "|                Java Syllabus              |\n";
						gotoxy(60, 6);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 7);
						cout << "|2.Basic of Java                            |\n";
						gotoxy(60, 8);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 9);
						cout << "|3.Data Type                                |\n";
						gotoxy(60, 10);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 11);
						cout << "|4.Variable,Consttrains and Literals        |\n";
						gotoxy(60, 12);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 13);
						cout << "|5.Operator                                 |\n";
						gotoxy(60, 14);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 15);
						cout << "|6.Conditanal Statement                     |\n";
						gotoxy(60, 16);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 17);
						cout << "|7.Loop                                     |\n";
						gotoxy(60, 18);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 19);
						cout << "|8.String                                   |\n";
						gotoxy(60, 20);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 21);
						cout << "|9.Array                                    |\n";
						gotoxy(60, 22);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 23);
						cout << "|10.Math Function                            |\n";
						gotoxy(60, 24);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 25);
						cout << "|11.Class and Object                        |\n";
						gotoxy(60, 26);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 27);
						cout << "|12.Methods                                 |\n";
						gotoxy(60, 28);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 29);
						cout << "|13.Constructor                             |\n";
						gotoxy(60, 30);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 31);
						cout << "|14.Modifiers                               |\n";
						gotoxy(60, 32);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 33);
						cout << "|15.Static Keyword                          |\n";
						gotoxy(60, 34);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 35);
						cout << "|16.Final Keyword                           |\n";
						gotoxy(60, 36);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 37);
						cout << "|17.Inner Class                             |\n";
						gotoxy(60, 38);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 39);
						cout << "|18.Super and this keyword                  |\n";
						gotoxy(60, 40);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 41);
						cout << "|19.Encapsulation                           |\n";
						gotoxy(60, 42);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 43);
						cout << "|20.Inheritance                             |\n";
						gotoxy(60, 44);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 45);
						cout << "|21.Polymorphi                              |\n";
						gotoxy(60, 46);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 47);
						cout << "|22.Abstraction                             |\n";
						gotoxy(60, 48);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 49);
						cout << "|23.Exit                                    |\n";
						gotoxy(60, 50);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 51);
						cout << "|24.Back                                    |\n";
						gotoxy(60, 52);
						cout << "|-------------------------------------------|\n";
						gotoxy(60, 53);
						cout << "|            Select The Option              |\n";
						gotoxy(60, 54);
						cout << "+-------------------------------------------+\n";
						string phar1 = "Select The Option";
						string command1 = "espeak \"" + phar1 + "\"";
						const char *CharCommand1 = command1.c_str();
						system(CharCommand1);
						gotoxy(60, 55);
						cin>>ch;
						switch(ch){
							case 1:
								j.getData();
								break;
							case 2:
								j.getintrodata();
								break;
							case 3:
								j.getdata();
								break;
							case 4:
								j.getvar_data();
								break;
							case 5:
								j.getcoperator();
								break;
							case 6:
								j.getstatement();
								break;
							case 7:
								j.getloop();
								break;
							case 8:
								j.getString();
								break;
							case 9:
								j.getArray();
								break;
							case 10:
								j.getMathFunction();
								break;
							case 11:
								j.getObjecclass();
								break;
							case 12:
								
								break;
							case 13:
								
								break;
							case 14:
								
								break;
							case 16:
								
								break;
							case 17:
								
								break;
							case 18:
								
								break;
							case 19:
								
								break;
							case 20:
								
								break;
							case 21:
								
								break;
							case 22:
								
								break;
							case 23:
								
								break;
							case 24:
								goto page6;
								break;
							default:
								cout << "Invalid...\a\n";
						}
						system("pause");
					}
					break;
				case 5:
					exit(0);
				case 6:
					goto page1;
					break;
				default:
					cout << "Invalid\a\n";
				}
				system("pause");
			}
		}
	}
	return 0;
}
