#pragma once
#include "Bird.h"

class Pidgeon : public Bird {
public:
	Pidgeon();
	int GetLegs() override;
	std::string GetSpecies() override;

private:
	int legNum;
	std::string species;

};	