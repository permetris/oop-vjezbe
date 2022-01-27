#pragma once
#include "Game.h"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

using namespace std;

void Game::SetGameState(const bool state) {
	gameState = state;
}
void Game::SetTargetPoints(const int num) {
	playerNum = num;
}
void Game::SetPlayerNum(const int num) {
	playerNum = num;
}

int Game::GetPlayerNum() { return playerNum; }
int Game::GetTargetPoints() { return targetPoints; }
bool Game::GetGameState() { return gameState; }

void Game::CheckWinner(vector<HumanPlayer> &humans, vector<ComputerPlayer> &bots) {
	int counter = 1;
	system("CLS");
	

	for (auto bot : bots) {
		cout << counter << ". bots score: " << bot.GetPoints() << "\n";
		++counter;
		if (bot.GetPoints() >= targetPoints) {
			bot.SetWinner(true);
			gameState = true;
			
		}
	}
	counter = 1;
	for (auto person : humans) {
		cout << counter << ". persons score: " << person.GetPoints() << "\n";
		++counter;
		if (person.GetPoints() >= targetPoints) {
			person.SetWinner(true);
			gameState = true;

		}
	}
	
	cout << "\n\n";

}
void Game::AssignPoints(vector<HumanPlayer> &humans, vector<ComputerPlayer>& bots) {
	srand(time((NULL)));
	vector<int> sums = { 0,1,2,3,5,6,7,8 };

	int counter = 1;
	int temp;


	//Points check for human players
	for (int i = 0; i < humans.size(); i++) {

		for (auto bot : bots) {

			cout << "Guess " << counter << ". computers hand: ";
			cin >> temp;
			++counter;

			if (temp == bot.GetChoice()) {
				humans[i].SetPoints(humans[i].GetPoints() + 1);
			}
		}
		
		for (int j = 0; j < humans.size(); j++) {
			if (j != i) {
				cout << "Guess " << j+1 << ". players hand: ";
				cin >> temp;
				if (temp == humans[j].GetChoice()) {
					bots[i].SetPoints(bots[i].GetPoints() + 1);
				}
			}
		}
	}



	
	for (int i = 0; i < bots.size(); i++) {

		temp = sums[rand() % sums.size()];
		for (auto person : humans) {

			if (temp == person.GetChoice()) {
				bots[i].SetPoints(bots[i].GetPoints() + 1);
			}
		}
		
		
		for (int j = 0; j < bots.size();j++) {
			if (i != j) {
				if (temp == bots[j].GetChoice()) {
					bots[i].SetPoints(bots[i].GetPoints() + 1);
				}
			}
		}
	}

}

void Game::Start() {

	vector<HumanPlayer> humans;
	vector<ComputerPlayer> bots;

	cout << "Enter the number of players: ";
	cin >> playerNum;

	cout << "Enter the number of bots: ";
	cin >> computerNum;

	cout << "Enter the number of points required to win: ";
	cin >> targetPoints;

	cout << endl;


	for (int i = 0; i < computerNum-1; i ++) {
		ComputerPlayer bot;

		bots.push_back(bot);
	}
	for (int i = 0; i < playerNum - 1; i++) {
		HumanPlayer human;

		humans.push_back(human);
	}
	
	while (!GetGameState()) {
		for (auto it : bots) {
			it.ComputerRound();
		}
		for (auto it : humans) {
			it.PlayerRound();

		}
		AssignPoints(humans,bots);
		
		CheckWinner(humans, bots);
	}
	


}