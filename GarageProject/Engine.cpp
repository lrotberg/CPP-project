#include <iostream>
#include "Engine.h"

Engine::Engine(char *name, char *manufacturer, int year, Profession profession, float milage, int horsePower)
	:Part(name, manufacturer, year, profession) {

}

Engine::~Engine() {

}

float Engine::getMilage() const {
	return NULL;
}

int Engine::getHorsePower() const {
	return NULL;
}

bool Engine::setMilage(float milage) {
	return false;
}

bool Engine::setHorsePower(int horsePower) {
	return false;
}