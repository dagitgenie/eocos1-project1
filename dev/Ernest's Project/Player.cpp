#include "Player.h"
#include "Level.h"







void Player::SlowDown()
{	
	speedX += deceleration;
	if (speedX < 0)
	{
		speedX = 0.0f;
	}
}

void Player::SpeedUp()
{
	speedX += acceleration;
	if (speedX > maxSpeed)
	{
		speedX = maxSpeed;
	}
}

void Player::Stop()
{
	speedX = 0.0f;
}

void Player::MoveForward(float maxPosition)
{	
	
	float nextPosition = positionX + speedX;
	if (nextPosition <= maxPosition)
	{
		positionX = nextPosition;
	}

	else
	{
		positionX = maxPosition;
	}
	
}

float Player::GetPositionX()
{
	return positionX;
}



int Level::CollectCoinsBetween(int previousColumn, int newColumn)


{	
	int collectedThisMove = 0;
	for (int column = previousColumn; column <= newColumn; column++)
	{	
		if (column >= 0 && column < static_cast<int>(middleRow.size()))
		{
			if (middleRow[column] == 'O')
			{
			collectedThisMove++;
			middleRow[column] = ' ';
			}
		}
			
	}

	return collectedThisMove;
}

void Player::AddCoins(int amount)
{
	coinsCollected += amount;
}

int Player::GetCoinsCollected() const
{
	return coinsCollected;
}

