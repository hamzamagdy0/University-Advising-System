#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Course.h"
#include "Student.h"
using namespace std;

void adminSwitch();
void studentSwitch();
void viewStudentData();
void addSemesterData(int &year);
void askForMajor(int year, int semester);
void setYearTime1(int year,int &semester, int major);
void setYearTime2(int year, int& semester, int major);
void daySwitch(int year, int index, int major);
void periodSwitch(int year, int index, int major);
bool isClash(int year, int option, int start, int end, int major);
void outputToFile(int year, int major);


ifstream infYear1("year1.txt");
ifstream infYear2("year2.txt");
ifstream infYear3CS("year3CS.txt");
ifstream infYear3DIS("year3DIS.txt");
ifstream infYear3SE("year3SE.txt");
ifstream infYear4CS("year4CS.txt");
ifstream infYear4DIS("year4DIS.txt");
ifstream infYear4SE("year4SE.txt");
vector<Course> vCourse1;
vector<Course> vCourse2;
vector<Course> vCourse3CS;
vector<Course> vCourse3DIS;
vector<Course> vCourse3SE;
vector<Course> vCourse4CS;
vector<Course> vCourse4DIS;
vector<Course> vCourse4SE;

// main interface
int main()
{ 
	//prompt to know the job of the user
	short option;
	cout << "\t\tPlease Choose Your Role\n1) Admin\n2) Student\n";
	cin >> option;
	switch (option) {
	case 1:
		// call admin switch
		adminSwitch();
		break;
	case 2:
		studentSwitch();
		break;
	}
}

// choices of admin about which year will he add its schedule
void adminSwitch() {
	system("cls");
	// prompt admin for which year will he add its schedule
	int year;
	cout << "Which year will you add its schedule? ";
	while (true) {
		cin >> year;
		//check if year is valid
		if (year < 1 or year > 4) 
			cout << "Invalid, please re-enter the year ";
		else
			break;
	}
		//call ask for semester
	addSemesterData(year);
}

void studentSwitch() {
	system("cls");
	cout << "1) View Data\n2) View Schedule\n";
	int option;
	cin >> option;
	switch (option) {
	case 1:
		viewStudentData();
		break;
	case 2:
		break;
	}
}

void viewStudentData() {

}

//input data of years 1 and 2 to vectors
void addSemesterData(int &year) {
	//if files didn't open exit
	if (!infYear1.is_open() or !infYear2.is_open() or !infYear3CS.is_open()) {
		cout << "file failed ";
		exit(0);
	}

	// clear file buffer and start cursor from beginning 
	infYear1.clear();
	infYear1.seekg(0, ios::beg);
	infYear2.clear();
	infYear2.seekg(0, ios::beg);
	infYear3CS.clear();
	infYear3CS.seekg(0, ios::beg);

	//major is 0 for years 1 & 2 / always start taking the first semester's input first
	int major = 0,semester = 1;
	//line that will input from files
	string line;
	int lineIndex = 0;
	int objIndex = -1;

	if (year == 1 or year == 2) {
		// inputs from file to the vector
		while (!infYear1.eof()) {
			getline(infYear1, line);
			line = line.substr(0, line.find("~"));

			if (line != "FALSE") {
				switch (lineIndex % 9) {
				case 0:
					vCourse1.emplace_back();
					objIndex++;
					vCourse1[objIndex].setName(line);
					break;
				case 1:
					vCourse1[objIndex].setCode(line);
					break;
				case 2:
					if (!line.empty()) {
						vCourse1[objIndex].setCrHrs(stoi(line));
					}
					break;
				case 3:
					if (!line.empty()) {
						vCourse1[objIndex].setSemester(stoi(line));
					}
					break;
				case 4:
					vCourse1[objIndex].setPrerequisite(line);
					break;
				case 5:
					vCourse1[objIndex].setMajor(line);
					break;
				case 6:
					vCourse1[objIndex].setTaken(line == "TRUE");
					break;
				case 7:
					vCourse1[objIndex].setDay(line);
					break;
				case 8:
					if (!line.empty()) {
						vCourse1[objIndex].setPeriod(stoi(line));
					}
					break;
				}
			}
			lineIndex++;
		}

		// declare indices for each file and objects
		lineIndex = 0;
		objIndex = -1;

		while (!infYear2.eof()) {
			getline(infYear2, line);
			line = line.substr(0, line.find("~"));

			if (line != "FALSE") {
				switch (lineIndex % 9) {
				case 0:
					vCourse2.emplace_back();
					objIndex++;
					vCourse2[objIndex].setName(line);
					break;
				case 1:
					vCourse2[objIndex].setCode(line);
					break;
				case 2:
					if (!line.empty()) {
						vCourse2[objIndex].setCrHrs(stoi(line));
					}
					break;
				case 3:
					if (!line.empty()) {
						vCourse2[objIndex].setSemester(stoi(line));
					}
					break;
				case 4:
					vCourse2[objIndex].setPrerequisite(line);
					break;
				case 5:
					vCourse2[objIndex].setMajor(line);
					break;
				case 6:
					vCourse2[objIndex].setTaken(line == "TRUE");
					break;
				case 7:
					vCourse2[objIndex].setDay(line);
					break;
				case 8:
					if (!line.empty()) {
						vCourse2[objIndex].setPeriod(stoi(line));
					}
					break;
				}
			}
			lineIndex++;
		}
		
		setYearTime1(year, semester, major);
	}
	else if (year == 3 or year == 4) {
		askForMajor(year, semester);	
	}	
}

//for years 3 and for ask for major and input to vectors
void askForMajor(int year, int semester) {
	int major;
	//ask for major
	cout << "What's the Major?\n";
	cout << "1) Computer Science\n2) Data & Information Science\n3) Software Engineering\n";
	cin >> major;

	//line that will input from files
	string line;
	int lineIndex = 0;
	int objIndex = -1;
	switch (year) {
	case 3:
		switch (major) {
		case 1:
			while (!infYear3CS.eof()) {
				getline(infYear3CS, line);
				line = line.substr(0, line.find("~"));

				if (line != "FALSE") {
					switch (lineIndex % 9) {
					case 0:
						vCourse3CS.emplace_back();
						objIndex++;
						vCourse3CS[objIndex].setName(line);
						break;
					case 1:
						vCourse3CS[objIndex].setCode(line);
						break;
					case 2:
						if (!line.empty()) {
							vCourse3CS[objIndex].setCrHrs(stoi(line));
						}
						break;
					case 3:
						if (!line.empty()) {
							vCourse3CS[objIndex].setSemester(stoi(line));
						}
						break;
					case 4:
						vCourse3CS[objIndex].setPrerequisite(line);
						break;
					case 5:
						vCourse3CS[objIndex].setMajor(line);
						break;
					case 6:
						vCourse3CS[objIndex].setTaken(line == "TRUE");
						break;
					case 7:
						vCourse3CS[objIndex].setDay(line);
						break;
					case 8:
						if (!line.empty()) {
							vCourse3CS[objIndex].setPeriod(stoi(line));
						}
						break;
					}
				}
				lineIndex++;
			}
			setYearTime2(year, semester, major);
			break;
		case 2:
			while (!infYear3DIS.eof()) {
				getline(infYear3DIS, line);
				line = line.substr(0, line.find("~"));

				if (line != "FALSE") {
					switch (lineIndex % 9) {
					case 0:
						vCourse3DIS.emplace_back();
						objIndex++;
						vCourse3DIS[objIndex].setName(line);
						break;
					case 1:
						vCourse3DIS[objIndex].setCode(line);
						break;
					case 2:
						if (!line.empty()) {
							vCourse3DIS[objIndex].setCrHrs(stoi(line));
						}
						break;
					case 3:
						if (!line.empty()) {
							vCourse3DIS[objIndex].setSemester(stoi(line));
						}
						break;
					case 4:
						vCourse3DIS[objIndex].setPrerequisite(line);
						break;
					case 5:
						vCourse3DIS[objIndex].setMajor(line);
						break;
					case 6:
						vCourse3DIS[objIndex].setTaken(line == "TRUE");
						break;
					case 7:
						vCourse3DIS[objIndex].setDay(line);
						break;
					case 8:
						if (!line.empty()) {
							vCourse3DIS[objIndex].setPeriod(stoi(line));
						}
						break;
					}
				}
				lineIndex++;
			}
			setYearTime2(year, semester, major);
			break;
		case 3:
			while (!infYear3SE.eof()) {
				getline(infYear3SE, line);
				line = line.substr(0, line.find("~"));

				if (line != "FALSE") {
					switch (lineIndex % 9) {
					case 0:
						vCourse3SE.emplace_back();
						objIndex++;
						vCourse3SE[objIndex].setName(line);
						break;
					case 1:
						vCourse3SE[objIndex].setCode(line);
						break;
					case 2:
						if (!line.empty()) {
							vCourse3SE[objIndex].setCrHrs(stoi(line));
						}
						break;
					case 3:
						if (!line.empty()) {
							vCourse3SE[objIndex].setSemester(stoi(line));
						}
						break;
					case 4:
						vCourse3SE[objIndex].setPrerequisite(line);
						break;
					case 5:
						vCourse3SE[objIndex].setMajor(line);
						break;
					case 6:
						vCourse3SE[objIndex].setTaken(line == "TRUE");
						break;
					case 7:
						vCourse3SE[objIndex].setDay(line);
						break;
					case 8:
						if (!line.empty()) {
							vCourse3SE[objIndex].setPeriod(stoi(line));
						}
						break;
					}
				}
				lineIndex++;
			}
			setYearTime2(year, semester, major);
			break;
		}
		break;
	case 4:
		switch (major) {
		case 1:
			while (!infYear4CS.eof()) {
				getline(infYear4CS, line);
				line = line.substr(0, line.find("~"));

				if (line != "FALSE") {
					switch (lineIndex % 9) {
					case 0:
						vCourse4CS.emplace_back();
						objIndex++;
						vCourse4CS[objIndex].setName(line);
						break;
					case 1:
						vCourse4CS[objIndex].setCode(line);
						break;
					case 2:
						if (!line.empty()) {
							vCourse4CS[objIndex].setCrHrs(stoi(line));
						}
						break;
					case 3:
						if (!line.empty()) {
							vCourse4CS[objIndex].setSemester(stoi(line));
						}
						break;
					case 4:
						vCourse4CS[objIndex].setPrerequisite(line);
						break;
					case 5:
						vCourse4CS[objIndex].setMajor(line);
						break;
					case 6:
						vCourse4CS[objIndex].setTaken(line == "TRUE");
						break;
					case 7:
						vCourse4CS[objIndex].setDay(line);
						break;
					case 8:
						if (!line.empty()) {
							vCourse4CS[objIndex].setPeriod(stoi(line));
						}
						break;
					}
				}
				lineIndex++;
			}
			setYearTime2(year, semester, major);
			break;
		case 2:
			while (!infYear4DIS.eof()) {
				getline(infYear4DIS, line);
				line = line.substr(0, line.find("~"));

				if (line != "FALSE") {
					switch (lineIndex % 9) {
					case 0:
						vCourse4DIS.emplace_back();
						objIndex++;
						vCourse4DIS[objIndex].setName(line);
						break;
					case 1:
						vCourse4DIS[objIndex].setCode(line);
						break;
					case 2:
						if (!line.empty()) {
							vCourse4DIS[objIndex].setCrHrs(stoi(line));
						}
						break;
					case 3:
						if (!line.empty()) {
							vCourse4DIS[objIndex].setSemester(stoi(line));
						}
						break;
					case 4:
						vCourse4DIS[objIndex].setPrerequisite(line);
						break;
					case 5:
						vCourse4DIS[objIndex].setMajor(line);
						break;
					case 6:
						vCourse4DIS[objIndex].setTaken(line == "TRUE");
						break;
					case 7:
						vCourse4DIS[objIndex].setDay(line);
						break;
					case 8:
						if (!line.empty()) {
							vCourse4DIS[objIndex].setPeriod(stoi(line));
						}
						break;
					}
				}
				lineIndex++;
			}
			setYearTime2(year, semester, major);
			break;
		case 3:
			while (!infYear4SE.eof()) {
				getline(infYear4SE, line);
				line = line.substr(0, line.find("~"));

				if (line != "FALSE") {
					switch (lineIndex % 9) {
					case 0:
						vCourse4SE.emplace_back();
						objIndex++;
						vCourse4SE[objIndex].setName(line);
						break;
					case 1:
						vCourse4SE[objIndex].setCode(line);
						break;
					case 2:
						if (!line.empty()) {
							vCourse4SE[objIndex].setCrHrs(stoi(line));
						}
						break;
					case 3:
						if (!line.empty()) {
							vCourse4SE[objIndex].setSemester(stoi(line));
						}
						break;
					case 4:
						vCourse4SE[objIndex].setPrerequisite(line);
						break;
					case 5:
						vCourse4SE[objIndex].setMajor(line);
						break;
					case 6:
						vCourse4SE[objIndex].setTaken(line == "TRUE");
						break;
					case 7:
						vCourse4SE[objIndex].setDay(line);
						break;
					case 8:
						if (!line.empty()) {
							vCourse4SE[objIndex].setPeriod(stoi(line));
						}
						break;
					}
				}
				lineIndex++;
			}
			setYearTime2(year, semester, major);
			break;
		}
		break;
	}
}

// ask admin for days and periods for years 1 or 2
void setYearTime1(int year, int &semester ,int major) {
	int option;
	int startCourse, endCourse;
	//set course indexes for every semester
	switch (semester) {
	case 1:
		startCourse = 0;
		endCourse = 4;
		break;
	case 2:
		startCourse = 5;
		endCourse = 9;
		break;
	default:
		break;
	}

	switch (year) {
	case 1: {
		for (int i = startCourse; i <= endCourse; i++) {
			system("cls");
			cout << "Choose subject you want to set Day and Period : \n";
			cout << "Available Courses: \n";
			for (int j = startCourse; j <= endCourse; j++) {
				if (vCourse1[j].getDay() == "" or vCourse1[j].getPeriod() == 0) {
					cout << "Course " << j + 1 << " " << vCourse1[j].getName() << endl;
				}
			}


			//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
			while (true) {
				cin >> option;
				if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse1[option - 1].getDay().empty() || vCourse1[option - 1].getPeriod() == 0))
					break;
				cout << "Invalid Course ";
			}

			daySwitch(year, option - 1, major);
			periodSwitch(year, option - 1, major);

			if (isClash(year, option - 1, startCourse, endCourse, major)) {
				cout << "Clash detected for course " << vCourse1[option - 1].getName() << ". Please select a different day or period." << endl;
				vCourse1[option - 1].setDay("");
				vCourse1[option - 1].setPeriod(0);
				i--;
				continue;
			}
		}

		if (semester == 1) {
			semester++;
			setYearTime1(year, semester, major);
		}
		else
			outputToFile(year, major);
		break;
	}
	case 2: {
		for (int i = startCourse; i <= endCourse; i++) {
			system("cls");
			cout << "Choose subject you want to set Day and Period : \n";
			cout << "Available Courses: \n";
			for (int j = startCourse; j <= endCourse; j++) {
				if (vCourse2[j].getDay() == "" or vCourse2[j].getPeriod() == 0) {
					cout << "Course " << j + 1 << " " << vCourse2[j].getName() << endl;
				}
			}
			//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
			while (true) {
				cin >> option;
				if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse2[option - 1].getDay().empty() || vCourse2[option - 1].getPeriod() == 0))
					break;
				cout << "Invalid Course ";
			}

			daySwitch(year, option - 1, major);
			periodSwitch(year, option - 1, major);

			if (isClash(year, option - 1, startCourse, endCourse, major)) {
				vCourse2[option - 1].setDay("");
				vCourse2[option - 1].setPeriod(0);
				i--;
				continue;
			}

		}

		if (semester == 1) {
			semester++;
			setYearTime1(year, semester, major);
		}
		else
			outputToFile(year, major);
		break;
	}
	}
}

//ask admin for days and periods for years 3 or 4
void setYearTime2(int year, int& semester, int major) {
	int option;
	int startCourse, endCourse;
	//set course indexes for every semester
	switch (semester) {
	case 1:
		startCourse = 0;
		endCourse = 4;
		break;
	case 2:
		startCourse = 5;
		endCourse = 9;
		break;
	default:
		break;
	}

	switch (year) {
		case 3: {
			switch (major) {
			case 1: {
			for (int i = startCourse; i <= endCourse; i++) {
				system("cls");
				cout << "Choose subject you want to set Day and Period : \n";
				cout << "Available Courses: \n";
				for (int j = startCourse; j <= endCourse; j++) {
					if (vCourse3CS[j].getDay() == "" or vCourse3CS[j].getPeriod() == 0) {
						cout << "Course " << j + 1 << " " << vCourse3CS[j].getName() << endl;
					}
				}


				//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
				while (true) {
					cin >> option;
					if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse3CS[option - 1].getDay().empty() || vCourse3CS[option - 1].getPeriod() == 0))
						break;
					cout << "Invalid Course ";
				}

				daySwitch(year, option - 1, major);
				periodSwitch(year, option - 1, major);

				if (isClash(year, option - 1, startCourse, endCourse, major)) {
					cout << "Clash detected for course " << vCourse3CS[option - 1].getName() << ". Please select a different day or period." << endl;
					vCourse3CS[option - 1].setDay("");
					vCourse3CS[option - 1].setPeriod(0);
					i--;
					continue;
				}
			}
			if (semester == 1) {
				semester++;
				setYearTime2(year, semester, major);
			}
			else
				outputToFile(year, major);
			break;
		}
			case 2: {
			for (int i = startCourse; i <= endCourse; i++) {
				system("cls");
				cout << "Choose subject you want to set Day and Period : \n";
				cout << "Available Courses: \n";
				for (int j = startCourse; j <= endCourse; j++) {
					if (vCourse3DIS[j].getDay() == "" or vCourse3DIS[j].getPeriod() == 0) {
						cout << "Course " << j + 1 << " " << vCourse3DIS[j].getName() << endl;
					}
				}


				//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
				while (true) {
					cin >> option;
					if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse3DIS[option - 1].getDay().empty() || vCourse3DIS[option - 1].getPeriod() == 0))
						break;
					cout << "Invalid Course ";
				}

				daySwitch(year, option - 1, major);
				periodSwitch(year, option - 1, major);

				if (isClash(year, option - 1, startCourse, endCourse, major)) {
					cout << "Clash detected for course " << vCourse3DIS[option - 1].getName() << ". Please select a different day or period." << endl;
					vCourse3DIS[option - 1].setDay("");
					vCourse3DIS[option - 1].setPeriod(0);
					i--;
					continue;
				}
			}
			if (semester == 1) {
				semester++;
				setYearTime2(year, semester, major);
			}
			else
				outputToFile(year, major);
			break;
		}
			case 3: {
				for (int i = startCourse; i <= endCourse; i++) {
					system("cls");
					cout << "Choose subject you want to set Day and Period : \n";
					cout << "Available Courses: \n";
					for (int j = startCourse; j <= endCourse; j++) {
						if (vCourse3SE[j].getDay() == "" or vCourse3SE[j].getPeriod() == 0) {
							cout << "Course " << j + 1 << " " << vCourse3SE[j].getName() << endl;
						}
					}


					//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
					while (true) {
						cin >> option;
						if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse3SE[option - 1].getDay().empty() || vCourse3SE[option - 1].getPeriod() == 0))
							break;
						cout << "Invalid Course ";
					}

					daySwitch(year, option - 1, major);
					periodSwitch(year, option - 1, major);

					if (isClash(year, option - 1, startCourse, endCourse, major)) {
						cout << "Clash detected for course " << vCourse3SE[option - 1].getName() << ". Please select a different day or period." << endl;
						vCourse3SE[option - 1].setDay("");
						vCourse3SE[option - 1].setPeriod(0);
						i--;
						continue;
					}
				}
				if (semester == 1) {
					semester++;
					setYearTime2(year, semester, major);
				}
				else
					outputToFile(year, major);
				break;
			}
			break;
			}
			break;
		}
		break;
		case 4: {
			switch (major) {
		case 1: {
			for (int i = startCourse; i <= endCourse; i++) {
				system("cls");
				cout << "Choose subject you want to set Day and Period : \n";
				cout << "Available Courses: \n";
				for (int j = startCourse; j <= endCourse; j++) {
					if (vCourse4CS[j].getDay() == "" or vCourse4CS[j].getPeriod() == 0) {
						cout << "Course " << j + 1 << " " << vCourse4CS[j].getName() << endl;
					}
				}


				//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
				while (true) {
					cin >> option;
					if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse4CS[option - 1].getDay().empty() || vCourse4CS[option - 1].getPeriod() == 0))
						break;
					cout << "Invalid Course ";
				}

				daySwitch(year, option - 1, major);
				periodSwitch(year, option - 1, major);

				if (isClash(year, option - 1, startCourse, endCourse, major)) {
					cout << "Clash detected for course " << vCourse4CS[option - 1].getName() << ". Please select a different day or period." << endl;
					vCourse4CS[option - 1].setDay("");
					vCourse4CS[option - 1].setPeriod(0);
					i--;
					continue;
				}
			}
			if (semester == 1) {
				semester++;
				setYearTime2(year, semester, major);
			}
			else
				outputToFile(year, major);
			break;
		}
		case 2: {
			for (int i = startCourse; i <= endCourse; i++) {
				system("cls");
				cout << "Choose subject you want to set Day and Period : \n";
				cout << "Available Courses: \n";
				for (int j = startCourse; j <= endCourse; j++) {
					if (vCourse4DIS[j].getDay() == "" or vCourse4DIS[j].getPeriod() == 0) {
						cout << "Course " << j + 1 << " " << vCourse4DIS[j].getName() << endl;
					}
				}


				//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
				while (true) {
					cin >> option;
					if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse4DIS[option - 1].getDay().empty() || vCourse4DIS[option - 1].getPeriod() == 0))
						break;
					cout << "Invalid Course ";
				}

				daySwitch(year, option - 1, major);
				periodSwitch(year, option - 1, major);

				if (isClash(year, option - 1, startCourse, endCourse, major)) {
					cout << "Clash detected for course " << vCourse4DIS[option - 1].getName() << ". Please select a different day or period." << endl;
					vCourse4DIS[option - 1].setDay("");
					vCourse4DIS[option - 1].setPeriod(0);
					i--;
					continue;
				}
			}
			if (semester == 1) {
				semester++;
				setYearTime2(year, semester, major);
			}
			else
				outputToFile(year, major);
			break;
		}
		case 3: {
			for (int i = startCourse; i <= endCourse; i++) {
				system("cls");
				cout << "Choose subject you want to set Day and Period : \n";
				cout << "Available Courses: \n";
				for (int j = startCourse; j <= endCourse; j++) {
					if (vCourse4SE[j].getDay() == "" or vCourse4SE[j].getPeriod() == 0) {
						cout << "Course " << j + 1 << " " << vCourse4SE[j].getName() << endl;
					}
				}


				//if option is greater than the biggest number of courses or less than the smallest number or is already set for timings and periods reprompt
				while (true) {
					cin >> option;
					if (option >= startCourse + 1 && option <= endCourse + 1 && (vCourse4SE[option - 1].getDay().empty() || vCourse4SE[option - 1].getPeriod() == 0))
						break;
					cout << "Invalid Course ";
				}

				daySwitch(year, option - 1, major);
				periodSwitch(year, option - 1, major);

				if (isClash(year, option - 1, startCourse, endCourse, major)) {
					cout << "Clash detected for course " << vCourse4SE[option - 1].getName() << ". Please select a different day or period." << endl;
					vCourse4SE[option - 1].setDay("");
					vCourse4SE[option - 1].setPeriod(0);
					i--;
					continue;
				}
			}
			if (semester == 1) {
				semester++;
				setYearTime2(year, semester, major);
			}
			else
				outputToFile(year, major);
			break;
		}
			}
			break;
		}
		break;
	}
}

//day switch that sets day in object class
void daySwitch(int year,int index, int major) {
	int day;
	cout << "Enter Day of Course \n(1 = Sunday, 2 = Monday, 3 = Tuesday, 4 = Wednesday, 5 = Thursday, 6 = Saturday) ";
 	cin >> day;
	

	switch (year) {
	case 1:
		switch (day) {
		case 1:
			vCourse1[index].setDay("Sunday");
			break;
		case 2:
			vCourse1[index].setDay("Monday");
			break;
		case 3:
			vCourse1[index].setDay("Tuesday");
			break;
		case 4:
			vCourse1[index].setDay("Wednesday");
			break;
		case 5:
			vCourse1[index].setDay("Thursday");
			break;
		case 6:
			vCourse1[index].setDay("Saturday");
			break;
		default:
			cout << "invalid day";
			break;
		}
		break;
	case 2:
		switch (day) {
		case 1:
			vCourse2[index].setDay("Sunday");
			break;
		case 2:
			vCourse2[index].setDay("Monday");
			break;
		case 3:
			vCourse2[index].setDay("Tuesday");
			break;
		case 4:
			vCourse2[index].setDay("Wednesday");
			break;
		case 5:
			vCourse2[index].setDay("Thursday");
			break;
		case 6:
			vCourse2[index].setDay("Saturday");
			break;
		default:
			cout << "invalid day";
			break;
		}
		break;
	case 3:
		switch (major) {
		case 1:
			switch (day) {
			case 1:
				vCourse3CS[index].setDay("Sunday");
				break;
			case 2:
				vCourse3CS[index].setDay("Monday");
				break;
			case 3:
				vCourse3CS[index].setDay("Tuesday");
				break;
			case 4:
				vCourse3CS[index].setDay("Wednesday");
				break;
			case 5:
				vCourse3CS[index].setDay("Thursday");
				break;
			case 6:
				vCourse3CS[index].setDay("Saturday");
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 2:
			switch (day) {
			case 1:
				vCourse3DIS[index].setDay("Sunday");
				break;
			case 2:
				vCourse3DIS[index].setDay("Monday");
				break;
			case 3:
				vCourse3DIS[index].setDay("Tuesday");
				break;
			case 4:
				vCourse3DIS[index].setDay("Wednesday");
				break;
			case 5:
				vCourse3DIS[index].setDay("Thursday");
				break;
			case 6:
				vCourse3DIS[index].setDay("Saturday");
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 3:
			switch (day) {
			case 1:
				vCourse3SE[index].setDay("Sunday");
				break;
			case 2:
				vCourse3SE[index].setDay("Monday");
				break;
			case 3:
				vCourse3SE[index].setDay("Tuesday");
				break;
			case 4:
				vCourse3SE[index].setDay("Wednesday");
				break;
			case 5:
				vCourse3SE[index].setDay("Thursday");
				break;
			case 6:
				vCourse3SE[index].setDay("Saturday");
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		}
		break;
	case 4:
		switch (major) {
		case 1:
			switch (day) {
			case 1:
				vCourse4CS[index].setDay("Sunday");
				break;
			case 2:
				vCourse4CS[index].setDay("Monday");
				break;
			case 3:
				vCourse4CS[index].setDay("Tuesday");
				break;
			case 4:
				vCourse4CS[index].setDay("Wednesday");
				break;
			case 5:
				vCourse4CS[index].setDay("Thursday");
				break;
			case 6:
				vCourse4CS[index].setDay("Saturday");
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 2:
			switch (day) {
			case 1:
				vCourse4DIS[index].setDay("Sunday");
				break;
			case 2:
				vCourse4DIS[index].setDay("Monday");
				break;
			case 3:
				vCourse4DIS[index].setDay("Tuesday");
				break;
			case 4:
				vCourse4DIS[index].setDay("Wednesday");
				break;
			case 5:
				vCourse4DIS[index].setDay("Thursday");
				break;
			case 6:
				vCourse4DIS[index].setDay("Saturday");
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 3:
			switch (day) {
			case 1:
				vCourse4SE[index].setDay("Sunday");
				break;
			case 2:
				vCourse4SE[index].setDay("Monday");
				break;
			case 3:
				vCourse4SE[index].setDay("Tuesday");
				break;
			case 4:
				vCourse4SE[index].setDay("Wednesday");
				break;
			case 5:
				vCourse4SE[index].setDay("Thursday");
				break;
			case 6:
				vCourse4SE[index].setDay("Saturday");
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		}
	}
}

//period switxh that sets perios in object class
void periodSwitch(int year, int index, int major) {
	int period;
	cout << "Enter Period you want your session to be in:" << endl;
	cout << " 1 = (9 - 10:30), 2 = (10:30 - 12), 3 = (12 - 1:30), 4 = (1:30 - 3), 5 = (3 - 4:30), 6 = (4:30 - 6) ";
	cin >> period;
	
	switch (year) {
	case 1:
		switch (period) {
		case 1:
			vCourse1[index].setPeriod(period);
			break;
		case 2:
			vCourse1[index].setPeriod(period);
			break;
		case 3:
			vCourse1[index].setPeriod(period);
			break;
		case 4:
			vCourse1[index].setPeriod(period);
			break;
		case 5:
			vCourse1[index].setPeriod(period);
			break;
		case 6:
			vCourse1[index].setPeriod(period);;
			break;
		default:
			cout << "invalid day";
			break;
		}
		break;
	case 2:
		switch (period) {
		case 1:
			vCourse2[index].setPeriod(period);
			break;
		case 2:
			vCourse2[index].setPeriod(period);
			break;
		case 3:
			vCourse2[index].setPeriod(period);
			break;
		case 4:
			vCourse2[index].setPeriod(period);
			break;
		case 5:
			vCourse2[index].setPeriod(period);
			break;
		case 6:
			vCourse2[index].setPeriod(period);
			break;
		default:
			cout << "invalid day";
			break;
		}
		break;
	case 3:
		switch (major) {
		case 1:
			switch (period) {
			case 1:
				vCourse3CS[index].setPeriod(period);
				break;
			case 2:
				vCourse3CS[index].setPeriod(period);
				break;
			case 3:
				vCourse3CS[index].setPeriod(period);
				break;
			case 4:
				vCourse3CS[index].setPeriod(period);
				break;
			case 5:
				vCourse3CS[index].setPeriod(period);
				break;
			case 6:
				vCourse3CS[index].setPeriod(period);;
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 2:
			switch (period) {
			case 1:
				vCourse3DIS[index].setPeriod(period);
				break;
			case 2:
				vCourse3DIS[index].setPeriod(period);
				break;
			case 3:
				vCourse3DIS[index].setPeriod(period);
				break;
			case 4:
				vCourse3DIS[index].setPeriod(period);
				break;
			case 5:
				vCourse3DIS[index].setPeriod(period);
				break;
			case 6:
				vCourse3DIS[index].setPeriod(period);;
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 3:
			switch (period) {
			case 1:
				vCourse3SE[index].setPeriod(period);
				break;
			case 2:
				vCourse3SE[index].setPeriod(period);
				break;
			case 3:
				vCourse3SE[index].setPeriod(period);
				break;
			case 4:
				vCourse3SE[index].setPeriod(period);
				break;
			case 5:
				vCourse3SE[index].setPeriod(period);
				break;
			case 6:
				vCourse3SE[index].setPeriod(period);;
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		}
		break;
	case 4:
		switch (major) {
		case 1:
			switch (period) {
			case 1:
				vCourse4CS[index].setPeriod(period);
				break;
			case 2:
				vCourse4CS[index].setPeriod(period);
				break;
			case 3:
				vCourse4CS[index].setPeriod(period);
				break;
			case 4:
				vCourse4CS[index].setPeriod(period);
				break;
			case 5:
				vCourse4CS[index].setPeriod(period);
				break;
			case 6:
				vCourse4CS[index].setPeriod(period);;
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 2:
			switch (period) {
			case 1:
				vCourse4DIS[index].setPeriod(period);
				break;
			case 2:
				vCourse4DIS[index].setPeriod(period);
				break;
			case 3:
				vCourse4DIS[index].setPeriod(period);
				break;
			case 4:
				vCourse4DIS[index].setPeriod(period);
				break;
			case 5:
				vCourse4DIS[index].setPeriod(period);
				break;
			case 6:
				vCourse4DIS[index].setPeriod(period);;
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		case 3:
			switch (period) {
			case 1:
				vCourse4SE[index].setPeriod(period);
				break;
			case 2:
				vCourse4SE[index].setPeriod(period);
				break;
			case 3:
				vCourse4SE[index].setPeriod(period);
				break;
			case 4:
				vCourse4SE[index].setPeriod(period);
				break;
			case 5:
				vCourse4SE[index].setPeriod(period);
				break;
			case 6:
				vCourse4SE[index].setPeriod(period);;
				break;
			default:
				cout << "invalid day";
				break;
			}
			break;
		}
		break;
	}
	
}

//function that checks if there is a clash between courses in the same semester
bool isClash(int year, int option, int start, int end, int major) {
	switch (year) {
	case 1:
		for (int i = start; i <= end; i++) {
			if (i == option)
				continue;
			if (vCourse1[option].getDay() == vCourse1[i].getDay() && vCourse1[option].getPeriod() == vCourse1[i].getPeriod())
				return true;
		}
		return false;
		break;
	case 2:
		for (int i = start; i <= end; i++) {
			if (i == option)
				continue;
			if (vCourse2[option].getDay() == vCourse2[i].getDay() && vCourse2[option].getPeriod() == vCourse2[i].getPeriod())
				return true;
		}
		return false;
		break;
	case 3:
		switch (major) {
		case 1:
			for (int i = start; i <= end; i++) {
				if (i == option)
					continue;
				if (vCourse3CS[option].getDay() == vCourse3CS[i].getDay() && vCourse3CS[option].getPeriod() == vCourse3CS[i].getPeriod())
					return true;
			}
			return false;
			break;
		case 2:
			for (int i = start; i <= end; i++) {
				if (i == option)
					continue;
				if (vCourse3DIS[option].getDay() == vCourse3DIS[i].getDay() && vCourse3DIS[option].getPeriod() == vCourse3DIS[i].getPeriod())
					return true;
			}
			return false;
			break;
		case 3:
			for (int i = start; i <= end; i++) {
				if (i == option)
					continue;
				if (vCourse3SE[option].getDay() == vCourse3SE[i].getDay() && vCourse3SE[option].getPeriod() == vCourse3SE[i].getPeriod())
					return true;
			}
			return false;
			break;
		}
	case 4:
		switch (major) {
		case 1:
			for (int i = start; i <= end; i++) {
				if (i == option)
					continue;
				if (vCourse4CS[option].getDay() == vCourse4CS[i].getDay() && vCourse4CS[option].getPeriod() == vCourse4CS[i].getPeriod())
					return true;
			}
			return false;
			break;
		case 2:
			for (int i = start; i <= end; i++) {
				if (i == option)
					continue;
				if (vCourse4DIS[option].getDay() == vCourse4DIS[i].getDay() && vCourse4DIS[option].getPeriod() == vCourse4DIS[i].getPeriod())
					return true;
			}
			return false;
			break;
		case 3:
			for (int i = start; i <= end; i++) {
				if (i == option)
					continue;
				if (vCourse4SE[option].getDay() == vCourse4SE[i].getDay() && vCourse4SE[option].getPeriod() == vCourse4SE[i].getPeriod())
					return true;
			}
			return false;
			break;
		}
	}
}

//output data in a new file
void outputToFile(int year, int major) {

	switch (year) {
	case 1: {
		ofstream outfYear1("year1new.txt");

		if (outfYear1.fail()) {
			cout << "file failed to open ";
			exit(0);
		}

		for (int i = 0; i < vCourse1.size(); i++) {
			outfYear1 << vCourse1[i].getName() << endl;
			outfYear1 << vCourse1[i].getCode() << endl;
			outfYear1 << vCourse1[i].getCrHrs() << endl;
			outfYear1 << vCourse1[i].getSemester() << endl;
			outfYear1 << (vCourse1[i].getPrerequisite().empty() ? "~" : vCourse1[i].getPrerequisite()) << endl;
			outfYear1 << (vCourse1[i].getMajor().empty() ? "~" : vCourse1[i].getMajor()) << endl;
			outfYear1 << (vCourse1[i].istaken() ? "TRUE" : "FALSE") << endl;
			outfYear1 << vCourse1[i].getDay() << endl;
			outfYear1 << vCourse1[i].getPeriod() << endl;
		}

		cout << "\nData has been outputed to a new file";
		break;
	}
	case 2: {
		ofstream outfYear2("year2new.txt");
		if (outfYear2.fail()) {
			cout << "file failed to open ";
			exit(0);
		}

		for (int i = 0; i < vCourse1.size(); i++) {
			outfYear2 << vCourse2[i].getName() << endl;
			outfYear2 << vCourse2[i].getCode() << endl;
			outfYear2 << vCourse2[i].getCrHrs() << endl;
			outfYear2 << vCourse2[i].getSemester() << endl;
			outfYear2 << (vCourse2[i].getPrerequisite().empty() ? "~" : vCourse2[i].getPrerequisite()) << endl;
			outfYear2 << (vCourse2[i].getPrerequisite().empty() ? "~" : vCourse2[i].getPrerequisite()) << endl;
			outfYear2 << (vCourse2[i].istaken() ? "TRUE" : "FALSE") << endl;
			outfYear2 << vCourse2[i].getDay() << endl;
			outfYear2 << vCourse2[i].getPeriod() << endl;
		}
		cout << "\nData has been outputed to a new file";
		break;
	}
	case 3:
		switch (major) {
		case 1: {
			ofstream outfYear3CS("year3CSnew.txt");

			if (outfYear3CS.fail()) {
				cout << "file failed to open ";
				exit(0);
			}

			for (int i = 0; i < vCourse3CS.size(); i++) {
				outfYear3CS << vCourse3CS[i].getName() << endl;
				outfYear3CS << vCourse3CS[i].getCode() << endl;
				outfYear3CS << vCourse3CS[i].getCrHrs() << endl;
				outfYear3CS << vCourse3CS[i].getSemester() << endl;
				outfYear3CS << (vCourse3CS[i].getPrerequisite().empty() ? "~" : vCourse3CS[i].getPrerequisite()) << endl;
				outfYear3CS << (vCourse3CS[i].getMajor().empty() ? "~" : vCourse3CS[i].getMajor()) << endl;
				outfYear3CS << (vCourse3CS[i].istaken() ? "TRUE" : "FALSE") << endl;
				outfYear3CS << vCourse3CS[i].getDay() << endl;
				outfYear3CS << vCourse3CS[i].getPeriod() << endl;
			}

			cout << "\nData has been outputed to a new file";
			break;
			break;
		}
		case 2: {
			{
				ofstream outfYear3DIS("year3DISnew.txt");

				if (outfYear3DIS.fail()) {
					cout << "file failed to open ";
					exit(0);
				}

				for (int i = 0; i < vCourse3DIS.size(); i++) {
					outfYear3DIS << vCourse3DIS[i].getName() << endl;
					outfYear3DIS << vCourse3DIS[i].getCode() << endl;
					outfYear3DIS << vCourse3DIS[i].getCrHrs() << endl;
					outfYear3DIS << vCourse3DIS[i].getSemester() << endl;
					outfYear3DIS << (vCourse3DIS[i].getPrerequisite().empty() ? "~" : vCourse3DIS[i].getPrerequisite()) << endl;
					outfYear3DIS << (vCourse3DIS[i].getMajor().empty() ? "~" : vCourse3DIS[i].getMajor()) << endl;
					outfYear3DIS << (vCourse3DIS[i].istaken() ? "TRUE" : "FALSE") << endl;
					outfYear3DIS << vCourse3DIS[i].getDay() << endl;
					outfYear3DIS << vCourse3DIS[i].getPeriod() << endl;
				}

				cout << "\nData has been outputed to a new file";
				break;
			}
		}
		case 3: {
			{
				ofstream outfYear3SE("year3SEnew.txt");

				if (outfYear3SE.fail()) {
					cout << "file failed to open ";
					exit(0);
				}

				for (int i = 0; i < vCourse3SE.size(); i++) {
					outfYear3SE << vCourse3SE[i].getName() << endl;
					outfYear3SE << vCourse3SE[i].getCode() << endl;
					outfYear3SE << vCourse3SE[i].getCrHrs() << endl;
					outfYear3SE << vCourse3SE[i].getSemester() << endl;
					outfYear3SE << (vCourse3SE[i].getPrerequisite().empty() ? "~" : vCourse3SE[i].getPrerequisite()) << endl;
					outfYear3SE << (vCourse3SE[i].getMajor().empty() ? "~" : vCourse3SE[i].getMajor()) << endl;
					outfYear3SE << (vCourse3SE[i].istaken() ? "TRUE" : "FALSE") << endl;
					outfYear3SE << vCourse3SE[i].getDay() << endl;
					outfYear3SE << vCourse3SE[i].getPeriod() << endl;
				}

				cout << "\nData has been outputed to a new file";
				break;
			}
		}
		}
		break;
	case 4:
		switch (major) {
		case 1: {
			ofstream outfYear4CS("year4CSnew.txt");

			if (outfYear4CS.fail()) {
				cout << "file failed to open ";
				exit(0);
			}

			for (int i = 0; i < vCourse4CS.size(); i++) {
				outfYear4CS << vCourse4CS[i].getName() << endl;
				outfYear4CS << vCourse4CS[i].getCode() << endl;
				outfYear4CS << vCourse4CS[i].getCrHrs() << endl;
				outfYear4CS << vCourse4CS[i].getSemester() << endl;
				outfYear4CS << (vCourse4CS[i].getPrerequisite().empty() ? "~" : vCourse4CS[i].getPrerequisite()) << endl;
				outfYear4CS << (vCourse4CS[i].getMajor().empty() ? "~" : vCourse4CS[i].getMajor()) << endl;
				outfYear4CS << (vCourse4CS[i].istaken() ? "TRUE" : "FALSE") << endl;
				outfYear4CS << vCourse4CS[i].getDay() << endl;
				outfYear4CS << vCourse4CS[i].getPeriod() << endl;
			}

			cout << "\nData has been outputed to a new file";
			break;
			break;
		}
		case 2: {
			{
				ofstream outfYear4DIS("year4DISnew.txt");

				if (outfYear4DIS.fail()) {
					cout << "file failed to open ";
					exit(0);
				}

				for (int i = 0; i < vCourse4DIS.size(); i++) {
					outfYear4DIS << vCourse4DIS[i].getName() << endl;
					outfYear4DIS << vCourse4DIS[i].getCode() << endl;
					outfYear4DIS << vCourse4DIS[i].getCrHrs() << endl;
					outfYear4DIS << vCourse4DIS[i].getSemester() << endl;
					outfYear4DIS << (vCourse4DIS[i].getPrerequisite().empty() ? "~" : vCourse4DIS[i].getPrerequisite()) << endl;
					outfYear4DIS << (vCourse4DIS[i].getMajor().empty() ? "~" : vCourse4DIS[i].getMajor()) << endl;
					outfYear4DIS << (vCourse4DIS[i].istaken() ? "TRUE" : "FALSE") << endl;
					outfYear4DIS << vCourse4DIS[i].getDay() << endl;
					outfYear4DIS << vCourse4DIS[i].getPeriod() << endl;
				}

				cout << "\nData has been outputed to a new file";
				break;
			}
		}
		case 3: {
			{
				ofstream outfYear4SE("year4SEnew.txt");

				if (outfYear4SE.fail()) {
					cout << "file failed to open ";
					exit(0);
				}

				for (int i = 0; i < vCourse4SE.size(); i++) {
					outfYear4SE << vCourse4SE[i].getName() << endl;
					outfYear4SE << vCourse4SE[i].getCode() << endl;
					outfYear4SE << vCourse4SE[i].getCrHrs() << endl;
					outfYear4SE << vCourse4SE[i].getSemester() << endl;
					outfYear4SE << (vCourse4SE[i].getPrerequisite().empty() ? "~" : vCourse4SE[i].getPrerequisite()) << endl;
					outfYear4SE << (vCourse4SE[i].getMajor().empty() ? "~" : vCourse4SE[i].getMajor()) << endl;
					outfYear4SE << (vCourse4SE[i].istaken() ? "TRUE" : "FALSE") << endl;
					outfYear4SE << vCourse4SE[i].getDay() << endl;
					outfYear4SE << vCourse4SE[i].getPeriod() << endl;
				}

				cout << "\nData has been outputed to a new file";
				break;
			}
		}
		}
		break;
	}
}