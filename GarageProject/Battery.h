#pragma once
#include "Part.h"


class Battery : public Part
{
protected:
	float milage;

public:
	Battery(char *name, char *manufacturer, int year, Profession profession, float milage);
	~Battery();

	float getMilage() const;
	bool setMilage(float milage);

	virtual float CalculatePriceForRepair();
};