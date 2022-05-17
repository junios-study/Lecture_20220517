#pragma once
#include "World.h"
#include "CustomWorld.h"

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Run();

	World* MyWorld;
};

