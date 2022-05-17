#pragma once
class Monster
{
public:
	Monster();
	~Monster();

	int HP;
	int Gold;

	void Drop();
	void Move();
	void Attack();
};

