#pragma once
class Player
{
public:
	Player();
	Player(int NewHP, int NewMP, int NewGold);
	~Player();

	void Move();
	void Attack();
	void Pickup();

	int HP;
	int MP;
	int Gold;
};

