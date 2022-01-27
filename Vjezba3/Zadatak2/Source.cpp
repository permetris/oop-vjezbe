
#include "stringovi.h"

using namespace std;

int substringCount(const string &str, const string &subStr) {
	int counter = 0;

	if (subStr.length() == 0) {
		return 0;
	}
	for (size_t off = str.find(subStr); off != str.npos; off = str.find(subStr, off + subStr.length())) {
		counter++;
	}

	return counter;
}
void printVector(const vector<string>& vec) {

	cout << "Vector: ";
	for (auto i = vec.begin(); i != vec.end(); i++) {
		cout << *i << " ";
	}
	cout << endl << endl;
}
void stringVector(vector<string>& vec) {

	string temp;
	
	while (cin >> temp) {
		reverse(temp.begin(),temp.end());
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end());
	

}





