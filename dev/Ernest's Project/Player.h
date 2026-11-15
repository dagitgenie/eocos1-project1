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

	void Jump();
	void UpdateJump();
	int GetPositionY();
	void StopAt(float safePosition);

	void LoseLife();
	int GetLives() const;
	void Respawn();



private:

	int lives = 3;
	float positionX = 0.0f;
	float speedX = 0.0f;
	float acceleration = 0.5f;
	float deceleration = -0.5f;
	float maxSpeed = 3.0f;
	int coinsCollected = 0;

	int positionY = 3;
	int jumpStep = 0;

};

