#pragma once
#include <vector>
class Character;

using namespace std;

class World
{
public:
	World();
	virtual ~World();

	virtual void Term();

	virtual void Init();
	virtual void Tick();
	virtual void Render();

	vector<Character*> MyCharacter;
};

