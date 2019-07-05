// PersonPlatform.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"

int main()
{
	std::vector<Person*> people;

	Person* ik = new Person("Jesse", "wissink", 199834771, 'm');
	people.push_back(ik);
	Person* mijnVader = new Person("Rudy", "Wissink", 199834769, 'm');
	people.push_back(mijnVader);
	Person* mijnMoeder = new Person("Cecilia", "Nordkamp", 199755332, 'v');
	people.push_back(mijnMoeder);
	Person* mijnBroer = new Person("Robi", "Wissink", 199834770, 'm');
	people.push_back(mijnBroer);
	mijnVader->AddChild(ik);
	mijnMoeder->AddChild(mijnBroer);
	ik->AddSibling(mijnBroer);
	while (true) {

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
