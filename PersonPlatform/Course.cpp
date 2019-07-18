#include "Course.h"


Course::Course(std::string aName, int anID, Person* aCourseLeader)
{
}

Course::~Course()
{
}

void Course::SetName(std::string aName)
{
	name = aName;
}

void Course::SetID(int anID)
{
	ID = anID;
}

void Course::SetCourseLeader(Person* aCourseLeader)
{
	courseLeader = aCourseLeader;
}

void Course::AddClass(ClassRoom* aClass)
{
	classes.push_back(aClass);
	//misschien controleren of ie er niet al inzit?
}

void Course::AddClasses(std::vector<ClassRoom*> someClasses)
{
	classes.insert(classes.end(), someClasses.begin(), someClasses.end());
}

void Course::RemoveClass(ClassRoom* aClass)
{
	std::vector<ClassRoom*>::iterator it = std::find(classes.begin(), classes.end(), aClass);
	if (it != classes.end()) {
		classes.erase(it);
	}
	else {
		//error?
	}
}

void Course::RemoveClasses(std::vector<ClassRoom*> classesToRemove)
{
	
	for (ClassRoom* roomToRemove : classesToRemove) {
		std::vector<ClassRoom*>::iterator it = std::find(classes.begin(), classes.end(), roomToRemove);
		if (it != classes.end()) {
			classes.erase(it);
		}
		else {
			//error?
		}
	}
}

std::vector<ClassRoom*>* Course::GetClasses()
{
	return &classes;
}

std::vector<ClassRoom*> Course::GetClasses(Person* aCoach)
{
	std::vector<ClassRoom*> returnVector;
	for (ClassRoom* room : classes) {
		if (room->GetCoach() == aCoach) {
			returnVector.push_back(room);
		}
	}
	return returnVector;
}
