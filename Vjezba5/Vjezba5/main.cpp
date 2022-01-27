#include "coordinates.h"



int main(){
	Coordinates inputCoordinate,randomCoordinate;
	int lowerRange, upperRange;

	cout << "Enter lower range: ";
	cin >> lowerRange;

	cout << "Enter upper range: ";
	cin >> upperRange;


	inputCoordinate.SetCoordinate(-8, 3, 20);
	randomCoordinate.SetCoordinateRandom(lowerRange, upperRange);

	cout << inputCoordinate.getX() << " " << inputCoordinate.getY() << " " << inputCoordinate.getZ()<< " " << endl;
	cout << randomCoordinate.getX() << " " << randomCoordinate.getY() << " " << randomCoordinate.getZ() << " " << endl;

	cout << "2D distance of these coordinates is: " << inputCoordinate.Calculate2Distance(randomCoordinate.getX(), randomCoordinate.getY(), randomCoordinate.getZ())<<endl;
	cout << "3D distance of these coordinates is: " << inputCoordinate.Calculate3Distance(randomCoordinate.getX(), randomCoordinate.getY(), randomCoordinate.getZ())<<endl;

	return 0;
}

