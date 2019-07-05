#include "Person.h"


Person::Person(std::string aName, std::string aSurname, int anSSN, char aGender, Person* aFather, Person* aMother, Person* aSpouse, Person* aPartner)
	:name(aName), //initialisation list
	surname(aSurname), 
	SSN(anSSN), 
	gender(aGender),
	father(aFather), 
	mother(aMother), 
	spouse(aSpouse), 
	partner(aPartner)
{

}

Person::~Person()
{
}
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
	//als ik een kind krijg, kan ik van het kind ook net zo goed deze als vader of moeder zetten
	if (gender == 'm') { //als ik man ben, kan ik mezelf als vader toevoegen
		if (aChild->GetFather() == nullptr) {   //kijken of ik nog geen vader heb
			aChild->SetFather(this);			//zoniet is deze Person* de vader
		}
	}
	else {				//als ik vrouw ben, kan ik mezelf als moeder toevoegen
		if (aChild->GetMother() == nullptr) {	//kijken of ik nog geen moeder heb
			aChild->SetMother(this);			//zoniet is deze Person* de moeder
		}
	}
	
}

void Person::AddRelative(Person* aRelative)
{
	//kijken of we er nog niet inzitten
	if (std::find(relatives.begin(), relatives.end(), aRelative) != relatives.end()) { 
		relatives.push_back(aRelative); //ok we hebben nu een family member!
	}
	
	//deze band gaat 2 kanten op. dus waarom niet gelijk bij het toevoegen ook bij de relative
	//onszelf toevoegen?
	
	//eerst dan alle relatives opvragen van diegene die we aan het toevoegen zijn
	std::vector<Person*>::iterator it = std::find(aRelative->GetRelatives()->begin(), aRelative->GetRelatives()->end(), this);
	//kijken of deze Person* daarin voorkomt
	if (it != aRelative->GetRelatives()->end()) {
		//zoniet
		aRelative->AddRelative(this);
		//add onszelf
	}
}

void Person::AddSibling(Person* aSibling)
{
	siblings.push_back(aSibling);
	std::vector<Person*>::iterator it = std::find(aSibling->GetSiblings()->begin(), aSibling->GetSiblings()->end(), this);
	//kijken of deze Person* daarin voorkomt
	if (it != aSibling->GetSiblings()->end()) {
		//zoniet
		aSibling->AddSibling(this);
		//add onszelf
	}
}

void Person::RemoveChild(Person* aChild)
{
	//children.erase(std::find(children.begin(), children.end(), aChild));<- zonder check

	std::vector<Person*>::iterator it = std::find(children.begin(), children.end(), aChild);
	if (it != children.end()) {
		children.erase(it);
	}
	else {
		//error?
	}
	
}

void Person::RemoveRelative(Person* aRelative)
{
	std::vector<Person*>::iterator it = std::find(relatives.begin(), relatives.end(), aRelative);
	if (it != relatives.end()) {
		relatives.erase(it);
	}
	else {
		//error?
	}
}

void Person::RemoveSibling(Person* aSibling)
{
	std::vector<Person*>::iterator it = std::find(siblings.begin(), siblings.end(), aSibling);
	if (it != siblings.end()) {
		siblings.erase(it);
	}
	else {
		//error?
	}

}

Person* Person::GetFather()
{
	if (father != nullptr) {
		return father;
	}
	//error wat nu!?
	return father;
	
}

Person* Person::GetMother()
{
	if (mother != nullptr) {
		return mother;
	}
	return mother;
}

Person* Person::GetSpouse()
{
	if (spouse != nullptr) {
		return spouse;
	}
	return spouse;
}

Person* Person::GetPartner()
{
	if (partner != nullptr) {
		return partner;
	}
	return partner;
}

std::string Person::GetDateOfBirth()
{
	return dateOfBirth;
}

std::string Person::GetPlaceOfBirth()
{
	return placeOfBirth;
}

std::string Person::GetPostalCode()
{
	return postalCode;
}

int Person::GetSSN()
{
	return SSN;
}



void Person::SetFather(Person* aFather)
{
	father = aFather;
}

void Person::SetMother(Person* aMother)
{
	mother = aMother;
}

void Person::SetSpouse(Person* aSpouse)
{
	spouse = aSpouse;
}

void Person::SetPartner(Person* aPartner)
{
	partner = aPartner;
}

void Person::SetDateOfBirth(std::string aDate)
{
	dateOfBirth = aDate;
}

void Person::SetPlaceOfBirth(std::string anAddress)
{
	placeOfBirth = anAddress;
}

void Person::SetPostalCode(std::string aPostalCode)
{
	postalCode = aPostalCode;
}

void Person::SetName(std::string aName)
{
	name = aName;
}

void Person::SetSurname(std::string aName)
{
	surname = aName;
}

void Person::setSSN(int anSSN)
{
	SSN = anSSN;
}
