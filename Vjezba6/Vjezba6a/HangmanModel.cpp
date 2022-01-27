#include "HangmanModel.h"

string Model::GetMovie(){ return movie; }
string Model::GetGuessMovie() { return guessMovie; }
string Model::GetUsedLetters() { return usedLetters; }
int Model::GetLives() { return lives; }
bool Model::GetGameState() { return gameState; }

void Model::SetMovie(string newMovie) {
	movie = newMovie;
}
void Model::SetGuessMovie(string newMovie) {
	guessMovie = newMovie;
}
void Model::SetUsedLetters(string newMovie) {
	usedLetters = newMovie;
}
void Model::SetLives(int newLives) {
	lives = newLives;
}
void Model::SetGameState(bool state) {
	gameState = state;
}
void Model::GenerateMovie() {

	string temp;
	vector<string> movies;
	ifstream MyFile("movie.txt");
	int i;

	srand(time(NULL));

	while (getline(MyFile, temp)) {
		movies.push_back(temp);
	}

	i = rand() % movies.size();
	temp = movies[i];

	for (int i = 0; i < temp.length(); i++) {
		if (temp[i] == ':' && temp[i] == '\'' && temp[i] == '-') {
			continue;
		}
		else if(temp[i] == ' '){
			movie.push_back(' ');
			guessMovie.push_back(' ');
		}
		else {
			movie.push_back(tolower(temp[i]));
			guessMovie.push_back('_');
		}
	}
	MyFile.close();
}
