#include <iostream>

using namespace std;


int MinMaxNumberArray(int arr[], int* min, int* max, int size) {

	
	if (size < 0) {

		return 0;
	}
	if (arr[size] > *max) {
		*max = arr[size - 1];
	}
	if (arr[size] < *min) {
		*min = arr[size];
	}

	MinMaxNumberArray(arr, min, max, size - 1);

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

	min = arr[size-1];
	max = arr[size-1];

	MinMaxNumberArray(arr, &min, &max, size-1);

	cout << "Min number in that array is: " << min << endl;
	cout << "Max number in that array is: " << max << endl;

	delete[] arr;

	return 0;

}