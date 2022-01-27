#pragma once
#include <iostream>
#include "Point.h"


class Board
{
public:
	Board() {
		width = 0;
		height = 0;
		drawn = false;
		border = NULL;
		matrix = 0;
	}
	Board(int w, int h, char ch) {
		width = w;
		height = h;
		border = ch;
		drawn = false;
		matrix = new char*[height];
		for (int i = 0; i < height; i++) {
			matrix[i] = new char[width];
		}
	}
	Board(Board&& other) noexcept {
		width = other.width;
		height = other.height;
		border = other.border;
		drawn = false;
		matrix = new char* [height];
		for (int i = 0; i < height; i++) {
			matrix[i] = new char[width];
		}
	}
	int Check(int,int,int,int);
	void Draw();
	~Board() {
		for (int i = 0; i < width; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
	
	void DrawLine(Point, Point, char);
	void DrawChar(Point, char);
	void DrawUpLine(Point, char);
	void Display();
	int GetWidth();
	int GetHeight();
	char GetChar();


private:
	int width, height;
	char **matrix;
	char border;
	bool drawn;

};


