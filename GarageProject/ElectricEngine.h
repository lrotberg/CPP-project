#pragma once
#include "Engine.h"

class ElectricEngine : public Engine
{
protected:
	float power;

public:
	ElectricEngine(char *name, char *manufacturer, int year, Profession profession, float milage, int horsePower, float power);
	~ElectricEngine();

	float getPower() const;
	bool setPower(float volume);

	virtual float CalculatePriceForRepair();

};