#pragma once
#include "Seagull.h"

Seagull::Seagull(){
	
	species = "Seagull";
	legNum = 2;
}
int Seagull::GetLegs() {
	return legNum;
}
std::string Seagull::GetSpecies() {
	return species;
}
