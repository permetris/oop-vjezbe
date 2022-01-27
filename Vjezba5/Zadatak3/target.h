#include <cstddef>
#include <iostream>
#include <time.h>
#include <vector>
#include <cmath>

using namespace std;
bool checkHit(double, double, double);

class Weapon {
private:
	double x, y = 0;
	
	int clipSize = 0;
	int currentBullets = 0;

public:
	void Shoot();
	void Reload();
	void SetClipSize(int);
	double GetY();
	double GetX();


};
class Target {
private:
	double upperX, lowerX = 0;
	double lowerY = 0;
	double upperY = 5;
	bool state;

public:
	void  GenerateTarget();
	double  GetUpperX();
	double GetLowerX();
}; 