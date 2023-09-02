#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Course.h"
using namespace std;

class Student{
public :
	void setName(string n);
	void setID(string i);
	void setYear(int y);
	void setGPA(float g);
	void setCrHrs(int c);
	void setMajor(string m);
	void setMinor(string m);

private:
		string Name;
		string ID;
		int Year;
		bool Probation;
		float GPA;
		int CrHrs;
		string Major;
		string Minor;
		
public:
	Student();
	string getName();
	string getID();
	int getYear();
	float getGPA();
	bool isProb(float g);
	int getCrHrs();
	string getMajor();
	string getMinor();
	vector<Course> studentCourses;
};

ref class student
{
};
