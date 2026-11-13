#include "Level.h"
#include "Player.h"
#include <iostream>
#include <string>

//I move the origninal middleRow to private , this i did so that drawLevel doesnt keep redrawing the coins the player collects, everytime the funvtion runs. Instead it can access it directly when it need, also hy i didnt use a getter. 
// second the displayrow shows the player without changing the store map.
void Level::DrawLevel(int playerColumn)
{

	std::string displayRow = levelMap[1];
	if (playerColumn >= 1 && playerColumn < static_cast<int>(displayRow.size()) - 1)
	{
		displayRow[playerColumn] = 'P';
	}
	

	std::cout << levelMap[0] << std::endl;
	std::cout << displayRow << std::endl;
	std::cout << levelMap[2] << std::endl;
}


float Level::MaxPosition()
{
	const float maxPosition = 21.0f;
	return maxPosition;

	
}


int Level::CollectCoinsBetween(int previousColumn, int newColumn)


{
	int collectedThisMove = 0;
	for (int column = previousColumn; column <= newColumn; column++)
	{
		if (column >= 0 && column < static_cast<int>(levelMap[1].size()))
		{
			if (levelMap[1][column] == 'O')
			{
				collectedThisMove++;
				levelMap[1][column] = ' ';
			}
		}

	}

	return collectedThisMove;
}