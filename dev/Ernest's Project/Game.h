#pragma once
#include <string>

#include "Player.h"
#include "Level.h"




class Game
{
public:

	void ShowMenu();
	
	

private:

	int highScore = 0;

	void LoadHighScore();
	void SaveHighScore();
	void ResetHighScore();

	void ShowInstructions();
	int StartGame();
	void HandleMovementInput(char command, Player& 
		player);
	void DisplayGameState(Player& player, Level& level, int timeRemaining);
	int ShowResults(const Player& player, const std::string& result);
};