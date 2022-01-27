#include "guns.h"

int main()
{
    Weapon ak47;
    int choice;

    while (1 ) {
        
        cout << "Do you wish to 1 => Shoot or 2 => Reload?" << endl;
        cin >> choice;
        if (choice == 1) {
            ak47.Shoot();
        }
        else if (choice == 2) {
            ak47.Reload();
        }
        else {
            break;
        }


   }
}

