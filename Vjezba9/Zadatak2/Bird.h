#pragma once
#include "Animals.h"


class Bird : public Animal
{
public:
	std::string GetSpecies();
	int GetLegs();
};
