#include "Mosquito.h"


Mosquito::Mosquito() {
	species = "Mosquito";
	legNum = 6;
}

int Mosquito::GetLegs() {
	return legNum;
}
std::string Mosquito::GetSpecies() {
	return species;
}
