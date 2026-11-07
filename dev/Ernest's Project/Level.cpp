#include "Level.h"
#include "Player.h"
#include <iostream>
#include <string>

//I move the origninal middleRow to private , this i did so that drawLevel doesnt keep redrawing the coins the player collects, everytime the funvtion runs. Instead it can access it directly when it need, also hy i didnt use a getter. 
// second the displayrow shows the player without changing the store map.
void Level::DrawLevel(int playerColumn)
{	
	
	std::string displayRow = middleRow;
	if (playerColumn >= 1 && playerColumn < static_cast<int>(middleRow.size()) - 1)
	{
		displayRow[playerColumn] = 'P';
	}
	

	std::cout << "########################" << std::endl;
	
	
	
	std::cout << displayRow << std::endl;
	
	
	
	std::cout << "########################" << std::endl;
}


float Level::MaxPosition()
{
	const float maxPosition = 21.0f;
	return maxPosition;

	
}
