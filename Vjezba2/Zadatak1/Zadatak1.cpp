#include <iostream>

using namespace std;


void minAndMaxNumber(int arr[], int& min, int& max, int len) {


	for (int i = 1; i < len; i++) {

		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 1; i < len; i++) {

		if (arr[i] < min) {
			min = arr[i];
		}
	}

}


int main() {

	int* arr;
	int size;
	int min;
	int max;


	cout << "Enter the array size: " << endl;
	cin >> size;

	arr = new int[size];

	cout << "Enter the values for your array:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	min = arr[size - 1];
	max = arr[size - 1];

	minAndMaxNumber(arr, min, max, size);
	
	delete[] arr;

	return 0;
}