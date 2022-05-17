#pragma once

#include "Character.h"

using namespace std;

class Monster : public Character
{
public:
	Monster();
	virtual ~Monster();

	virtual void Move() override;
	virtual void Attack() override;

	virtual void Drop();
};

