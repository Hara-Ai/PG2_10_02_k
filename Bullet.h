#pragma once
#include "Player.h"

class Bullet
{
private:
	int bulletPosX;
	int bulletPosY;
	int bulletSpeed;
	bool isTrue = false;
public:

	Bullet();
	void SetPosition(int x, int y);

	int bulletGetX() const { return bulletPosX; }
	int bulletGetY() const { return bulletPosY; }

	void Drow();
	void shot(char keys[], char preKeys[], int x, int y);

	Player player;
};




