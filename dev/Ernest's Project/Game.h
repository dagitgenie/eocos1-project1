#pragma once
#include "Player.h"
#include "Level.h"



class Game
{
public:

	void ShowMenu();
	
	

private:
	
	void ShowInstructions();
	void StartGame();
	void HandleMovementInput(char command, Player& 
		player);
	void DisplayGameState(Player& player, Level& level, int timeRemaining);
};