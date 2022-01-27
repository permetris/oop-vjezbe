#include "target.h"

bool checkHit(const double shootX,const double shootY, const double targetX) {
	
	return ((shootX >= (targetX - 5)) && shootX <= targetX);
}
void Weapon::Shoot() {
	x =  rand()%1000;
	y =  rand()% 5;

}
void Weapon::Reload() {
	currentBullets = clipSize;
}
void Weapon::SetClipSize(int num) {
	clipSize = num;
	Reload();
}
void Target::GenerateTarget() {

	upperX = rand()%1000;
	lowerX = upperX - 5;
}
double Target::GetUpperX(){ return upperX; }
double Weapon::GetX() { return x; }
double Weapon::GetY() { return y; }