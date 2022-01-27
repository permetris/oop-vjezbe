#include <iostream>
#include <vector>
#include "Animals.h"
#include "Pidgeon.h"
#include "Seagull.h"
#include "Fly.h"
#include "Mosquito.h"
#include "BlackWidow.h"
#include "Tarantula.h"
#include "Counter.h"


using namespace std;

int main()
{
    vector<Animal*> animals;
    Counter counter;

    animals.push_back(new Seagull);
    animals.push_back(new Pidgeon);
    animals.push_back(new BlackWidow);
    animals.push_back(new Tarantula);
    animals.push_back(new Fly);
    animals.push_back(new Mosquito);

    counter.Count(animals);

    
    return 0;  
}
