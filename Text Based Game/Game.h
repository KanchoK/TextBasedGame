#include"Gladiator.h"
#include"Murmillo.h"
#include"Thraex.h"
#include"Retarius.h"
#include"Dimachaerius.h"
#include"Samnite.h"
#include"Info.h"
#include"PlayerInput.h"
#include"RandomEnemy.h"
#include"GladiatorCreator.h"
#include"FightSimulator.h"
#include"Printer.h"

#pragma once

class Game
{
private:
	Gladiator* player;
	Gladiator* enemy;

public:
	void Run();
};