#pragma once

#include "Malfunction.h"
#include "Veichle.h"
#include "Owner.h"

class VeichleProblems
{
private:
	bool setId(int id);
	static int ID;

protected:
	int id;
	Malfunction** malfunction;
	char* entryDate;
	Owner owner;
	Veichle* veichle;

public:
	VeichleProblems();
	VeichleProblems(const VeichleProblems & VeichleProblem);
	VeichleProblems(Owner owner, Veichle& veichle, char* entryDate);
	~VeichleProblems();

	VeichleProblems operator<<(Malfunction& malfunction); //Add malfunction
	void ShowAllMalfunction() const;
	void ShowVeichleProblems() const;
	bool CanCloseCase() const;
	float PriceForRepair() const;
	char* toString() const; // for print

					  //gets
	int getId() const;
	Malfunction** getMalfunction() const;
	char* getEntryDate() const;
	Veichle* getVeichle() const;
	Owner* getOwner() const;

	//sets
	bool setMalfunction(Malfunction* malfunction);
	bool setEntryDate(char* entryDate);
	bool setVeichle(Veichle* veichle);
	bool setOwner(Owner owner);
};
