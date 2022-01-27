#pragma once
#include "Insect.h"

class Fly : public Insect {
public:
	Fly();
	int GetLegs() ;
	std::string GetSpecies() ;

private:
	int legNum;
	std::string species;

};
