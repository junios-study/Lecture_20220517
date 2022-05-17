#pragma once

using namespace std;

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

