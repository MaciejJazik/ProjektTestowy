#include "stdafx.h"
#include "person.h"


person::person() {

}

person::person(string firstName, string secondName, int age, int height, string PESEL)
{
	this->FirstName = firstName;
	this->SecondName = secondName;
	this->Age = age;
	this->Height = height;
	this->PESEL = PESEL;
}

void person::setPersonData(string firstName, string secondName, int age, int height, string PESEL)
{
	this->FirstName = firstName;
	this->SecondName = secondName;
	this->Age = age;
	this->Height = height;
	this->PESEL = PESEL;
}

void person::getPersonData() {
	cout << "User: " << this->FirstName << " " << this->SecondName << ", age: " 
		<< this->Age << ", height: " << this->Height << "cm, PESEL: " << this->PESEL << endl;
}

person::~person()
{
}

employee::employee() {

}

employee::employee(shared_ptr<person> person, string department, float salary, string location) {//
	Person = person;
	this->Department = department;
	this->Salary = salary;
	this->Location = location;
}

void employee::setEmployeeData(shared_ptr<person> person, string department, float salary, string location) {//
	Person = person;
	this->Department = department;
	this->Salary = salary;
	this->Location = location;
}

void employee::getPersonData()
{
	cout << "ptr counter: " << Person.use_count() << endl;
	Person->getPersonData();
	cout << "User: " << Person->FirstName << " " << Person->SecondName << " " << this->Location  <<//<< ", PESEL: " << Person->PESEL
		", dep: " << this->Department << ", salary: " << this->Salary << endl;
}

employee::~employee() {

}
