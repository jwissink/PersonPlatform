#include "Person.h"

std::vector<Person*>* Person::GetChildren()
{
	return &children;
}

std::vector<Person*>* Person::GetRelatives()
{
	return &relatives;
}

std::vector<Person*>* Person::GetSiblings()
{
	return &siblings;
}

void Person::AddChild(Person* aChild)
{
	children.push_back(aChild);
}

void Person::AddRelative(Person* aRelative)
{
	relatives.push_back(aRelative);
}

void Person::AddSibling(Person* aSibling)
{
	siblings.push_back(aSibling);
}

void Person::RemoveChild(Person* aChild)
{
	std::vector<Person*>::iterator it = 
}

void Person::RemoveRelative(Person* aRelative)
{
}

void Person::RemoveSibling(Person* aSibling)
{
}

Person* Person::GetFather()
{
	return nullptr;
}

Person* Person::GetMother()
{
	return nullptr;
}

Person* Person::GetSpouse()
{
	return nullptr;
}

Person* Person::GetPartner()
{
	return nullptr;
}

std::string Person::GetDateOfBirth()
{
	return std::string();
}

std::string Person::GetPlaceOfBirth()
{
	return std::string();
}

std::string Person::GetPostalCode()
{
	return std::string();
}

int Person::GetSSN()
{
	return 0;
}

Person::Person(std::string& aName, std::string& aSurname, int& anSSN)
{
}

Person::~Person()
{
}

void Person::SetFather(Person* aFather)
{
}

void Person::SetMother(Person* aMother)
{
}

void Person::SetSpouse(Person* aSpouse)
{
}

void Person::SetPartner(Person* aPartner)
{
}

void Person::SetDateOfBirth(std::string aDate)
{
}

void Person::SetPlaceOfBirth(std::string anAddress)
{
}

void Person::SetPostalCode(std::string aPostalCode)
{
}

void Person::SetName(std::string aName)
{
}

void Person::SetSurname(std::string aName)
{
}

void Person::setSSN(int anSSN)
{
}
