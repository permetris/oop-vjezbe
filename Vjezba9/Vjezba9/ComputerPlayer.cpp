#include "ComputerPlayer.h"
#include <vector>
#include <stdlib.h>
#include<time.h>
#include <iostream>

using namespace std;

void ComputerPlayer::ComputerRound() {

	int numCoins;
	int selectedCoin;
	int tempSum = 0;
	vector<int> coins = { 1,2,5 };

	

	numCoins = rand() % 4;

	if (numCoins == 3) {
		SetChoice(8);
		return;
	}
	else {
		for (int i = 0; i < numCoins; i++) {

			selectedCoin = coins.at(rand() % coins.size());
			tempSum += selectedCoin;
			SetChoice(tempSum);

			auto target = find(coins.begin(), coins.end(), selectedCoin);
			coins.erase(target);
		}
	}
}





