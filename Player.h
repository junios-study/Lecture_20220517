#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();
	virtual ~Player();

	Player(int NewHP, int NewMP, int NewGold);

	virtual void Move() override;
	virtual void Attack() override;
	void Pickup();

	int HP;
	int MP;
	int Gold;
};

