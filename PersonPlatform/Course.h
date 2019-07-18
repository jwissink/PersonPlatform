#pragma once
#include <string>
#include <vector>
#include "Person.h"
#include "ClassRoom.h"

class Course
{
private:
	int ID;
	std::string name;
	Person* courseLeader;
	std::vector<ClassRoom*> classes;
public:
	Course(std::string aName, int anID, Person* aCourseLeader = nullptr);
	~Course();
	void SetName(std::string aName);
	void SetID(int anID);
	void SetCourseLeader(Person* aCourseLeader);

	void AddClass(ClassRoom* aClass);
	void AddClasses(std::vector<ClassRoom*> someClasses);

	void RemoveClass(ClassRoom* aClass);
	void RemoveClasses(std::vector<ClassRoom*> classesToRemove);


	std::vector<ClassRoom*>* GetClasses();
	std::vector<ClassRoom*> GetClasses(Person* aCoach);


};

