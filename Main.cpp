#include "Student.h"
#include<iostream>

using namespace std;

string GetStudentInput(string name);
int GetStudentBDay();
int GetStudentPnum();

int main() {

	Student mainStudent;
	Student secondStudent;

	mainStudent.setFirstName(GetStudentInput("first"));
	mainStudent.setLastName(GetStudentInput("last"));
	mainStudent.setBirthDate(GetStudentBDay());
	mainStudent.inputModule(GetStudentInput("course"));
	mainStudent.setPNum(GetStudentPnum());

	cout << "\nStudent Name: " << mainStudent.getFirstName() << " " << mainStudent.getLastName() << endl;
	cout << "Birthdate: " << mainStudent.getBirthDate() << endl;
	cout << "Student Number: P" << mainStudent.getPNum() << endl;
	cout << "Course: " << mainStudent.getModules() << endl;

	system("pause");
	return 0;
}

string GetStudentInput(string name)
{
	string studentName;
	cout << "Please enter your " << name << " name: (If more than one word, please use '_' ";
	cin >> studentName;
	return studentName;
}

int GetStudentBDay()
{
	int bDay;
	cout << "Please enter your Birthday (e.g 230703): ";
	cin >> bDay;
	return bDay;
}

int GetStudentPnum()
{
	int pNum;
	cout << "Please enter your P number: P";
	cin >> pNum;
	return pNum;
}
