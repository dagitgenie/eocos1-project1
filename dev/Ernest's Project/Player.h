#pragma once




class Player
{
public:

	void SlowDown();
	void SpeedUp();
	void Stop();
	void MoveForward(float maxPosition);
	float GetPositionX();
	void AddCoins(int amount);
	int GetCoinsCollected() const;


private:

	int lives;
	float positionX = 0.0f;
	float speedX = 0.0f;
	float acceleration = 0.5f;
	float deceleration = -0.5f;
	float maxSpeed = 3.0f;
	int coinsCollected = 0;
	

};

