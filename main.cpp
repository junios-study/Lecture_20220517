#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

#include <string>

using namespace std;

int main()
{
	Player* MyPlayer = new Player(100, 100, 100);



	delete MyPlayer;

	return 0;
}