#pragma once
#include <cstddef>


using namespace std;

class Point
{
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(double x2, double y2) {
		x = x2;
		y = y2;
	}
	
	double GetX();
	double GetY();
	

private:
	double x, y;
};

