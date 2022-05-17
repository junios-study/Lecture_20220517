#include "CustomWorld.h"
#include "Player.h"
#include "Goblin.h"

CustomWorld::CustomWorld()
{
}

CustomWorld::~CustomWorld()
{
}

void CustomWorld::Init()
{
	MyCharacter.push_back(new Player);
	MyCharacter.push_back(new Goblin);
}
