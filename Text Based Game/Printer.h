#include"Gladiator.h"

#pragma once

class Printer
{
public:
	void BeginningText();
	void FirstGameText(Gladiator* gladiator);
	void ContinueGameText();
	void EnemyStats(Gladiator* gladiator);
	void PlayerTurnText(Gladiator* gladiator, Gladiator* enemy);
};