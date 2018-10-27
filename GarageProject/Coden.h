#pragma once

#include "Part.h"

class Coden : public Part
{
protected:
	char* code;

public:
	Coden(char *name, char *manufacturer, int year, Profession profession, char* code);
	~Coden();

	char* getCode() const;
	bool setCode(char* code);
	virtual float CalculatePriceForRepair() ;
};