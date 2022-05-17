#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

#include <string>
#include <vector> //container STL , Standard Template Library

using namespace std;

int main()
{
	//1-3
	srand(static_cast<unsigned int>(time(nullptr)));

	//생성
	int SpawnCount = rand() % 3 + 1;
	vector<Goblin*> Golblins;
	for (int i = 0; i < SpawnCount; ++i)
	{
		Golblins.push_back(new Goblin);
	}
	
	SpawnCount = rand() % 3 + 1;
	vector<Slime*> Slimes;
	for (int i = 0; i < SpawnCount; ++i)
	{
		Slimes.push_back(new Slime);
	}

	SpawnCount = rand() % 3 + 1;
	vector<Boar*> Boars;
	for (int i = 0; i < SpawnCount; ++i)
	{
		Boars.push_back(new Boar);
	}

	for (int i = 0; i < Golblins.size(); ++i)
	{
		Golblins[i]->Move();
	}
	for (int i = 0; i < Slimes.size(); ++i)
	{
		Slimes[i]->Move();
	}
	for (int i = 0; i < Boars.size(); ++i)
	{
		Boars[i]->Move();
	}


	//삭제
	for (int i = 0; i < Golblins.size(); ++i)
	{
		delete Golblins[i];
	}
	for (int i = 0; i < Slimes.size(); ++i)
	{
		delete Slimes[i];
	}
	for (int i = 0; i < Boars.size(); ++i)
	{
		delete Boars[i];
	}

	return 0;
}