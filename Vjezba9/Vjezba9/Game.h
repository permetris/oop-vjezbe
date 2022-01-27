#include <cstddef>
#include <iostream>
#include <vector>
#include "ComputerPLayer.h"
#include "HumanPlayer.h"




class Game
{
private:
	int playerNum;
	int computerNum;
	int targetPoints;
	bool gameState;

public:
	Game() {

		playerNum = 0;
		targetPoints = 0;
		computerNum = 0;
		gameState = false;
		
	}
	

	void Start();
	void AssignPoints(std::vector<HumanPlayer> &humans, std::vector<ComputerPlayer>& bots);
	void CheckWinner(std::vector<HumanPlayer> &humans, std::vector<ComputerPlayer> &bots);

	//Setters
	void SetPlayerNum(const int num);
	void SetTargetPoints(const int num);
	void SetGameState(const bool flag);

	//Getters
	int GetPlayerNum();
	int GetTargetPoints();
	bool GetGameState();



};

