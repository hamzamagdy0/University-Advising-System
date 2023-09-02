#include "Student.h"
#include "Course.h"


Student::Student() {
	Name = "";
	ID = "";
	Year = 0;
	Probation = false;
	GPA = 0.0;
	CrHrs = 0;
	Major = "";
	Minor = "";
}

void Student::setName(string n) {
	Name = n;
}

string Student::getName() {
	return Name;
}

void Student::setID(string i) {
	ID = i;
}

string Student::getID() {
	return ID;
}

void Student::setYear(int y) {
	Year = y;
}

int Student::getYear() {
	return Year;
}

void Student::setGPA(float g) {
	GPA = g;
}

float Student::getGPA() {
	return GPA;
}

bool Student::isProb(float g) {
	if (g < 0 || g > 4) 
		cout << "Please enter a valid GPA";
	else if (g >= 2)
		return false;
	else
		return true;
}

void Student::setCrHrs(int c) {
	CrHrs = c;
}

int Student::getCrHrs() {
	return CrHrs;
}

void Student::setMajor(string m) {
	Major = m;
}

string Student::getMajor() {
	return Major;
}

void Student::setMinor(string m) {
	Minor = m;
}

string Student::getMinor() {
	return Minor;
}