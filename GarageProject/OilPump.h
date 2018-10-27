#pragma once

#include "Part.h"

class OilPump : public Part
{
protected:
	float volume;

public:
	OilPump(char *name, char *manufacturer, int year, float volume);
	~OilPump();

	float getVolume() const;
	bool setVolume(float volume);

	virtual float CalculatePriceForRepair();
};