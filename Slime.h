#pragma once
#include "Monster.h"

class Slime : public Monster
{
public:
	Slime();
	virtual ~Slime();

	virtual void Move() override;
};

