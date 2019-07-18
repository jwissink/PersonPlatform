// PersonPlatform.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Person.h"

int main()
{
	std::vector<Person*> people;

	Person* me = new Person("Jesse", "wissink", 199834771, 'm');
	people.push_back(me);
	Person* myFather = new Person("Father", "Wissink", 199834769, 'm');
	people.push_back(myFather);
	Person* myMother = new Person("Mother", "Nordkamp", 199755332, 'v');
	people.push_back(myMother);
	Person* myBrother = new Person("Brother", "Wissink", 199834770, 'm');
	people.push_back(myBrother);
	myFather->AddChild(me);
	myMother->AddChild(myBrother);
	me->AddSibling(myBrother);
	while (true) {

	}

	return 0;
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
