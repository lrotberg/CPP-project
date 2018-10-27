#pragma once
#include "Profession.h"

class Part
{
protected:
	char *name;
	char *manufacturer;
	int year;
	Profession profession;

	Part(char *name, char *manufacturer, int year, Profession profession);

public:

	virtual ~Part();
	virtual float CalculatePriceForRepair() = 0;

	//gets
	char* getName() const;
	char* getManufacturer() const;
	int getYear() const;
	Profession getProfession() const;

	//sets
	bool setName(char* name);
	bool setManufacturer(char *manufacturer);
	bool setYear(int year);
	bool setProfession(Profession profession);
};