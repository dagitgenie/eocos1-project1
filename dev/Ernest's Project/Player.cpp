#include "Player.h"
#include "Level.h"







void Player::SlowDown()
{	//deceleration is negative, so adding it takes away from speed.
	speedX += deceleration;

	//Stop players from moving backward.
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

void Player::StopAt(float safePosition)
{
	positionX = safePosition;
	speedX = 0.0f;
}

void Player::Jump()
{
	if (jumpStep == 0 && positionY == 3)
	{
		jumpStep = 1;
	}
}

void Player::UpdateJump()
{
	if (jumpStep == 0)
	{
		return;
	}
	if (jumpStep == 1)
	{
		positionY = 2;
	}
	else if (jumpStep == 2)
	{
		positionY = 1;
	}
	else if (jumpStep == 3)
	{
		positionY = 2;
	}
	else if (jumpStep == 4)
	{
		positionY = 3;
		jumpStep = 0;
		return;
	}

	jumpStep++;
}

int Player::GetPositionY()
{
	return positionY;
}


float Player::GetPositionX()
{
	return positionX;
}


void Player::AddCoins(int amount)
{
	coinsCollected += amount;
}

int Player::GetCoinsCollected() const
{
	return coinsCollected;
}

void Player::LoseLife()
{
	if (lives > 0)
	{
		lives--;
	}
}

int Player::GetLives() const
{
	return lives;
}

void Player::Respawn()
{
	positionX = 0.0f;
	speedX = 0.0f;
	positionY = 3;
	jumpStep = 0;
}