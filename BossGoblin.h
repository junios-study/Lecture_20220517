#pragma once
#include "Goblin.h"
#include <iostream>

using namespace std;


class BossGoblin : public Goblin
{
public:
	void Move() override
	{
		cout << "������� �̵�" << endl;
	}
};

