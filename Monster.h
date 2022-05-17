#pragma once

using namespace std;

class Monster
{
public:
	Monster();
	virtual ~Monster();

	int HP;
	int Gold;

	virtual void Drop();
	virtual void Move();
	virtual void Attack();
};

