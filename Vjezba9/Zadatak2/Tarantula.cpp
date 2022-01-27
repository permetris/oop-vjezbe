#include "Tarantula.h"

Tarantula::Tarantula() {
	legNum = 8;
	species = "Tarantula";

}
int Tarantula::GetLegs() {
	return legNum;
}
std::string Tarantula::GetSpecies() {
	return species;
}
