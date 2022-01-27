#include <iostream>
#include <ctype.h>
#include <cstring>

using namespace std;

template<typename T>
void swapEl(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;

}

template<typename T>
void sort(T arr[], int len) {

	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (arr[i] > arr[j]) {
				swapEl(arr[i], arr[j]);
			}
		}
	}
}
template<>
void sort<char>(char cArr[], int len) {

	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (tolower(cArr[i]) > tolower(cArr[j])) {
				swapEl(cArr[i], cArr[j]);
			}
		}
	}
}
template<typename U>
void printArray(U& arr) {
	cout << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++) {
		cout << arr[i] << " ";
	}
}


int main()
{
	int iArr[] = { 1,3,4,10,2,3,7 };
	char cArr[] = { 'q','w','w','E','a','c','A','e','b','3','a' };

	int iLen = sizeof(iArr) / sizeof(iArr[0]);
	int cLen = sizeof(cArr) / sizeof(cArr[0]);

	sort(iArr,iLen);
	sort(cArr,cLen);

	printArray(iArr);
	printArray(cArr);

   return 0;
}

