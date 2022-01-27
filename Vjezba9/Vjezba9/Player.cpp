#include "Player.h"

int Player::GetPoints() {
	return points;
}
int Player::GetGuess() {
	return guess;
}
int Player::GetChoice() {
	return choice;
}
bool Player::GetWinner() {
	return winner;
}

void Player::SetPoints(const int arg) {
	points = arg;
}
void Player::SetGuess(const int arg) {
	guess = arg;
}
void Player::SetChoice(const int arg) {
	guess = arg;
}
void Player::SetWinner(const bool arg) {
	winner = arg;
}