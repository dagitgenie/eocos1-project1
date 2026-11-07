#pragma once
#include <string>


class Level
{
private:

	std::string middleRow = "#S      O      O      F#";
	//this will allow my level to remmber when a coin is collected so coins don't keep popping up

public:

	void DrawLevel(int playerColumn);
	
	float MaxPosition();

	int CollectCoinsBetween(int previousColumn, int newColumn);
	//prev will tell me where player was and new will show me where he ends up
	
};