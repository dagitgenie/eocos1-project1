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
	void HandleMovement(char command, Player& 
		player, float maxPosition);
	void DisplayGameState(Player& player, Level& level);
};