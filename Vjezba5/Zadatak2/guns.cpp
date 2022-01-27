#include "guns.h"


void Weapon::Shoot() {
	if (currentBullets == 0) {
		cout << "Seems like you're out of bullets partner! Better reload!" << endl;
	}
	else {
		cout << "Pew Pew!!!" << endl;
		currentBullets--;
	}

}
void Weapon::Reload() {
	currentBullets = clipSize;
}