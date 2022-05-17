#pragma once
#include "Monster.h"
#include <iostream>

using namespace std;

class Goblin : public Monster
{
public:
	Goblin();
	~Goblin();

	void Move();
};

