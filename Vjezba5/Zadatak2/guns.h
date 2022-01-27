#include <cstddef>
#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

class Weapon {
	private:
		double x, y;
		int clipSize  = 32;
		int currentBullets = 0;

	public:
		void Shoot();
		void Reload();


};