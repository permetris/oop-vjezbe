#include "Board.h"

char Board::GetChar() { return border; }
int Board::GetWidth() { return width; }
int Board::GetHeight() { return height; }
void Board::Draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == height - 1) {
				matrix[i][j] = border;
			}
			else if (j == 0 || j == width - 1) {
				matrix[i][j] = border;
			}
			else {
				matrix[i][j] = ' ';
			}
		}
	}
	drawn = true;
}
int Board::Check(int x1, int y1, int x2, int y2) {

	if ((abs(y1 - y2)) > (abs(x1 - x2))) {
		return round((abs(y1 - y2)) / (abs(x1 - x2)));
	}
	else {
		return round((abs(x1 - x2)) / (abs(y1 - y2)));

	}

}
void Board::DrawLine(Point p1, Point p2, char ch) {
	
	if (!drawn) {
		Draw();
	}

	int p1X = round(p1.GetX());
	int p1Y = round(p1.GetY());
	int p2X = round(p2.GetX());
	int p2Y = round(p2.GetY());

	int step = Check(p1X,p1Y,p2X,p2Y);


	// vodoravna
	if (p1X == p2X) { 
		if (p1Y < p2Y) {

			for (int i = p1Y; i <= p2Y; i++) {
				matrix[i][p1X] = ch;
			}
		}
		else if (p1Y > p2Y) {

			for (int i = p2Y; i <= p1Y; i++) {
				matrix[i][p1X] = ch;
			}
		}
	}
	//Okomita
	else if (p1Y == p2Y) { 
		if (p1X < p2X) {

			for (int i = p1X; i <= p2X; i++) {
				matrix[p1Y][i] = ch;
			}
		}
		else if (p1X > p2X) {

			for (int i = p2X; i <= p1X; i++) {
				matrix[p1Y][i] = ch;
			}
		}
	}
	// x i y isti
	else if ((p1Y == p1X) && (p2X == p2Y)) {
		if (p1X < p2X) {

			for (int i = p1X; i <= p2X; i++) {
				matrix[i][i] = ch;
			}
		}
		else if (p1X > p2X) {

			for (int i = p2X; i <= p1X; i++) {
				matrix[i][i] = ch;
			}
		}
	}
	else if ((p1X < p2X)&&(p1Y < p2Y)){

		int temp = 0;
		for (int i = p1Y; i <= p2Y; i++) {
			if (temp == step) {
				temp = 0;
				p1X++;
			}
			matrix[p1X][i] = ch;
			temp++;

		}
	}
	else if ((p1X < p2X) && (p1Y > p2Y)) {
		int step = round((abs(p1Y - p2Y)) / (abs(p1X - p2X)));
		

		int temp = 0;
		for (int i = p1Y; i <= p2Y; i++) {
			if (temp == step) {
				temp = 0;
				p1X--;
			}
			matrix[p1X][i] = ch;
			temp++;

		}
	}
	else if ((p1X > p2X) && (p1Y < p2Y)) {

		int temp = 0;
		for (int i = p1Y; i <= p2Y; i++) {
			if (temp == step) {
				temp = 0;
				p1X++;
			}
			matrix[p1X][i] = ch;
			temp++;

		}
	}
	else if ((p1X > p2X) && (p1Y > p2Y)) {

		int temp = 0;
		for (int i = p2Y; i <= p1Y; i++) {
			if (temp == step) {
				temp = 0;
				p1X--;
			}
		
			matrix[p1X][i] = ch;
			temp++;

		}
	}
}
void Board::DrawChar(Point p1, char ch) {

	if (!drawn) {
		Draw();
	}

	int x = round(p1.GetX());
	int y = round(p1.GetY());

	matrix[x][y] = ch;
}
void Board::DrawUpLine(Point p1, char ch) {

	if (!drawn) {
		Draw();
	}

	int x = round(p1.GetX());
	int y = round(p1.GetY());

	for (int i = y; i > 0; i--) {
		matrix[i][x] = ch;
	}
	
}
void Board::Display() {

	cout << endl<<endl;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << matrix[i][j];
		}
		cout << endl;
	}
}