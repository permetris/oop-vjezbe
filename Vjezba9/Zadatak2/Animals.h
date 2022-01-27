#pragma once
#include <string>

class Animal{
public:
	virtual int GetLegs() = 0;
	virtual std::string GetSpecies() = 0;
	virtual ~Animal() = 0;

};

