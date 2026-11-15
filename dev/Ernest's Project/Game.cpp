#include <iostream>
#include <cstdlib>
#include <limits>
#include <conio.h>
#include <Windows.h>
#include <chrono>

#include "Game.h"
#include "Player.h"
#include "Level.h"


void Game::HandleMovementInput(char command, Player&
	player)
{
	if (command == 'w' || command == 'W')
	{
		player.SpeedUp();
		
	}
	else if (command == 's' || command == 'S')
	{
		player.SlowDown();
		
	}
}

void Game::DisplayGameState(Player& player, Level& level, int timeRemaning)
{
	COORD cursorPosition = { 0, 0 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), 
		cursorPosition);

	std::cout << "COIN RUSH | W = Speed Up | S = Slow Down | SPACE = Jump | Q = Quit" << std::endl;
	std::cout << "Player position: " << player.GetPositionX() << std::endl;

	level.DrawLevel(1 + static_cast<int>(player.GetPositionX()), player.GetPositionY());

	std::cout << "Coins Collected: " << player.GetCoinsCollected() << std::endl;
	std::cout << "Lives Remaining: " << player.GetLives() << std::endl;
	std::cout << "Time Remaining: " << timeRemaning << " seconds" << std::endl;
}

void Game::StartGame()
{	
	std::system("cls");
	
	
	Player player;
	Level level;
	
	const int timeLimitSeconds = 60;
	bool timerStarted = false;
	std::chrono::steady_clock::time_point startTime;

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(consoleHandle, &cursorInfo);

	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &cursorInfo);

	char command = ' ';
	

	while (command != 'q' && command != 'Q')
	{	
		if (_kbhit())
		{
			command = _getch();

			if (command == 'q' || command == 'Q')
			{
				break;
			}

			if (!timerStarted && (command == 'w' || command == 'W'))
			{
				startTime = std::chrono::steady_clock::now();
				timerStarted = true;
			}

			if (command == ' ')
			{
				player.Jump();
			}

			else
			{
				HandleMovementInput(command, player);
			}
			
		}
		
		int timeRemaining = timeLimitSeconds;

		if (timerStarted)
		{
			auto currentTime = std::chrono::steady_clock::now();
			auto elapsedSeconds = std::chrono::duration_cast<std::chrono::seconds>(
				currentTime - startTime).count();
			timeRemaining = timeLimitSeconds - static_cast<int>(elapsedSeconds);

			if (timeRemaining <= 0)
			{
				std::cout << "Time's Up!" << std::endl;
				break;
			}
		}

		int previousColumn = 1 + static_cast<int>(player.GetPositionX());

		

		player.MoveForward(level.MaxPosition());
		player.UpdateJump();
		
		int newColumn = 1 + static_cast<int>(player.GetPositionX());
		
		int wallColumn = level.FindWallBetween(
			previousColumn,
			newColumn,
			player.GetPositionY()
		);

		if (wallColumn != -1)
		{
			player.StopAt(static_cast<float>(wallColumn - 2));

			newColumn = 1 + static_cast<int>(player.GetPositionX());
		}
		
		bool hitObstacle = level.HitObstacleBetween(
			previousColumn,
			newColumn,
			player.GetPositionY()
		);

	
		level.CollectCoinsBetween(previousColumn, &player);
		
		

		if (hitObstacle)
		{	
			player.LoseLife();

			if (player.GetLives() > 0)
			{
				player.Respawn();	
			}
		}
		
		DisplayGameState( player, level, timeRemaining);

		if (hitObstacle && player.GetLives() == 0)
		{
			std::cout << "Game Over!" << std::endl;
			break;

		}
		
		if (player.GetPositionX() >= level.MaxPosition())
		{
			std::cout << "You've reached the finish!" << std::endl;
			break;
		}

		Sleep(150);
	}
	cursorInfo.bVisible = TRUE;
	SetConsoleCursorInfo(consoleHandle, &cursorInfo);
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
	

	int choice = 0;

	std::string input;

	while (choice != 3)
	{	
		std::cout << "COIN RUSH" << std::endl;
		std::cout << "1. Start Game" << std::endl;
		std::cout << "2. Instructions" << std::endl;
		std::cout << "3. Exit" << std::endl;
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