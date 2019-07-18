#include "ClassRoom.h"

ClassRoom::ClassRoom(std::string aName, Person* aCoach, Course* aCourse)
	:name(aName), coach(aCoach), course(aCourse)
{

}

ClassRoom::~ClassRoom()
{
}

void ClassRoom::AddMember(Person* aMember)
{
	members.push_back(aMember);
}

void ClassRoom::addMembers(std::vector<Person*> someMembers)
{
	members.insert(members.end(), someMembers.begin(), someMembers.end());
}

void ClassRoom::SetCohort(std::string aCohort)
{
	cohort = aCohort;
}

void ClassRoom::SetName(std::string aName)
{
	name = aName;
}

std::vector<Person*>* ClassRoom::GetMembers()
{
	return &members;
}

std::string ClassRoom::GetCohort()
{
	return cohort;
}

std::string ClassRoom::GetName()
{
	return name;
}

Person* ClassRoom::GetCoach()
{
	return coach;
}
