#include "target.h"

int main()
{
    vector<Target> targets;
    Weapon deagle;
    int numberOfTargets;
    int counter = 0;
    srand(time(NULL));

    cout << "Enter the number of targets you wish to generate!";
    cin >> numberOfTargets;


    for (int i = 0; i < numberOfTargets; i++) {
        Target temp;


        temp.GenerateTarget();
        deagle.Shoot();

        if (checkHit(deagle.GetX(), deagle.GetY(), temp.GetUpperX()) == true) {
            counter++;
        }
   
        targets.push_back(temp);
    }
    cout << counter;

}

