#pragma once

#include <string>
#include <set>
using namespace std;
#include "Person.h"
#include "Profession.h"

class Worker : public Person
{
protected:
	string workerNumber;
	set<Profession> workerProffesion;

public:
	Worker(string firstName, string lastName, string phone, string workerNumber, Profession p);
	~Worker();

	//gets
	string getWorkerNumber() const;
	set<Profession> GetProfessions() const;

	void setWorkerNumber(string workerNumber);
	void addProfession(Profession p);
};