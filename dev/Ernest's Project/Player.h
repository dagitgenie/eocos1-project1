#pragma once




class Player
{
public:

	void SlowDown();
	void SpeedUp();

private:

	int lives;
	float positionX = 0.0f;
	float speedX = 0.0f;
	float acceleration = 0.5f;
	float deceleration = -0.5f;
	float maxSpeed = 3.0f;
	

};

