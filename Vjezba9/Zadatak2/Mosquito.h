#pragma once

#include "Insect.h"

class Mosquito : public Insect {
public:
	Mosquito();
	int GetLegs() ;
	std::string GetSpecies() ;

private:
	int legNum;
	std::string species;
};
