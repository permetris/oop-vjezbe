#include <cstddef>
#include <vector>
#include <string>
#include <time.h>
#include <fstream>
#pragma once

using namespace std;

class Model
{
private:

	string movie = "";
	string usedLetters = "";
	string guessMovie = "";
	int lives = 7;
	bool gameState = false;

public:
	
	string GetMovie();
	string GetGuessMovie();
	string GetUsedLetters();
	int GetLives();
	bool GetGameState();

	void SetMovie(string);
	void SetGuessMovie(string);
	void SetUsedLetters(string);
	void SetLives(int);
	void SetGameState(bool);

	void GenerateMovie();


};

