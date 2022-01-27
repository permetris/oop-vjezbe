#pragma once
#include "Spider.h"
#include <string>


class Tarantula : public Spider{
	
public:
	Tarantula();
	int GetLegs();
	std::string GetSpecies() ;

private:
	int legNum;
	std::string species;

};