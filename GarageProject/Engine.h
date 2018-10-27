#pragma once
#include "Part.h"

class Engine : public Part
{
protected:
	float milage;
	int horsePower;
	Engine(char *name, char *manufacturer, int year, Profession profession, float milage, int horsePower);

public:
	virtual ~Engine();
	float getMilage() const;
	int getHorsePower() const;

	bool setMilage(float milage);
	bool setHorsePower(int horsePower);

	virtual float CalculatePriceForRepair() = 0;
};