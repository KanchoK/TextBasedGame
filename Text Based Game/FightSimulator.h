#include"Gladiator.h"
#include"RandomGenerator.h"
#include"Printer.h"

#pragma once

class FightSimulator
{
private:
	int playerHealth;
	int playerStamina;
	int playerDamageDone;
	int playerDamageBlocked;
	int enemyDamageDone;
	int enemyDamageBlocked;

public:
	void PlayerAttack(int typeOfAttack, Gladiator* player);
	void EnemyAttack(int typeOfAttack, Gladiator* enemy);
	void StaminaRecovery(int typeOfAttack, Gladiator* gladiator);
	void FightOutcome(Gladiator* player, Gladiator* enemy);
	void Fight(Gladiator* player, Gladiator* enemy);
};