#include "HangmanModel.h"
#include "HangmanView.h"
#include "HangmanController.h"
#include <iostream>

int main()
{
	Model hangman;
	View view;
	Controller controller;
	

	hangman.GenerateMovie();
	view.DisplayHangman(hangman);
	
	while (controller.CheckIfGameIsOver(hangman) != true) {

		controller.CheckLetter(hangman, view);
	}

	return 0;
}
