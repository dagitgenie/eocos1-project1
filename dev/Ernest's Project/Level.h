#pragma once
#include <string>
#include <vector>


class Level
{
private:

	

	std::vector<std::string> levelMap =
	{
		 "########################",
		 "#S      O      O      F#",
		 "########################"
	};

public:

	void DrawLevel(int playerColumn);
	
	float MaxPosition();

	int CollectCoinsBetween(int previousColumn, int newColumn);
	//prev will tell me where player was and new will show me where he ends up
	
};