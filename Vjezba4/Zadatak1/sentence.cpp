#include "sentence.h"

void cleanUpString(string& myString) {

	for (int i = 0; i < myString.length(); i++) {

		if (myString[i] == ',') {
			
			if (myString[i - 1] == ' ') {
				myString.erase(i - 1, 1);
			}
			if (myString[i+1] != ' ') {
				myString.insert(i, " ");

			}
		}
	}
}