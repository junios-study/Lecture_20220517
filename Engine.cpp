#include "Engine.h"

Engine::Engine()
{
	MyWorld = new CustomWorld();
	MyWorld->Init();
}

Engine::~Engine()
{
	delete MyWorld;
}

void Engine::Run()
{
	while (1)
	{
		MyWorld->Tick();
		MyWorld->Render();
	}
}
