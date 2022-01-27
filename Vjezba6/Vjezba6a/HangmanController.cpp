#include "HangmanController.h"
#include <string>


bool Controller::CheckIfGameIsOver(Model& hangman) {

	if (hangman.GetGuessMovie().compare(hangman.GetMovie())==0) {

		hangman.SetGameState(true);
		cout << "You won!!!!!";
	}
	else if (hangman.GetLives() == 0) {

		hangman.SetGameState(true);
	}

	return hangman.GetGameState();
}
char Controller::UserEntry() {

	char temp;

	cout << "Enter a letter: ";
	cin >> temp;

	return tolower(temp);
}
void Controller::UpdateLives(Model& hangman, int newLives) {

	hangman.SetLives(newLives);
	
}
void Controller::CheckLetter(Model& hangman, View view) {

	bool flag = false;
	char letter = UserEntry();
	
	string movie = hangman.GetMovie();
	string gMovie = hangman.GetGuessMovie();
	string used = hangman.GetUsedLetters();

	used.push_back(letter);
	hangman.SetUsedLetters(used);

	for (int i = 0; i < movie.length(); i++) {
		if (movie.at(i) == letter) {
			gMovie[i] = letter;
			flag = true;
		}
	}
	hangman.SetGuessMovie(gMovie);
	if (flag == false) {
		UpdateLives(hangman,hangman.GetLives()-1);
		
	}

	system("CLS");
	view.DisplayHangman(hangman);
	view.DisplayCurrentProgress(hangman);
	view.DisplayUsedLetters(hangman);

}
