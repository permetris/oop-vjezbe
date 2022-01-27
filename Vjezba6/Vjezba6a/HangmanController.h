#include <cstddef>
#include <iostream>
#include <string>
#include"HangmanModel.h"
#include"HangmanView.h"


class Controller
{
public:
	bool CheckIfGameIsOver(Model& hangman);
	void CheckLetter(Model& hangman, View);
	char UserEntry();
	void UpdateLives(Model& , int);
private:

};

