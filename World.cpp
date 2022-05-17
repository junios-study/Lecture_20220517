#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

World::World()
{
	//Init();
}

World::~World()
{
	Term();
}

void World::Term()
{
	for (size_t i = 0; i < MyCharacter.size(); ++i)
	{
		delete MyCharacter[i];
	}
}

void World::Init()
{
	//Map Load
	MyCharacter.push_back(new Player);
	MyCharacter.push_back(new Goblin);
	MyCharacter.push_back(new Slime);
	MyCharacter.push_back(new Boar);

}

void World::Tick()
{
	//All Monster
	for (size_t i = 0; i < MyCharacter.size(); ++i)
	{
		MyCharacter[i]->Move();
	}
}

void World::Render()
{
}
