#include <iostream>
#include <cstdlib>
#include <limits>

#include "Game.h"
#include "Player.h"
#include "Level.h"

void Game::HandleMovement(char command, Player&
	player, float maxPosition)
{
	if (command == 'w' || command == 'W')
	{
		player.SpeedUp();
		player.MoveForward(maxPosition);
	}
	else if (command == 's' || command == 'S')
	{
		player.SlowDown();
		player.MoveForward(maxPosition);
	}
}

void Game::DisplayGameState(Player& player, Level& level)
{
	std::system("cls");

	std::cout << "Player position: " << player.GetPositionX() << std::endl;

	level.DrawLevel(1 + static_cast<int>(player.GetPositionX()));

	std::cout << "Coins Collected: " << player.GetCoinsCollected() << std::endl;
}

void Game::StartGame()
{
	std::cout << "Starting Coin Rush!" << std::endl;
	std::cout << "W = Speed Up | S = Slow Down | Q = Quit\n";
	
	
	Player player;
	Level level;
	
	char command = ' ';
	

	while (command != 'q' && command != 'Q')
	{	
		std::cout << "Eneter command: ";
		std::cin >> command;
		
		if (command == 'q' || command == 'Q')
		{
			break;
		}

		int previousColumn = 1 + static_cast<int>(player.GetPositionX());

		HandleMovement(command, player, level.MaxPosition());

		int newColumn = 1 + static_cast<int>(player.GetPositionX());

		int collectedThisMove = level.CollectCoinsBetween(previousColumn, newColumn);

		player.AddCoins(collectedThisMove);
		
		DisplayGameState( player, level);

		if (player.GetPositionX() >= level.MaxPosition())
		{
			std::cout << "You've reached the finish!!" << std::endl;
			break;
		}
	}
	
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

	std::string input;

	while (choice != 3)
	{
		std::cout << "Enter your choice" << std::endl;
		std::getline(std::cin, input);

		try
		{
			std::size_t position = 0;

			choice = std::stoi(input, &position);

			if (position != input.length())
			{
				std::cout << "Invalid choice. Pleae select 1-3.\n";
				continue;
			}
		}
		catch (const std::invalid_argument&)
		{
			std::cout << "Invalid choice. Please select 1-3.\n";
			continue;
		}
		catch (const std::out_of_range&)
		{
			std::cout << "Number is too large.\n";
			continue;
		}
		if (choice == 1)
		{
			StartGame();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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