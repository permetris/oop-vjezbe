#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Matrix {
	
	int height;
	int width;
	float** matrix;

	void memoryDeallocation() {

		for (int i = 0; i < height; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
	void printMatrix() {

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cout << right << setfill('0') << fixed << setprecision(4) << matrix[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl << endl;
	}
	void createEmptyMatrix() {
		 matrix = 0;

		matrix = new float* [height];
		for (int i = 0; i < height; i++) {

			matrix[i] = new float[width];
			for (int j = 0; j < width; j++) {

				matrix[i][j] = 0;
			}
		}
	}
	void userInputMatrix() {
		createEmptyMatrix();

		cout << "Unesite matricu: " << endl;
		cout << "Unos se radi po redovima!" << endl;

		for (int i = 0; i < height; i++) {

			for (int j = 0; j < width; j++) {

				cout << "[" << i << "]" << "[" << j << "]: ";
				cin >> matrix[i][j];

			}

		}
		cout << endl << "Unesena matrica je:" << endl;
		printMatrix();
	}
	void generateMatrix(int min, int max) {

		createEmptyMatrix();

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {

				matrix[i][j] = (float)(min + (rand() % (max - min + 1)));
			}
		}

		cout << endl << endl << "Generirana matrica je:" << endl;
		printMatrix();

	}
	void transposeMatrix(Matrix& userMatrix) {

		height = userMatrix.width;
		width = userMatrix.height;
		createEmptyMatrix();

		for (int i = 0; i < userMatrix.height; i++) {
			for (int j = 0; j < userMatrix.width; j++) {
				matrix[j][i] = userMatrix.matrix[i][j];
			}
		}
		cout << "Transponirana matrica je" << endl;
		printMatrix();
	}
	void sumTwoMatrix(Matrix& userMatrix, Matrix& generatedMatrix) {

		if (userMatrix.height == generatedMatrix.height && userMatrix.width == generatedMatrix.width) {

			height = userMatrix.height;
			width = userMatrix.width;
			createEmptyMatrix();

			for (int i = 0; i < userMatrix.height; i++) {
				for (int j = 0; j < userMatrix.width; j++) {
					matrix[i][j] = userMatrix.matrix[i][j] + generatedMatrix.matrix[i][j];
				}
			}
			cout << "Suma matrica je:" << endl;
			printMatrix();
		}
		else {
			cout << "Matrice nisu iste dimenzije!!" << endl << endl;

		}
	}
	void subTwoMatrix(Matrix& userMatrix, Matrix& generatedMatrix) {

		if (userMatrix.height == generatedMatrix.height && userMatrix.width == generatedMatrix.width) {

			height = userMatrix.height;
			width = userMatrix.width;
			createEmptyMatrix();

			for (int i = 0; i < height; i++) {
				for (int j = 0; j < width; j++) {
					matrix[i][j] = userMatrix.matrix[i][j] - generatedMatrix.matrix[i][j];
				}
			}
			cout << "Razlika matrica je:" << endl;
			printMatrix();
		}
		else {
			cout << "Matrice nisu iste dimenzije!!" << endl << endl;

		}
	}
	void multiplyTwoMatrix(Matrix& userMatrix, Matrix& generatedMatrix) {

		if (userMatrix.width == generatedMatrix.height) {

			height = userMatrix.height;
			width = generatedMatrix.width;
			
			createEmptyMatrix();

			for (int i = 0; i < userMatrix.height; i++) {
				for (int j = 0; j < generatedMatrix.width; j++) {
					for (int k = 0; k < userMatrix.height; k++) {
						matrix[i][j] += userMatrix.matrix[i][k] * generatedMatrix.matrix[k][j];
					}
				}
			}
			cout << "Produkt matrice je:" << endl;
			printMatrix();
		}
		else {
			cout << "Matrice se ne mogu mnoziti!!" << endl;
		}
	}
};
void switchValues(int* min, int* max) {
	int temp = *max;

	*max = *min;
	*min = temp;
}

int main() {

	struct Matrix inputMatrix, generatedMatrix,transposedMatrix,sumMatrix, subMatrix, prodMatrix ;
	int minRange, maxRange;

	//Seeding
	srand((unsigned)time(0));

	// User input

	cout << "Unos visinu prve matrice: ";
	cin >> inputMatrix.height;
	cout << "Unos sirine prve matrice: ";
	cin >> inputMatrix.width;

	cout << "\n\nUnos visinu druge matrice: ";
	cin >> generatedMatrix.height;
	cout << "Unos sirine druge matrice: ";
	cin >> generatedMatrix.width;

	cout << "\n\nUnesite donju granicu: ";
	cin >> minRange;
	cout << "Unesite gornju granicu: ";
	cin >> maxRange;

	

	// User input check
	if (maxRange < minRange) {
		switchValues(&minRange, &maxRange);
	}
	

	//Function calls
	inputMatrix.userInputMatrix();
	generatedMatrix.generateMatrix(minRange,maxRange);
	transposedMatrix.transposeMatrix(inputMatrix);
	sumMatrix.sumTwoMatrix(inputMatrix, generatedMatrix);
	subMatrix.sumTwoMatrix(inputMatrix, generatedMatrix);
	prodMatrix.multiplyTwoMatrix(inputMatrix, generatedMatrix);


	//Memory deallocation
	inputMatrix.memoryDeallocation();
	generatedMatrix.memoryDeallocation();
	transposedMatrix.memoryDeallocation();
	sumMatrix.memoryDeallocation();
	subMatrix.memoryDeallocation();
	prodMatrix.memoryDeallocation();
	
	return 0;
}