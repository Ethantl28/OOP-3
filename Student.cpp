#include"Student.h" //If this is not recognised, you need to make the path relative to the directory that you are using by moving the link one directory up.
#include<iostream>


Student::Student() {}; //Default constructor.
Student::Student(string sLastNameIn, string sFirstNameIn, int iBirthDateIn) {
	sLastName = sLastNameIn;
	sFirstName = sFirstNameIn;
	iBirthDate = iBirthDateIn;
}

string Student::getFirstName() {
	return sFirstName;
};

string Student::getLastName() {
	return sLastName;
};

void Student::setLastName(string sLastIn) {
	sLastName = sLastIn;
};
void Student::setFirstName(string sFirstIn) {
	sFirstName = sFirstIn;
};

void Student::setBirthDate(int iBirthDateIn) {
	int iNumDigits = std::to_string(iBirthDateIn).length(); //More efficient ways of finding length of int input, but this is for readable code.
	
	if (iNumDigits == 6) {
		iBirthDate = iBirthDateIn;
	}
	else {
		std::cout << "Error in the input!" << std::endl;
	}
};

int Student::getBirthDate() {
	return iBirthDate;
};

void Student::setCrimRec(bool bCrimRecIn) {
	bCrimRec = bCrimRecIn;
};

void Student::setPNum(int iPNumIn) {
	iPnum = iPNumIn;
};

int Student::getPNum() {
	return iPnum;
};

void Student::inputModule(string sModuleIn) {
	sModule = sModuleIn;
};

string Student::getModules() {
	return sModule;
};

