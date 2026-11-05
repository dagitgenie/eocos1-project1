#include "Level.h"
#include <iostream>
#include <string>


void Level::DrawLevel(int playerColumn)
{	
	
	std::string middleRow = "#S      O      O      F#";
	middleRow[playerColumn] = 'P';
	
	
	std::cout << "########################" << std::endl;
	
	
	
	std::cout << middleRow << std::endl;
	
	
	
	std::cout << "########################" << std::endl;
	
	

}