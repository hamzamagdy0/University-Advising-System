#include "MyForm.h"
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
using namespace msclr::interop;
using namespace System;
using namespace System::Windows::Forms;
bool CheckCourseClash(String^ course, String^ day, String^ time);
[STAThread]
bool CheckCourseClash(String^ course, String^ day, String^ time)
{
    ifstream file("schedule.txt");
    string line;

    while (getline(file, line))
    {
        string courseName, courseDay, courseTime;
        istringstream iss(line);

        if (!(iss >> courseName >> courseDay >> courseTime)) // Read course details from file
            continue;

        // Compare course details with the input
        if (courseName == msclr::interop::marshal_as<std::string>(course) &&
            courseDay == msclr::interop::marshal_as<std::string>(day) &&
            courseTime == msclr::interop::marshal_as<std::string>(time))
        {
            return true; // Clash found
        }
    }

    return false; // No clash found
}


void main(cli::array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew guifinal::MyForm);

}
