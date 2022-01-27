#include "HumanPlayer.h"
#include <vector>
#include <iostream>

using namespace std;

void HumanPlayer::PlayerRound() {

	int numCoins;
	int selectedCoin;
	int tempSum = 0 ;
	vector<int> coins = { 1,2,5 };


	cout << "How many coins do you want?";
	cin >> numCoins;

	if (numCoins == 0) {
		SetChoice(0);
		cout << "Your hand has a value of 0!\n";
	}
	else {
		cout << "Which coins do you want to use?\n";

		for (int i = 0; i < numCoins; i++) {

			for (auto it = coins.begin(); it < coins.end(); it++) {
				cout << *it << " ";	
			}
			cout << "\n";

			while (1) {
				cin >> selectedCoin;
				if (selectedCoin == 1 || selectedCoin == 2 || selectedCoin || 5) {
					break;
				}
				else {
					cout << "Wrong! Try again!";
				}
			}
			cin >> selectedCoin;

			tempSum += selectedCoin;

			auto target = find(coins.begin(), coins.end(), selectedCoin);
			coins.erase(target);
		}
		
		SetChoice(tempSum);
	}
	cout << endl;

}