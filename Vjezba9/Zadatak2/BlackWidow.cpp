#pragma once
#include "BlackWidow.h"

BlackWidow::BlackWidow() {
	legNum = 8;
	species = "Black Widow";

}
int BlackWidow::GetLegs() {
	return legNum;
}
std::string BlackWidow::GetSpecies() {
	return species;
}
