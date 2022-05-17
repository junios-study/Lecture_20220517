#pragma once
#include "World.h"
class CustomWorld : public World
{
public:
	CustomWorld();
	virtual ~CustomWorld();

	virtual void Init() override;
};

