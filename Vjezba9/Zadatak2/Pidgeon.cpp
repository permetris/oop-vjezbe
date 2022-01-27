#include "Pidgeon.h"

Pidgeon::Pidgeon() {
	species = "pidgeon";
	legNum = 2;
}

int Pidgeon::GetLegs()  {
	return legNum;
}
std::string Pidgeon::GetSpecies() {
	return species;
}
