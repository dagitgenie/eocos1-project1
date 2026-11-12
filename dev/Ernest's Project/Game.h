#pragma once
#include "Player.h"



class Game
{
public:

	void ShowMenu();
	
	

private:
	
	void ShowInstructions();
	void StartGame();
	void HandleMovement(char command, Player& 
		player, float maxPosition);
};