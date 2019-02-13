#include"FinalProject.h"

string IDvalidation() // would use this function for entry ID and verify.. once it is ok, return the value
{
	
		bool valid = true;
		string tempID = "";

		do
		{
			cout << "\n\n\tStudent ID = ";
			getline(cin, tempID);
			valid = true;
			if (tempID.length() == 7)
			{
				for (short i = 0; i < tempID.length(); i++)
				{
					if (!isdigit(tempID[i]))
					{
						valid = false;
						cout << "\n\tInvalid Student ID !. Please enter again...";
						break;
					}
				}
			}
			else
			{
				valid = false;
				cout << "\n\tInvalid Student ID !";

			}
		} while (!valid);
		
		return tempID;
	
}


string firstnamevalidation()
{
	string tempfname = "";
	bool found = true;

	do
	{
		cout << "\n\tFirst name = ";
		getline(cin, tempfname);
		found = true;
		for (short i = 0; i < tempfname.length(); i++)
		{
			if (!isalpha(tempfname[i]) && (tempfname[i] != ' '))
			{
				found = false;
				cout << "\n\tInvalid first name !.Please enter again...";
				break;
			}
			else
			{
				found = true;

			}
		}

	} while (!found);

	return tempfname;
}

string lastnamevalidation()
{
	string templname = "";
	bool found1 = true;

	do
	{
		cout << "\n\tLast name = ";
		getline(cin, templname);
		found1 = true;
		for (short i = 0; i < templname.length(); i++)
		{
			if (!isalpha(templname[i]) && (templname[i] != ' '))
			{
				found1 = false;
				cout << "\n\tInvalid Last name !.Please enter again...";
				break;
			}
			else
			{
				found1 = true;

			}
		}

	} while (!found1);

	return templname;
}

float projectgrade()
{
	bool found2 = true;
	float projectgrade = 0.00f;
	do
	{
		cout << "\n\tEnter Project grade = ";
		cin >> projectgrade;
		if (projectgrade<=100)
		{
			found2 = true;
		}
		else
		{
			found2 = false;
			cout << "\n\tInvalid grade!";
			break;
		}
	} while (!found2);

	return projectgrade;

}

float midtermgrade()
{
	bool found3 = true;
	float midtermgrade = 0.00f;
	do
	{
		cout << "\n\tEnter Midterm grade = ";
		cin >> midtermgrade;
		if (!(midtermgrade>0.00) || !(midtermgrade<100.00))
		{
			found3 = false;
			cout << "\n\tInvalid Grade !. Please enter again...";
			break;

		}
		else
		{
			found3 = true;
		}


	} while (!found3);

	return midtermgrade;
}

float finalgrade()
{
	bool found4 = true;
	float finalgrade = 0.00f;
	do
	{
		cout << "\n\tEnter Final grade = ";
		cin >> finalgrade;
		cin.ignore();
		found4 = true;
		if (!(finalgrade >0.00) || !(finalgrade <100.00))
		{
			found4 = false;
			cout << "\n\tInvalid Grade !. Please enter again...";
			break;

		}
		else
		{
			found4 = true;
		}


	} while (!found4);

	return finalgrade;
}

string password()
{
	cout << "\n\tPassword = ";
	string password = "";
	getline(cin, password);
	return password;


}
void data()
{

	cout << "\n\n\n\n";
	cout << setw(12) << "COURSE NUMBER" << setw(19) << "COURSE TITLE" << setw(22) << "GROUP" << setw(28) << "NUMBER OF STUDENTS" << endl;
	cout << setw(12) << "=============" << setw(19) << "============" << setw(22) << "=====" << setw(28) << "==================" << endl;
	cout << setw(12) << "420-P16-AS" << setw(26) << "STRUCTURED PROGRAMMING" << setw(15) << "7052" << setw(23) << "25" << endl;
	cout << setw(12) << "420-P16-AS" << setw(26) << "STRUCTURED PROGRAMMING" << setw(15) << "7154" << setw(23) << "27" << endl;
	cout << setw(12) << "420-P65-AS" << setw(26) << "INTERNET PROGRAMMING 2" << setw(15) << "7064" << setw(23) << "22" << endl<<endl<<endl<<endl;

}



void teacherusername()
{
	int username = 0;
	string password1 = "";
	bool valid1 = true;

	do
	{
		cout << "\n\tUser name : ";
		cin >> username;
		cin.ignore();
		cout << "\n\tPassword : ";
		getline(cin, password1);
		if (username == 5257 && password1 == "quanghoang")
		{
			valid1 = true;
			break;
		}
		else
		{
			valid1 = false;
			cout << "\n\tInvalid username or password ! . Please enter again...";
		}

	} while (!valid1);
}

short teacherMenu()
{
	cout << "\n\n\t1. List all the courses he is teaching";
	cout << "\n\t2. Enter students grades for a given course";
	cout << "\n\t3. Search a student by Student ID / First Name / LastName / First Name and Last Name";
	cout << "\n\t4. Sort the student list by Student ID";
	cout << "\n\t5. List all the student grades for a given course";
	cout << "\n\t6. Quit the application";
	cout << "\n\n\tEnter your choice = ";
	int choice1 = 0;
	cin >> choice1;
	cin.ignore();
	return choice1;
}

short searchMenu()
{
	cout << setw(75) << "Search Student by following : "<<endl;
	cout << setw(75) << "============================= " << endl<<endl;
	cout << "\n\t1.Search by Student ID";
	cout << "\n\t2.Search by First Name";
	cout << "\n\t3.Search by Last Name";
	cout << "\n\t4.Search by First Name and Last Name";
	cout << "\n\n\tEnter your choice = ";
	int choice2 = 0;
	cin >> choice2;
	cin.ignore();
	return choice2;

}

short studentMenu()
{
	cout << "\n\n\t1. List all the courses taken";
	cout << "\n\t2. View the grade for a given evaluation component(Midterm Exam, Final Project or final Exam) ";
	cout << "\n\trelated to a course taken in this session(Winter 2018)";
	cout << "\n\t3. List all the grades for a given course";
	cout << "\n\t4. Quit the application";
	cout << "\n\n\tEnter your choice : ";
	int choice3 = 0;
	cin >> choice3;
	cin.ignore();
	return choice3;

}

short Groupmenu()
{
	cout << "\n\n\t1.Group 7052 (Structured Programming).";
	cout << "\n\n\t2.Group 7154 (Structured Programming).";
	cout << "\n\n\t3.Group 7064 (Internet Programming II).";
	cout << "\n\n\tEnter your choice = ";
	int choice4 = 0;
	cin >> choice4;
	cin.ignore();
	return choice4;

}

