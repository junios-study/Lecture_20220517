#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() 
	: HP(0), MP(0), Gold(0)
{
	cout << "Player ������" << endl;
}

Player::Player(int NewHP, int NewMP, int NewGold)
{
	HP = NewHP;
	MP = NewMP;
	Gold = NewGold;

	cout << "Player ������ ���� ����" << endl;

}

Player::~Player()
{
	cout << "Player �Ҹ���" << endl;

}


void Player::Move()
{
}

void Player::Attack()
{
}

void Player::Pickup()
{
}
