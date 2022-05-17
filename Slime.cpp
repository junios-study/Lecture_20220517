#include "Slime.h"
#include <iostream>

using namespace std;

Slime::Slime()
{
	cout << "슬라임 생성자" << endl;
}

Slime::~Slime()
{
	cout << "슬라임 소멸자" << endl;
}

void Slime::Move()
{
	cout << "슬라임 이동" << endl;
}
