#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() 
	: HP(0), MP(0), Gold(0)
{
	cout << "Player 생성자" << endl;
}

Player::Player(int NewHP, int NewMP, int NewGold)
{
	HP = NewHP;
	MP = NewMP;
	Gold = NewGold;

	cout << "Player 생성자 인자 있음" << endl;

}

Player::~Player()
{
	cout << "Player 소멸자" << endl;

}


void Player::Move()
{
	cout << "Player 이동" << endl;
}

void Player::Attack()
{
}

void Player::Pickup()
{
}
