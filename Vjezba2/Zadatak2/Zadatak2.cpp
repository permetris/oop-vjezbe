#include <iostream>

using namespace std;


int& minAndMaxNumber(int arr[], int index) {

	return arr[index];

}


int main() {

	int* arr;
	int size;
	int index;


	cout << "Enter the array size: " << endl;
	cin >> size;

	arr = new int[size];

	cout << "Enter index of array number you want to increment: " << endl;
	cin >> index;

	cout << "Enter the values for your array:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	minAndMaxNumber(arr, index)++;
	cout << arr[index];

	delete[] arr;

	return 0;
}