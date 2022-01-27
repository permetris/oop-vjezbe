#include "coordinates.h"
double Coordinates::getX() { return x; }
double Coordinates::getY() { return y; }
double Coordinates::getZ() { return z; }


double GetLowerX();
void Coordinates::SetCoordinate(double i, double j, double k) {
	x = i;
	y = j;
	z = k;
}
void Coordinates::SetCoordinateRandom(int lowerRange, int upperRange) {
	srand(time(NULL));
	x = double(lowerRange + rand() % ((upperRange +1)  - lowerRange));
	y = double(lowerRange + rand() % ((upperRange + 1) - lowerRange));
	z = lowerRange + rand() % ((upperRange + 1) - lowerRange);
}
double Coordinates::Calculate2Distance(const double i, const double j, const double k) {
	
	return sqrt(pow(i - x, 2) + pow(j - y, 2));
}
double Coordinates::Calculate3Distance(const double i, const double j, const double k) {

	return sqrt(pow(i - x, 2) + pow(j - y, 2) + pow(k -z , 2));
}
