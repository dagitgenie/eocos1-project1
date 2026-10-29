#include "Game.h"
#include <iostream>

void Game::StartGame()
{
	std::cout << "Starting Coin Rush!" << std::endl;
}


void Game::ShowInstructions()
{	
	std::cout << "===== Please read instructions =====" << std::endl;
	std::cout << "Move forward through the course." << std::endl;
	std::cout << "Press spacebar to jump over obstacles and collect coins." << std::endl;
	std::cout << "Build speed gradually and slow down when needed." << std::endl;
	std::cout << "You cannot turn around, so plan your jumps." << std::endl;
	std::cout << "Reach the finish before the time runs out." << std::endl;
}

void Game::ShowMenu()
{
	std::cout << "COIN RUSH" << std::endl;
	std::cout << "1. Start Game" << std::endl;
	std::cout << "2. Instructions" << std::endl;
	std::cout << "3. Exit" << std::endl;

	int choice = 0;

	while (choice != 3)
	{
		std::cout << "Enter your choice" << std::endl;
		if (!(std::cin >> choice))
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Invalid choice. Please select 1-3.\n";
			continue;
		}

		if (choice == 1)
		{
			StartGame();
		}
		else if (choice == 2)
		{
			ShowInstructions();
		}
		else if (choice == 3)
		{
			std::cout << "Exiting Coin Rush" << std::endl;
		}
		else
		{
			std::cout << "Invalid choice. Please select 1-3." << std::endl;
		}

	}


}