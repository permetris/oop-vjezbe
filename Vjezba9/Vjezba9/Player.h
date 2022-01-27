#pragma once
#include <vector>

class Player
{
public:
	Player() {
		points = 0;
		guess = 0;
		choice = 0;
		winner = false;
	}

	//Getters
	int GetPoints();
	int GetGuess();
	int GetChoice();
	bool GetWinner();


	//Setters
	void SetPoints(const int arg);
	void SetGuess(const int arg);
	void SetChoice(const int arg);
	void SetWinner(const bool arg);

private:
	int points;
	int guess;
	int choice;
	bool winner;
	

};

