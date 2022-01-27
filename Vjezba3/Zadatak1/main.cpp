#include <iostream>
#include "vectors.h"

using namespace std;

int main(){
   
	vector<int> inputVector;
	vector<int> rangeVector;
	vector<int> createdVector;

	int size, min, max, val;

	cout << "Enter the size for the first vector: "<<endl;
	cin >> size;

	vectorInput(inputVector, size);
	vectorPrint(inputVector);

	cout << "Enter lower range of second vector: ";
	cin >> min;

	cout << "Enter upper range of second vector: ";
	cin >> max;
	
	vectorInputRange(rangeVector, min, max);
	vectorPrint(rangeVector);

	cout << "Vector created by these vectors is: ";
	vectorDifference(createdVector, inputVector, rangeVector);
	vectorPrint(createdVector);

	cout << "Enter value you wish to erase from vector above: ";
	cin >> val;

	removeValueFromVector(createdVector, val);




}

