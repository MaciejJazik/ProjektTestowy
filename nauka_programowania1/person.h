#pragma once
#include <string>
#include <iostream>
#include <memory>

using namespace std;

class person
{
public:
	int Height;
	int Age;
	string FirstName;
	string SecondName;
protected:
	string PESEL;
public:
	person();
	person(string firstName, string secondName, int age, int height, string PESEL);
	void setPersonData(string firstName, string secondName, int age, int height, string PESEL);
	virtual void getPersonData();
	virtual ~person();
};

class employee : public person
{
public:
	string Department;
	float Salary;
	string Location;
	shared_ptr<person> Person;
public:
	employee();
	employee(shared_ptr<person> person, string department, float salary, string location);
	void setEmployeeData(shared_ptr<person> person, string department, float salary, string location);//
	void getPersonData();
	~employee();
};

