#include <iostream>

using namespace std;


void minAndMaxNumber(int arr[], int *min, int *max,int len) {
	
	
	for (int i = 1; i < len; i++) {

		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
	for (int i = 1; i < len; i++) {

		if (arr[i] < *min) {
			*min = arr[i];
		}
	}
	
}


int main() {

	int* arr;
	int size;

	int min, max;

	cout << "Enter the array size: " << endl;
	cin >> size;

	arr = new int[size];

	cout << "Enter the values for your array:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	min = arr[0];
	max = arr[0];

	minAndMaxNumber(arr,&min,&max,size);

	cout << "Min number in array is: " << min << endl;
	cout << "Max number in array is: " << max << endl;

	delete[] arr;

	return 0;
}