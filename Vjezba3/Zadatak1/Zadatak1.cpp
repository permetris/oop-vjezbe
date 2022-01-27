#include "vectors.h"
#include <vector>
#include <algorithm> 
#include <iostream>

using namespace std;

void vectorInput(vector<int>& vec, int size) {
	int temp;
	cout << "Enter vector values: "<<endl;
	for (int i = 0; i < size; i++) {

		cout << i << ". value: ";
		cin >> temp;
		vec.push_back(temp);
	}
	cout << endl;
}
void vectorInputRange(vector<int>& vec, int min, int max) {

	int temp;
	int counter = 0;
	
	cout << "Enter vector values inside of the previously input range. Input is terminated if the number is outside of range."<<endl;
	
	while (1) {
		cout << counter << ". value: ";
		cin >> temp;
		if (temp > min && temp < max) {
			counter++;
			vec.push_back(temp);
		}
		else {
			cout << endl;
			cout << "Given number is out of range." << endl;
			break;
		}
	}
}
void vectorPrint(const vector<int>& vec) {

	cout << "Vector: ";
	for (auto i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}
	cout << endl<<endl;
}
void vectorDifference(vector<int>& createdVec, vector<int>& vec1, vector<int>& vec2) {

	vector<int>::iterator it;
	int sum = 0;

	for ( auto i : vec1) {

		it = find(vec2.begin(), vec2.end(), i);
		if (it != vec2.end()) {
			createdVec.push_back(i);
		}

	}

	for (auto i = createdVec.begin(); i < createdVec.end(); i++) {
		sum = sum + *i;
	}

	sort(createdVec.begin(), createdVec.end());
	createdVec.emplace(createdVec.begin(),0);
	createdVec.push_back(sum);

}
void removeValueFromVector(vector<int>& vec, int val) {
	
	vector<int>::iterator it = find(vec.begin(), vec.end(), val);

	vectorPrint(vec);
	vec.erase(it);
	vectorPrint(vec);
}
