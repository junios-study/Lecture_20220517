#pragma once
class Player
{
public:
	Player();
	~Player();

	int HP;
	int MP;
	int Gold;

	void Move();
	void Attack();
	void Pickup();
};

