#pragma once

#include "Part.h"

class Wheel : public Part
{
protected:
	float milage;
	float airPressure;

public:

	Wheel(char *name, char *manufacturer, int year, Profession profession, float milage, float airPressure);
	~Wheel();

	//gets
	float getMilage() const;
	float getAirPressure() const;

	//sets
	bool setMilage(float milage);
	bool setAirPressure(float milage);

	virtual float CalculatePriceForRepair();
};
