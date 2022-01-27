#include "Fly.h"

Fly::Fly() {
	species = "Fly";
	legNum = 4;
}

int Fly::GetLegs() {
	return legNum;
}
std::string Fly::GetSpecies() {
	return species;
}
