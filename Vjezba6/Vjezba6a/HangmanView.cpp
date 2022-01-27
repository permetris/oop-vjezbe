#include <iostream>
#include "HangmanView.h"
#include "HangmanModel.h"
#pragma once

void View::DisplayHangman(Model hangman) {
	
	switch (hangman.GetLives())
	{
	case 7:
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /         " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		break;
	case 6:
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /      O  " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		break;
	case 5:
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /      O  " << endl;
		cout << "  |        |  " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		break;
	case 4:
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /      O  " << endl;
		cout << "  |       /|  " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		break;
	case 3:
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /      O  " << endl;
		cout << "  |       /|\\  " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		break;
	case 2:
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /      O  " << endl;
		cout << "  |       /|\\  " << endl;
		cout << "  |        |  " << endl;
		cout << "  |           " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		break;
	case 1:
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /      O  " << endl;
		cout << "  |       /|\\ " << endl;
		cout << "  |        |  " << endl;
		cout << "  |       /   " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		break;
	case 0:
		//system("CLS");
		cout << "   ___________" << endl;
		cout << "  |  /     |  " << endl;
		cout << "  | /      O  " << endl;
		cout << "  |       /|\\ " << endl;
		cout << "  |        |  " << endl;
		cout << "  |       / \\ " << endl;
		cout << "  |           " << endl;
		cout << "__|___        " << endl;
		cout << endl << endl << "You're hanged!";
		
		break;

	default:
		cout << "Something went wrong!!" << endl << endl;
		break;
	}
}
void View::DisplayUsedLetters(Model hangman) {

	string temp = hangman.GetUsedLetters();

	cout << "Letters used: \n";
	for (int i = 0; i < temp.length(); i++) {
		cout << temp.at(i) << "  ";
	}
	cout << endl << endl;
}
void View::DisplayCurrentProgress(Model hangman) {

	cout << "Current progress:\n \n " << hangman.GetGuessMovie();

	cout << endl << endl;
}