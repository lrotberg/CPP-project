#include <iostream>
#include "Coden.h"

Coden::Coden(char *name, char *manufacturer, int year, Profession profession, char* code)
	:Part(name, manufacturer, year, profession)
{

}

Coden::~Coden() {

}

char* Coden::getCode() const {
	return NULL;
}

bool Coden::setCode(char* code) {
	return false;
}

float Coden::CalculatePriceForRepair()  {
	return NULL;
}
