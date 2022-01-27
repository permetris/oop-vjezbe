#pragma once
#include "Spider.h"

class BlackWidow : public Spider {

public:
	BlackWidow();
	int GetLegs();
	std::string GetSpecies();

private:
	int legNum;
	std::string species;

};