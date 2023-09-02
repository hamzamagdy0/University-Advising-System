#pragma once
#include <iostream>
#include <string>
using namespace std;

class Course{
	private: 
		string Name;
		string Code;
		int Year;
		int Semester;
		int CrHrs;
		string Prerequisite;
		string Major;
		bool Taken;
		string Day;
		int Period;
public:
	Course();
	
	~Course();
	
	void setName(string n);

	string getName();
	
	void setCode(string c);
	
	string getCode();
	
	void setYear(int y);
	
	int getYear();
	
	void setSemester(int s);
	
	int getSemester();
	
	void setCrHrs(int ch);
	
	int getCrHrs();
	
	void setPrerequisite(string p);
	
	string getPrerequisite();
	
	void setMajor(string m);
	
	string getMajor();

	void setTaken(bool t);

	bool istaken();

	void setDay(string d);

	string getDay();

	void setPeriod(int p);

	int getPeriod();
};

ref class course
{
};
