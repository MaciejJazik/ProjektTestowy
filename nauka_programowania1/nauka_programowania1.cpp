// nauka_programowania1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "person.h"
#include <memory>

using namespace std;


int main()
{
	unique_ptr <person> Ola(new person);
	unique_ptr <person> Ola2;
	Ola->setPersonData("Ola", "Nowak", 21, 170, "96042112345");


	person *Jan = new person("Jan", "Kowalski", 20, 190, "95021094521");
	//-----------------------------------*****----------------------------------

	shared_ptr <person> Olaf(new person("Olaf", "Lubaszenko", 22, 150, "95012592012"));
	//Olaf->setPersonData("Olaf", "Lubaszenko", 22, 150, "95012592012");

	unique_ptr <employee> OlafWorker(new employee);
	OlafWorker->setEmployeeData(Olaf, "hr", 5000.00, "room 237");

	cout << "employee: " << endl;
	OlafWorker->getPersonData();

	cout << "person: " << endl;
	Jan->getPersonData();

	cout << "czy ola puste? Ola: " << (Ola == nullptr) << "; Ola2: " << (Ola2 == nullptr) << endl;
	Ola->getPersonData();

	Ola2 = move(Ola);

	cout << "czy ola puste? Ola: " << (Ola == nullptr) << "; Ola2: "<< (Ola2==nullptr)<< endl;
	if (Ola != nullptr)
	{
		Ola->getPersonData();
	}
	if(Ola2!=nullptr)
		Ola2->getPersonData();

	(*Jan).getPersonData();

	delete Jan;

	system("pause");
    return 0;
}

