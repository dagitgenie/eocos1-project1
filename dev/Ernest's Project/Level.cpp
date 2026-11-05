#include "Level.h"
#include "Player.h"
#include <iostream>
#include <string>


void Level::DrawLevel(int playerColumn)
{	
	
	std::string middleRow = "#S      O      O      F#";
	if (playerColumn >= 1 && playerColumn < static_cast<int>(middleRow.size()) - 1)
	{
		middleRow[playerColumn] = 'P';
	}
	

	std::cout << "########################" << std::endl;
	
	
	
	std::cout << middleRow << std::endl;
	
	
	
	std::cout << "########################" << std::endl;
}


float Level::MaxPosition()
{
	const float maxPosition = 21.0f;
	return maxPosition;

	
}