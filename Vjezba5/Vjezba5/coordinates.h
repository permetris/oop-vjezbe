#include <cstddef>
#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;


class Coordinates {
	private:
		double x, y, z = 0;

	public:
		void SetCoordinate(double , double , double );
		void SetCoordinateRandom(int, int);
		double Calculate2Distance(double, double, double);
		double Calculate3Distance(double, double, double);
		double getX();
		double getY();
		double getZ();
};