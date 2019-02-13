#ifndef FINALPROJECT_H
#define FINALPROJECT_H
#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
#define SIZE 2

using namespace std;

struct Login1
{
	string ID = "";
	string fname = "";
	string lname = "";
	float project = 0.00f;
	float midterm = 0.00f;
	float finalexam = 0.00f;

};
struct Login2
{
	string ID = "";
	string fname = "";
	string lname = "";
	float project = 0.00f;
	float midterm = 0.00f;
	float finalexam = 0.00f;

};
struct Login3
{
	string ID = "";
	string fname = "";
	string lname = "";
	float project = 0.00f;
	float midterm = 0.00f;
	float finalexam = 0.00f;

};

struct group7052
{
	string StudentID = "";
	string firstname = "";
	string lastname = "";
	float project = 0.00f;
	float midterm = 0.00f;
	float finalexam = 0.00f;
	float finalresult = 0.00f;
	string password = "";

 };

struct group7154
{
	string StudentID = "";
	string firstname = "";
	string lastname = "";
	float project = 0.00f;
	float midterm = 0.00f;
	float finalexam = 0.00f;
	float finalresult = 0.00f;
	string password = "";
};

struct group7064
{
	string StudentID = "";
	string firstname = "";
	string lastname = "";
	float project = 0.00f;
	float midterm = 0.00f;
	float finalexam = 0.00f;
	float finalresult = 0.00f;
	string password = "";

};


string IDvalidation();
string firstnamevalidation();
string lastnamevalidation();
float projectgrade();
float midtermgrade();
float finalgrade();
string password();
void data();
void searchID1();
void searchID2();
void searchID3();
void searchfname1();
void searchfname2();
void searchfname3();
void searchlname1();
void searchlname2();
void searchlname3();
void searchflname1();
void searchflname2();
void searchflname3();
void sort1();
void sort2();
void sort3();
void display1();
void display2();
void display3();
void teacherusername();
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
short teacherMenu();
short searchMenu();
short studentMenu();
short Groupmenu();

#endif