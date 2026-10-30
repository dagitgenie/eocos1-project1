#include "Player.h"

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