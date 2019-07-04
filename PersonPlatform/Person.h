#pragma once
#include <vector>
#include <string>
#include <algorithm>

class Person
{
public:
	Person(std::string& aName, std::string& aSurname, int& anSSN);
	~Person();

	//setters
	void SetFather(Person* aFather);
	void SetMother(Person* aMother);
	void SetSpouse(Person* aSpouse);
	void SetPartner(Person* aPartner);
	void SetDateOfBirth(std::string aDate);
	void SetPlaceOfBirth(std::string anAddress);
	void SetPostalCode(std::string aPostalCode);
	void SetName(std::string aName);
	void SetSurname(std::string aName);
	void setSSN(int anSSN);

	//Person getters
	Person* GetFather();
	Person* GetMother();
	Person* GetSpouse();
	Person* GetPartner();
	
	//Variable getters
	std::string GetDateOfBirth();
	std::string GetPlaceOfBirth();
	std::string GetPostalCode();
	int GetSSN();

	//collection getters
	std::vector<Person*>* GetChildren();
	std::vector<Person*>* GetRelatives();
	std::vector<Person*>* GetSiblings();
	
	//collection manipulation
	void AddChild(Person* aChild);
	void AddRelative(Person* aRelative);
	void AddSibling(Person* aSibling);

	void RemoveChild(Person* aChild);
	void RemoveRelative(Person* aRelative);
	void RemoveSibling(Person* aSibling);

private:
	Person* father;
	Person* mother;
	Person* spouse;
	Person* partner;

	std::string dateOfBirth;
	std::string placeOfBirth;
	std::string address;
	std::string postalCode;
	std::string name;
	std::string surname;

	int SSN;
	
	std::vector<Person*> children;
	std::vector<Person*> relatives;
	std::vector<Person*> siblings;

};

