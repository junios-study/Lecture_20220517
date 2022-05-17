#include "Monster.h"
#include <iostream>


Monster::Monster()
{
	cout << "몬스터 생성자" << endl;
}

Monster::~Monster()
{
	cout << "몬스터 소멸자" << endl;
}

void Monster::Drop()
{
}

void Monster::Move()
{
	cout << "몬스터 이동" << endl;
}

void Monster::Attack()
{
}
