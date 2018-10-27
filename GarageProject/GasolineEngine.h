#pragma once
#include "Engine.h"

class GasolineEngine : public Engine
{
protected:
	float volume;

public:
	GasolineEngine(char *name, char *manufacturer, int year, Profession profession, float milage, int horsePower, float volume);
	~GasolineEngine();

	float getVolume() const;
	bool setVolume(float volume);

	virtual float CalculatePriceForRepair();

};