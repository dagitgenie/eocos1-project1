#include "Level.h"
#include "Player.h"
#include <iostream>
#include <string>

//I move the origninal middleRow to private , this i did so that drawLevel doesnt keep redrawing the coins the player collects, everytime the funvtion runs. Instead it can access it directly when it need, also hy i didnt use a getter. 
// second the displayrow shows the player without changing the store map.
void Level::DrawLevel(int playerColumn, int playerRow)
{
	for (int row = 0; row < static_cast<int>(levelMap.size()); row++)
	{
		std::string displayRow = levelMap[row];

		if (row == playerRow && playerColumn >= 1 && playerColumn < static_cast<int>(displayRow.size()) - 1)
		{
			displayRow[playerColumn] = 'P';
		}
	

		std::cout << displayRow << std::endl;
	}
	
}


float Level::MaxPosition()
{
	const float maxPosition = 40.0f;
	return maxPosition;

	
}


void Level::CollectCoinsBetween(int previousColumn, Player* player)

{	
	if (player == nullptr)
	{
		return;
	}

	int newColumn = 1 + static_cast<int>(player->GetPositionX());

	int collectedThisMove = 0;
	
	for (int column = previousColumn; column <= newColumn; column++)
	{
		if (column >= 0 && column < static_cast<int>(levelMap[3].size()))
		{
			if (levelMap[3][column] == 'O')
			{
				collectedThisMove++;
				levelMap[3][column] = ' ';
			}
		}

	}

	player->AddCoins(collectedThisMove);
}

bool Level::HitObstacleBetween(int previousColumn, int newColumn, int playerRow)
{
	if (playerRow != 3)
	{
		return false;
	}

	for (int column = previousColumn; column <= newColumn; column++)
	{
		if (column >= 0 && column < static_cast<int>(levelMap[3].size()))
		{
			if (levelMap[3][column] == 'X')
			{
				return true;
			}
		}
	}
	
	return false;
}	

int Level::FindWallBetween(int previousColumn, int newColumn, int playerRow)
{
	if (playerRow < 0 || playerRow >= static_cast<int>(levelMap.size()))
	{
		return -1;
	}

	for (int column = previousColumn; column <= newColumn; column++)
	{
		if (column >= 0 && column < static_cast<int>(levelMap[playerRow].size()))
		{
			if (levelMap[playerRow][column] == '#')
			{
				return column;
			}
		}
	}
	
	return -1;
}	

