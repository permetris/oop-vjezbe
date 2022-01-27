
#pragma once
#include "Bird.h"

class Seagull : public Bird {
public:
	Seagull();
	int GetLegs() override;
	std::string GetSpecies() override;
private:
	int legNum;
	std::string species;

};
