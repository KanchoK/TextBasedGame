#include"Gladiator.h"
#include"Info.h"
#include"PlayerCreator.h"
#include"EnemyCreator.h"
#include"FightSimulator.h"

#pragma once

class Game
{
private:
	Gladiator* gladiator;
	Gladiator* enemy;

public:

	void Run();
};