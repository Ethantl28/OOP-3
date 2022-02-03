#pragma once
#include<string>
#include<vector>

using std::string;
using std::vector;

class Student {
private:
	string sLastName;
	string sFirstName;
	int iBirthDate;
	int iPnum;
	bool bCrimRec;
	string sModule;

public:
	Student(); // Default constructor
	Student(string sLastNameIn, string sFirstNameIn, int iBirthDateIn); //Overriden constructor.
	
	void setLastName(string sLastIn);
	void setFirstName(string sFirstIn);

	string getLastName();
	string getFirstName();

	void setBirthDate(int iBirthDateIn);
	int getBirthDate();
	void setCrimRec(bool bCrimRecIn);

	void setPNum(int iPNumIn);
	int getPNum();

	void inputModule(string sModulesIn);

	string getModules();
};
