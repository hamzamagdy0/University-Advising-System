#include "Course.h"
#include <fstream>
ifstream courseElective("");

Course::Course() {
	Name = "";
	Code = "";
	Year = 0;
	Semester = 0;
	CrHrs = 0;
	Prerequisite = "";
	Major = "";
	Taken = false;
	Day = "";
	Period = 0;
}

Course::~Course() {}

void Course::setName(string n) {
	Name = n;
}

string Course::getName() {
	return Name;
}

void Course::setCode(string c) {
	Code = c;
}

string Course::getCode() {
	return Code;
}

void Course::setYear(int y) {
	Year = y;
}

int Course::getYear() {
	return Year;
}

void Course::setSemester(int s) {
	Semester = s;
}

int Course::getSemester() {
	return Semester;
}

void Course::setCrHrs(int ch) {
	CrHrs = ch;
}

int Course::getCrHrs() {
	return CrHrs;
}

void Course::setPrerequisite(string p) {
	Prerequisite = p;
}

string Course::getPrerequisite() {
	return Prerequisite;
}

void Course::setMajor(string m) {
	Major = m;
}

string Course::getMajor() {
	return Major;
}

void Course::setTaken(bool t) {
	Taken = t;
}

bool Course::istaken() {
	return Taken;
}

void Course::setDay(string d) {
	Day = d;
}

string Course::getDay() {
	return Day;
}

void Course::setPeriod(int p) {
	if (p < 1 || p > 6)
		cout << "enter another value for your period";
	else
		Period = p;
}

int Course::getPeriod() {
	return Period;
}