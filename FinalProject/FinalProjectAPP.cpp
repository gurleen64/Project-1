#include"FinalProject.h"
#include<iostream>
#include<iomanip>
int choice = 0;
int option2 = 0;
int option5 = 0;
char ans = 'Y';
char ans1 = 'Y';
int username2 = 0;
string password2 = "";
int choice3 = 0;
string username1 = "";
short option6=0;
short option7 = 0;
short option8 = 0;
short option9 = 0;
short option10 = 0;
short option11 = 0;
void searchID1();
void searchID2();
void searchID3();
void searchfname1();
void searchfname2();
void searchfname3();
void searchlname1();
void searchlname2();
void searchlname3();
short option1 = 0;
void searchflname1();
void searchflname2();
void searchflname3();
void sort1();
void sort2();
void sort3();
void display1();
void display2();
void display3();
void grades1();
void grades2();
void grades3();
void projectdisplaygrade1();
void projectdisplaygrade2();
void projectdisplaygrade3();
void midtermdisplaygrade1();
void midtermdisplaygrade2();
void midtermdisplaygrade3();
void finaldisplaygrade1();
void finaldisplaygrade2();
void finaldisplaygrade3();
void studentusername1();
void studentusername2();
void studentusername3();
group7052 data1[SIZE] = {};
group7064 data2[SIZE] = {};
group7154 data3[SIZE] = {};
Login1 myLog1;
Login2 myLog2;
Login3 myLog3;

void main()
{
	cout << setw(75) << "Application for Teachers and Students" << endl;
	cout << setw(75) << "=====================================" << endl << endl;
	cout << "\n\t\t->Student and Teacher should login with valid username and password";
	cout << "\n\n\t\t->Teacher can enter Student information such as ID, name, grades, and set password for student login.";
	cout << "\n\n\t\t->Student can check their grades by logging in";
	cout << "\n\n\t\tPress any key to continue to application....";
	system("pause>>null");
	system("cls");
	do
	{

		cout << "\n\n\t Press 1 for teacher ";
		cout << "\n\t Press 2 for Student";
		cout << "\n\n\tEnter your choice = ";
		cin >> choice;
		cin.ignore();
		system("cls");

		switch (choice)
		{
		case 1:
			teacherusername();
			system("cls");

			do
			{
				short option = teacherMenu();
				system("cls");
				switch (option)
				{
				case 1:
					data();

					system("pause");
					system("cls");
					ans = 'N';
					break;

				case 2:
					option2 = Groupmenu();
					system("cls");
					switch (option2)
					{
					case 1:
						for (short i = 0; i < SIZE; i++)
						{
							data1[i].StudentID = IDvalidation();
							data1[i].firstname = firstnamevalidation();
							data1[i].lastname = lastnamevalidation();
							data1[i].project = projectgrade();
							data1[i].midterm = midtermgrade();
							data1[i].finalexam = finalgrade();
							data1[i].password = password();
						}
						system("cls");
						ans = 'N';
						break;

					case 2:

						for (short i = 0; i < SIZE; i++)
						{
							data2[i].StudentID = IDvalidation();
							data2[i].firstname = firstnamevalidation();
							data2[i].lastname = lastnamevalidation();
							data2[i].project = projectgrade();
							data2[i].midterm = midtermgrade();
							data2[i].finalexam = finalgrade();
							data2[i].password = password();

						}
						system("cls");
						ans = 'N';
						break;


					case 3:

						for (short i = 0; i < SIZE; i++)
						{
							data3[i].StudentID = IDvalidation();
							data3[i].firstname = firstnamevalidation();
							data3[i].lastname = lastnamevalidation();
							data3[i].project = projectgrade();
							data3[i].midterm = midtermgrade();
							data3[i].finalexam = finalgrade();
							data3[i].password = password();

						}
						system("cls");
						ans = 'N';
						break;

					default:
						cout << "\n\n\tInvalid choice! Please enter numbers b/w 1,2 or 3";
						break;
					}
					break;

				case 3:
					option1 = searchMenu();
					system("cls");
					switch (option1)
					{
					case 1:
						option5 = Groupmenu();
						system("cls");
						switch (option5)
						{
						case 1:
							searchID1();
							system("cls");
							break;
						case 2:
							searchID2();
							system("cls");
							break;
						case 3:
							searchID3();
							system("cls");
							break;

						default:
							cout << "\n\n\tInvalid Choice!";
							break;							
						}		
						break;

					case 2:
						option6 = Groupmenu();
						system("cls");
						switch (option6)
						{
						case 1:
							searchfname1();
							system("cls");
							break;
						case 2:
							searchfname2();
							system("cls");
							break;

						case 3:
							searchfname3();
							system("cls");
							break;

						default:
							cout << "\n\n\tInvalid Choice!";
							break;


						}
						break;

					case 3:
						option7 = Groupmenu();
						system("cls");
						switch (option7)
						{
						case 1:
							searchlname1();
							system("cls");
							break;

						case 2:
							searchlname2();
							system("cls");
							break;

						case 3:
							searchlname3();
							system("cls");
							break;

						default:
							cout << "\n\n\tInvalid choice!";
							break;								
						}
						break;

					case 4:
						option8 = Groupmenu();
						system("cls");
						switch (option8)
						{
						case 1:
							searchflname1();
							system("cls");
							break;

						case 2:
							searchflname2();
							system("cls");
							break;

						case 3:
							searchflname3();
							system("cls");
							break;

						default:

							cout << "\n\n\tInvalid choice!";
							break;
						}

						break;

					default:
						cout << "\n\n\tInvalid choice ! Please enter a number b/w 1-4....";
					}

					break;

				case 4:
					option9 = Groupmenu();
					system("cls");
					switch (option9)
					{
					case 1:
						sort1();
						break;

					case 2:
						sort2();
						break;

					case 3:
						sort3();
						break;

					default:

						cout << "\n\n\tInvalid choice!";
						break;

					}
					break;

				case 5:
					option10 = Groupmenu();
					system("cls");
					switch (option10)
					{
					case 1:
						display1();
						break;

					case 2:
						display2();
						break;

					case 3:
						display3();
						break;

					default:
						cout << "\n\n\tInvalid choice!";
						break;
					}
					break;

				case 6:
					cout << "\n\n\tDo yo really want to exit application? (Y/N)";
					cin >> ans;

					break;
				default:
					cout << "\n\n\tEnter a valid choice ! Please enter number b/w 1-6....";
					ans = 'N';
					break;

				}
			} while ((ans == 'N') || (ans == 'n'));
			cout << "\n\n\tPress any key to go to student login.....";
			system("pause>>null");

		case 2:

			system("cls");
			option11 = Groupmenu();
			system("cls");
			switch (option11)
			{
			case 1:
				studentusername1();
				system("pause");
				//system("cls");

				do
				{
					short option3 = studentMenu();
					system("cls");
					switch (option3)
					{
					case 1:
						cout << "\n\n\t\t\t1.Applied Mathematics ";
						cout << "\n\n\t\t\t2.English";
						cout << "\n\n\t\t\t3.Data Processing ";
						cout << "\n\n\t\t\t4.Structured Programming "<<endl<<endl;
						system("pause");
						system("cls");
						ans1 = 'N';
						break;

					case 2:
						cout << "\n\t1.Project Grade.";
						cout << "\n\t2.Midterm Grade.";
						cout << "\n\t3.FinalExam Grade.";
						cout << "\n\n\tEnter your choice = ";
						int search8;
						cin >> search8;
						switch (search8)
						{
						case 1:
							projectdisplaygrade1();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						case 2:
							midtermdisplaygrade1();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						case 3:
							finaldisplaygrade1();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						default:

							cout << "\n\n\tInvalid Choice !. Please enter numbers 1,2 or 3....";
							ans1 = 'N';
							break;
						}
						break;

					case 3:
						grades1();
						system("pause");
						system("cls");
						ans1 = 'N';
						break;

					case 4:
						cout << "\n\tDo you really want to exit application ? (Y/N).";
						cin >> ans1;
						break;

					default:
						cout << "\n\n\tInvalid Choice !. Please enter number b/w 1-4....";
						break;
					}

				} while ((ans1 == 'N') || (ans1 == 'n'));

				break;

			case 2:

				studentusername2();
				system("pause");
				//system("cls");

				do
				{
					short option3 = studentMenu();
					system("cls");
					switch (option3)
					{
					case 1:
						cout << "\n\n\t\t\t1.English ";
						cout << "\n\n\t\t\t2.Applied Mathematics ";
						cout << "\n\n\t\t\t3.Data Processing ";
						cout << "\n\n\t\t\t4.Structured Programming " << endl << endl;
						system("pause");
						system("cls");
						ans1 = 'N';
						break;

					case 2:
						cout << "\n\t1.Project Grade.";
						cout << "\n\t2.Midterm Grade.";
						cout << "\n\t3.FinalExam Grade.";
						cout << "\n\n\tEnter your choice = ";
						int search8;
						cin >> search8;
						switch (search8)
						{
						case 1:
							projectdisplaygrade2();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						case 2:
							midtermdisplaygrade2();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						case 3:
							finaldisplaygrade2();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						default:

							cout << "\n\n\tInvalid Choice !. Please enter numbers 1,2 or 3....";
							ans1 = 'N';
							break;
						}
						break;

					case 3:
						grades2();
						system("pause");
						system("cls");
						ans1 = 'N';
						break;

					case 4:
						cout << "\n\tDo you really want to exit application ? (Y/N).";
						cin >> ans1;
						break;

					default:
						cout << "\n\n\tInvalid Choice !. Please enter number b/w 1-4....";
						break;
					}

				} while ((ans1 == 'N') || (ans1 == 'n'));

				break;

			case 3:
				studentusername3();
				system("pause");
				//system("cls");

				do
				{
					short option3 = studentMenu();
					system("cls");
					switch (option3)
					{
					case 1:
						cout << "\n\n\t\t\t1.English ";
						cout << "\n\n\t\t\t2.Applied Mathematics ";
						cout << "\n\n\t\t\t3.Data Processing ";
						cout << "\n\n\t\t\t4.Internet Programming II" << endl << endl;
						system("pause");
						system("cls");
						ans1 = 'N';
						break;

					case 2:
						cout << "\n\t1.Project Grade.";
						cout << "\n\t2.Midterm Grade.";
						cout << "\n\t3.FinalExam Grade.";
						cout << "\n\n\tEnter your choice = ";
						int search8;
						cin >> search8;
						switch (search8)
						{
						case 1:
							projectdisplaygrade3();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						case 2:
							midtermdisplaygrade3();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						case 3:
							finaldisplaygrade3();
							system("pause");
							system("cls");
							ans1 = 'N';
							break;

						default:

							cout << "\n\n\tInvalid Choice !. Please enter numbers 1,2 or 3....";
							ans1 = 'N';
							break;
						}
						break;

					case 3:
						grades3();
						system("pause");
						system("cls");
						ans1 = 'N';
						break;

					case 4:
						cout << "\n\tDo you really want to exit application ? (Y/N).";
						cin >> ans1;
						break;

					default:
						cout << "\n\n\tInvalid Choice !. Please enter number b/w 1-4....";
						break;
					}

				} while ((ans1 == 'N') || (ans1 == 'n'));

				break;

			default:
				cout << "\n\n\tInvalid Choice!";
				break;

			}
			break;			

		default:
			cout << "\n\n\tInvalid choice ! Please enter number 1 or 2...";
			break;
		}
	} while (true);

	cout << "\n\n\tPress any key to exit application ....";
	system("pause>>null");

}
















void searchID1()
{
	bool id = false;

	cout << "\n\n\tEnter Student ID to search = ";
	string search = "";
	getline(cin, search);
	for (short i = 0; i < SIZE; i++)
	{
		if (search == data1[i].StudentID)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7052" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data1[i].StudentID << setw(9) << data1[i].firstname << " , " << data1[i].lastname << setw(13) << data1[i].project << setw(11) << data1[i].midterm << setw(13) << data1[i].finalexam << setw(16) << round((data1[i].project + data1[i].midterm + data1[i].finalexam) / 3) << endl;
			system("pause");
			id = true;
			break;
		}
	}

	if (!id)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}

}

void searchID2()
{
	bool id1 = false;
	cout << "\n\n\tEnter Student ID to search = ";
	string search = "";
	getline(cin, search);
	for (short i = 0; i < SIZE; i++)
	{
		if (search == data2[i].StudentID)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7154" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data2[i].StudentID << setw(9) << data2[i].firstname << " , " << data2[i].lastname << setw(13) << data2[i].project << setw(11) << data2[i].midterm << setw(13) << data2[i].finalexam << setw(16) << round((data2[i].project + data2[i].midterm + data2[i].finalexam) / 3) << endl;
			system("pause");
			id1 = true;
			break;
		}
	}

	if (!id1)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}

}

void searchID3()
{
	bool id2 = false;

	cout << "\n\n\tEnter Student ID to search = ";
	string search = "";
	getline(cin, search);
	for (short i = 0; i < SIZE; i++)
	{
		if (search == data3[i].StudentID)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7064" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data3[i].StudentID << setw(9) << data3[i].firstname << " , " << data3[i].lastname << setw(13) << data3[i].project << setw(11) << data3[i].midterm << setw(13) << data3[i].finalexam << setw(16) << round((data3[i].project + data3[i].midterm + data3[i].finalexam) / 3) << endl;
			system("pause");
			id2 = true;
			break;
		}
	}

	if (!id2)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}


}
void searchfname1()
{
	bool fname = true;
	cout << "\n\n\tEnter First Name to search = ";
	string search1 = "";
	getline(cin, search1);
	for (short i = 0; i < SIZE; i++)
	{
		if (search1 == data1[i].firstname)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7052" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data1[i].StudentID << setw(9) << data1[i].firstname << " , " << data1[i].lastname << setw(13) << data1[i].project << setw(11) << data1[i].midterm << setw(13) << data1[i].finalexam << setw(16) << round((data1[i].project + data1[i].midterm + data1[i].finalexam) / 3) << endl;
			system("pause");
			system("cls");
			fname = true;
			break;
		}
	}

	if (!fname)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}

}

void searchfname2()
{
	bool fname1 = true;
	cout << "\n\n\tEnter First Name to search = ";
	string search1 = "";
	getline(cin, search1);
	for (short i = 0; i < SIZE; i++)
	{
		if (search1 == data2[i].firstname)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7154" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data2[i].StudentID << setw(9) << data2[i].firstname << " , " << data2[i].lastname << setw(13) << data2[i].project << setw(11) << data2[i].midterm << setw(13) << data2[i].finalexam << setw(16) << round((data2[i].project + data2[i].midterm + data2[i].finalexam) / 3) << endl;
			system("pause");
			system("cls");
			fname1 = true;
			break;
		}
	}

	if (!fname1)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}

}

void searchfname3()
{
	bool fname2 = true;
	cout << "\n\n\tEnter First Name to search = ";
	string search1 = "";
	getline(cin, search1);
	for (short i = 0; i < SIZE; i++)
	{
		if (search1 == data3[i].firstname)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7064" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data3[i].StudentID << setw(9) << data3[i].firstname << " , " << data3[i].lastname << setw(13) << data3[i].project << setw(11) << data3[i].midterm << setw(13) << data3[i].finalexam << setw(16) << round((data3[i].project + data3[i].midterm + data3[i].finalexam) / 3) << endl;

			system("pause");
			system("cls");
			fname2 = true;
			break;
		}
	}

	if (!fname2)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}
}

void searchlname1()
{
	bool lname = true;

	cout << "\n\n\tEnter Last Name to search = ";
	string search2 = "";
	getline(cin, search2);
	for (short i = 0; i < SIZE; i++)
	{
		if (search2 == data1[i].lastname)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7052" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data1[i].StudentID << setw(9) << data1[i].firstname << " , " << data1[i].lastname << setw(13) << data1[i].project << setw(11) << data1[i].midterm << setw(13) << data1[i].finalexam << setw(16) << round((data1[i].project + data1[i].midterm + data1[i].finalexam) / 3) << endl;
			system("pause");
			system("cls");
			lname = true;
			break;
		}
	}

	if (!lname)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}

}

void searchlname2()
{
	bool lname1 = true;

	cout << "\n\n\tEnter Last Name to search = ";
	string search2 = "";
	getline(cin, search2);
	for (short i = 0; i < SIZE; i++)
	{
		if (search2 == data2[i].lastname)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7154" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data2[i].StudentID << setw(9) << data2[i].firstname << " , " << data2[i].lastname << setw(13) << data2[i].project << setw(11) << data2[i].midterm << setw(13) << data2[i].finalexam << setw(16) << round((data2[i].project + data2[i].midterm + data2[i].finalexam) / 3) << endl;
			system("pause");
			system("cls");
			lname1 = true;
			break;
		}
	}
	if (!lname1)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}
}

void searchlname3()
{
	bool lname2 = true;

	cout << "\n\n\tEnter Last Name to search = ";
	string search2 = "";
	getline(cin, search2);
	for (short i = 0; i < SIZE; i++)
	{
		if (search2 == data3[i].lastname)
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7064" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data3[i].StudentID << setw(9) << data3[i].firstname << " , " << data3[i].lastname << setw(13) << data3[i].project << setw(11) << data3[i].midterm << setw(13) << data3[i].finalexam << setw(16) << round((data3[i].project + data3[i].midterm + data3[i].finalexam) / 3) << endl;

			system("pause");
			system("cls");
			lname2 = true;
			break;
		}
	}

	if (!lname2)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}
}

void searchflname1()
{
	bool flname = true;

	cout << "\n\n\tEnter First Name to search = ";
	string search4 = "";
	getline(cin, search4);
	cout << "\n\n\tEnter Last Name to search = ";
	string search5 = "";
	getline(cin, search5);
	for (short i = 0; i < SIZE; i++)
	{
		if ((search4 == data1[i].firstname) && (search5 == data1[i].lastname))
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7051" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data1[i].StudentID << setw(9) << data1[i].firstname << " , " << data1[i].lastname << setw(13) << data1[i].project << setw(11) << data1[i].midterm << setw(13) << data1[i].finalexam << setw(16) << round((data1[i].project + data1[i].midterm + data1[i].finalexam) / 3) << endl;
			system("pause");
			system("cls");
			flname = true;
			break;
		}
	}

	if (!flname)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}

}

void searchflname2()
{
	bool flname1 = true;

	cout << "\n\n\tEnter First Name to search = ";
	string search4 = "";
	getline(cin, search4);
	cout << "\n\n\tEnter Last Name to search = ";
	string search5 = "";
	getline(cin, search5);
	for (short i = 0; i < SIZE; i++)
	{
		if ((search4 == data2[i].firstname) && (search5 == data2[i].lastname))
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7154" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data2[i].StudentID << setw(9) << data2[i].firstname << " , " << data2[i].lastname << setw(13) << data2[i].project << setw(11) << data2[i].midterm << setw(13) << data2[i].finalexam << setw(16) << round((data2[i].project + data2[i].midterm + data2[i].finalexam) / 3) << endl;
			system("pause");
			system("cls");
			flname1 = true;
			break;
		}
	}

	if (!flname1)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}

}

void searchflname3()
{
	bool flname2 = true;

	cout << "\n\n\tEnter First Name to search = ";
	string search4 = "";
	getline(cin, search4);
	cout << "\n\n\tEnter Last Name to search = ";
	string search5 = "";
	getline(cin, search5);
	for (short i = 0; i < SIZE; i++)
	{
		if ((search4 == data3[i].firstname) && (search5 == data3[i].lastname))
		{
			system("cls");
			cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
			cout << setw(75) << "Course Title : Structured Programming" << endl;
			cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
			cout << setw(62) << "Group : 7064" << endl << endl;
			cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
			cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
			cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
			cout << setw(11) << data3[i].StudentID << setw(9) << data3[i].firstname << " , " << data3[i].lastname << setw(13) << data3[i].project << setw(11) << data3[i].midterm << setw(13) << data3[i].finalexam << setw(16) << round((data3[i].project + data3[i].midterm + data3[i].finalexam) / 3) << endl;

			system("pause");
			system("cls");
			flname2 = true;
			break;
		}
	}

	if (!flname2)
	{
		cout << "\n\n\tStudent ID not found!. " << endl;
		cout << "\n\n\tPress any key to go to Main Menu !....." << endl;
		system("pause>>null");
	}


}

void sort1()
{
	cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
	cout << setw(75) << "Course Title : Structured Programming" << endl;
	cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
	cout << setw(62) << "Group : 7052" << endl << endl;
	cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
	for (short i = 0; i < SIZE - 1; i++)
	{
		for (short j = i + 1; j < SIZE; j++)
		{
			if (data1[i].StudentID > data1[j].StudentID)
			{
				string tempID = data1[i].StudentID;
				data1[i].StudentID = data1[j].StudentID;
				data1[j].StudentID = tempID;
			}
		}
	}
	for (short i = 0; i < SIZE; i++)
	{
		cout << setw(25) << "Student ID = [" << i << "] = " << data1[i].StudentID<< endl;
		cout << setw(25) << "First Name [" << i << "] = " << data1[i].firstname << endl;
		cout << setw(25) << "Last Name [" << i << "] = " << data1[i].lastname<< endl << endl;
	}
	system("pause");
	system("cls");

}

void sort2()
{
	cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
	cout << setw(75) << "Course Title : Structured Programming" << endl;
	cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
	cout << setw(62) << "Group : 7154" << endl << endl;
	cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
	for (short i = 0; i < SIZE - 1; i++)
	{
		for (short j = i + 1; j < SIZE; j++)
		{
			if (data2[i].StudentID > data2[j].StudentID)
			{
				string tempID1 = data2[i].StudentID;
				data2[i].StudentID = data2[j].StudentID;
				data2[j].StudentID = tempID1;
			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(25) << "Student ID = [" << i << "] = " << data2[i].StudentID << endl;
		cout << setw(25) << "First Name [" << i << "] = " << data2[i].firstname << endl;
		cout << setw(25) << "Last Name [" << i << "] = " << data2[i].lastname << endl << endl;
	}
	system("pause");
	system("cls");
}

void sort3()
{
	cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
	cout << setw(75) << "Course Title : Structured Programming" << endl;
	cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
	cout << setw(62) << "Group : 7064" << endl << endl;
	cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
	for (short i = 0; i < SIZE - 1; i++)
	{
		for (short j = i + 1; j < SIZE; j++)
		{
			if (data3[i].StudentID > data3[j].StudentID)
			{
				string tempID = data3[i].StudentID;
				data3[i].StudentID = data3[j].StudentID;
				data3[j].StudentID = tempID;
			}
		}
	}
	for (short i = 0; i < SIZE; i++)
	{
		cout << setw(25) << "Student ID = [" << i << "] = " << data3[i].StudentID << endl;
		cout << setw(25) << "First Name [" << i << "] = " << data3[i].firstname << endl;
		cout << setw(25) << "Last Name [" << i << "] = " << data3[i].lastname << endl << endl;
	}

	system("pause");
	system("cls");

}

void display1()
{
	system("cls");
	cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
	cout << setw(75) << "Course Title : Structured Programming" << endl;
	cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
	cout << setw(62) << "Group : 7154" << endl << endl;
	cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
	cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
	cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
	for (short i = 0; i < SIZE; i++)
	{		
		cout << setw(12) << data1[i].StudentID << setw(12) << data1[i].firstname << " , " << data1[i].lastname << setw(12) << data1[i].project << setw(9) << data1[i].midterm << setw(10) << data1[i].finalexam << setw(15) << (data1[i].project + data1[i].midterm + data1[i].finalexam) / 3 << endl << endl;

	}
	system("pause");
	system("cls");

}
void display2()
{
	system("cls");
	cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
	cout << setw(75) << "Course Title : Structured Programming" << endl;
	cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
	cout << setw(62) << "Group : 7154" << endl << endl;
	cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
	cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
	cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
	for (short i = 0; i < SIZE; i++)
	{
		cout << setw(12) << data2[i].StudentID << setw(12) << data2[i].firstname << " , " << data2[i].lastname << setw(12) << data2[i].project << setw(9) << data2[i].midterm << setw(10) << data2[i].finalexam << setw(15) << (data2[i].project + data2[i].midterm + data2[i].finalexam) / 3 << endl << endl;

	}
	system("pause");
	system("cls");


}

void display3()
{
	system("cls");
	cout << setw(72) << " Course Number : 420 - P16 - AS" << endl;
	cout << setw(75) << "Course Title : Structured Programming" << endl;
	cout << setw(70) << "Teacher : Quang Hoang Cao" << endl;
	cout << setw(62) << "Group : 7154" << endl << endl;
	cout << setw(65) << "ASSESSMENT SUMMARY" << endl << endl;
	cout << setw(12) << "Student ID" << setw(16) << "Student Name" << setw(13) << "Project" << setw(10) << "Midterm" << setw(13) << "Final Exam" << setw(16) << "Final Result" << endl;
	cout << setw(12) << "==========" << setw(16) << "============" << setw(13) << "=======" << setw(10) << "=======" << setw(13) << "==========" << setw(16) << "============" << endl;
	for (short i = 0; i < SIZE; i++)
	{
		cout << setw(12) << data3[i].StudentID << setw(12) << data3[i].firstname << " , " << data3[i].lastname << setw(12) << data3[i].project << setw(9) << data3[i].midterm << setw(10) << data3[i].finalexam << setw(15) << (data3[i].project + data3[i].midterm + data3[i].finalexam) / 3 << endl << endl;

	}
	system("pause");
	system("cls");

}
void grades1()
{
	
		cout << "\n\n\tGrade for project = " << myLog1.project;
		cout << "\n\n\tGrade for midterm = " << myLog1.midterm;
		cout << "\n\n\tGrade for FinalExam = " << myLog1.finalexam<< endl << endl;
	
}
void grades2()
{
	
		cout << "\n\n\tGrade for project = " << myLog2.project;
		cout << "\n\n\tGrade for midterm = " << myLog2.midterm;
		cout << "\n\n\tGrade for FinalExam = " << myLog2.finalexam << endl << endl;
	
}
void grades3()
{
	
		cout << "\n\n\tGrade for project = " << myLog3.project;
		cout << "\n\n\tGrade for midterm = " << myLog3.midterm;
		cout << "\n\n\tGrade for FinalExam = " << myLog3.finalexam << endl << endl;
	
}


void studentusername1()
{
	bool valid7 = true;
	string username1 = "";
	string password1 = "";

	do
	{
		cout << "\n\n\tUsername : ";
		getline(cin, username1);
		cout << "\n\tPassword : ";
		getline(cin, password1);
		for (short i = 0; i < SIZE; i++)
		{
			if ((username1 == data1[i].StudentID) && (password1 == data1[i].password))
			{
				myLog1.project = data1[i].project;
				myLog1.midterm = data1[i].midterm;
				myLog1.finalexam = data1[i].finalexam;
				valid7 = true;
				break;
			}

		}

		if (!valid7)
		{
			valid7 = false;
			cout << "\n\n\tInvalid Username or Password !. Please enter again....";
		}
	} while (!valid7);

}
void studentusername2()
{
	bool valid7 = true;
	string username1 = "";
	string password1 = "";

	do
	{
		cout << "\n\n\tUsername : ";
		getline(cin, username1);
		cout << "\n\tPassword : ";
		getline(cin, password1);
		for (short i = 0; i < SIZE; i++)
		{
			if ((username1 == data2[i].StudentID) && (password1 == data2[i].password))
			{
				myLog2.project = data2[i].project;
				myLog2.midterm = data2[i].midterm;
				myLog2.finalexam = data2[i].finalexam;
				valid7 = true;
				break;
			}

		}

		if (!valid7)
		{
			valid7 = false;
			cout << "\n\n\tInvalid Username or Password !. Please enter again....";
		}
	} while (!valid7);

}
void studentusername3()
{
	bool valid7 = true;
	string username1 = "";
	string password1 = "";

	do
	{
		cout << "\n\n\tUsername : ";
		getline(cin, username1);
		cout << "\n\tPassword : ";
		getline(cin, password1);
		for (short i = 0; i < SIZE; i++)
		{
			if ((username1 == data3[i].StudentID) && (password1 == data3[i].password))
			{
				myLog3.project = data3[i].project;
				myLog3.midterm = data3[i].midterm;
				myLog3.finalexam = data3[i].finalexam;
				valid7 = true;
				break;
			}

		}

		if (!valid7)
		{
			valid7 = false;
			cout << "\n\n\tInvalid Username or Password !. Please enter again....";
		}
	} while (!valid7);

}

void projectdisplaygrade1()
{
	cout << "\n\n\tMarks = " << myLog1.project << endl << endl;
}

void midtermdisplaygrade1()
{
	cout << "\n\n\tMarks = " << myLog1.midterm << endl << endl;
}

void finaldisplaygrade1()
{
	cout << "\n\n\tMarks = " << myLog1.finalexam << endl << endl;

}
void projectdisplaygrade2()
{
	cout << "\n\n\tMarks = " << myLog2.project << endl << endl;
}

void midtermdisplaygrade2()
{
	cout << "\n\n\tMarks = " << myLog2.midterm << endl << endl;
}

void finaldisplaygrade2()
{
	cout << "\n\n\tMarks = " << myLog2.finalexam << endl << endl;

}
void projectdisplaygrade3()
{
	cout << "\n\n\tMarks = " << myLog3.project << endl << endl;
}

void midtermdisplaygrade3()
{
	cout << "\n\n\tMarks = " << myLog3.midterm << endl << endl;
}

void finaldisplaygrade3()
{
	cout << "\n\n\tMarks = " << myLog3.finalexam << endl << endl;

}






