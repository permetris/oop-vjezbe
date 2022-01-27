#include "Counter.h"

Counter::Counter() {
	legSum = 0;
}
void Counter::Count(std::vector<Animal*> &animals){
	for (Animal * el : animals) {

		std::cout << "Dodan " << el->GetSpecies()<<std::endl;
		legSum += el->GetLegs();
	}
	std::cout << "Ukupan broj noga je: " << legSum << std::endl;
}