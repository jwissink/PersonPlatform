#pragma once
#include <vector>
#include "Person.h"

class Course;

class ClassRoom
{
public:
	ClassRoom(std::string aName, Person* aCoach = nullptr, Course* aCourse = nullptr);
	~ClassRoom();

	//collection manipulation
	void AddMember(Person* aMember);
	void addMembers(std::vector<Person*> someMembers);
	
	//setters
	void SetCohort(std::string aCohort);
	void SetName(std::string aName);
	
	//getters
	std::vector<Person*>* GetMembers();
	std::string GetCohort();
	std::string GetName();
	Person* GetCoach();
	


private:
	std::vector<Person*> members;
	std::string cohort;
	std::string name;

	Course* course;
	Person* coach;
	

};

