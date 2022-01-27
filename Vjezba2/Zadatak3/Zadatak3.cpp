#include <iostream>
#include <cmath>

using namespace std;

struct Rectangle {

	int firstPointX;
	int firstPointY;

	int secondPointX;
	int secondPointY;

	void rectangleInput(int i) {
		cout << i << ". rectangle" << endl;
		cout << "A"<< i << " x coordinate: ";
		cin >> firstPointX;

		cout << "A" << i << " y coordinate: ";
		cin >> firstPointY;

		cout << endl;

		cout << "C" << i << " x coordinate: ";
		cin >> secondPointX;

		cout << "C" << i << " y coordinate: ";
		cin >> secondPointY;

	}
	void rectanglePrint(int i) {

		cout << "\nA" << i << ": (" << firstPointX << "," << firstPointY << ") , C" << i << ": (" << secondPointX << "," << secondPointY << ")\n\n";
		
	}
};

struct Circle {

	int centerX;
	int centerY;
	
	int radius;
	int counter = 0;

	void circleInput() {

		cout << "Enter data of the circle.\n\n";

		cout << "C0 x coordinate: ";
		cin >> centerX;

		cout << "C0 y coordinate: ";
		cin >> centerY;

		cout << "Radius: ";
		cin >> radius;
	}
	bool collision(const Rectangle & rect) {

		int width = abs(rect.secondPointX - rect.firstPointX);
		int height = abs(rect.secondPointY - rect.firstPointY);
		int distanceX = abs(centerX - rect.firstPointX);
		int distanceY = abs(centerY - rect.firstPointY);
		int corner;
		
		
		if (distanceX > width / 2 + radius) {
			return false;
		}
		if (distanceY > height / 2 + radius) {
			return false;
		}
		if (distanceX<= width / 2){
			return true;
		}
		if (distanceY <= height / 2){
			return true;
		}

		corner = (distanceX - width / 2) ^ 2 +
			(distanceY - height / 2) ^ 2;

		return (corner <= (radius ^ 2));
	}
};


int main() {

	Rectangle* rectangles;
	Circle inputCircle;

	int rectangleNum;

	cout << "Enter the number of rectangles you want to input: ";
	cin >> rectangleNum;


	// Allocating array and input of coordinates
	rectangles = new Rectangle[rectangleNum];

	for (int i = 0; i < rectangleNum; i++) {

		rectangles[i].rectangleInput(i+1);
		rectangles[i].rectanglePrint(i+1);

	}

	//Calling circle input

	inputCircle.circleInput();

	//Sending individual array members to function

	for (int i = 0; i < rectangleNum; i++) {

		if (inputCircle.collision(rectangles[i])) {
			inputCircle.counter++;
		}
	}

	cout << "\n\nNumber of rectangles that collision with the circle is: " << inputCircle.counter;

	delete[] rectangles;
	
	return 0;
}