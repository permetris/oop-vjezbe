#pragma once

#include "Animals.h"
#include <vector>
#include <string>
#include <iostream>


class Counter {
private:
	int legSum;
public:
	Counter();
	void Count(std::vector<Animal*> &animals);
};
