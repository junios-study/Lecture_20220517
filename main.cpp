#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"
#include "BossGoblin.h"

#include <string>
#include <vector> //container STL , Standard Template Library

using namespace std;

int main()
{
	//1-3
	srand(static_cast<unsigned int>(time(nullptr)));


	//생성

	//Monster* NewMonster = new Goblin;
	//Monster* NewMonster = new Slime;
	Monster* NewMonster = new Boar;

	NewMonster->Move();


	vector<Monster*> Monsters;
	Monsters.push_back(new BossGoblin);
	//Monsters.push_back(new Goblin);
	//Monsters.push_back(new Slime);
	//Monsters.push_back(new Boar);
	//Monsters.push_back(new Boar);


	//Tick
	for (int i = 0; i < Monsters.size(); ++i)
	{
		Monsters[i]->Move();
	}


	//삭제
	for (int i = 0; i < Monsters.size(); ++i)
	{
		delete Monsters[i];
	}


	return 0;
}