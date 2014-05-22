#include"Samnite.h"

Samnite::Samnite()
{
	health = 120;
	stamina = 110;
	damage = 20;
	armor = 35;
}

Samnite::Samnite(string name)
{
	this->name = name;
	health = 120;
	stamina = 110;
	damage = 20;
	armor = 35;
	alive = 1;
}

int Samnite::SpecialAttack()
{
	int neededStamina = 70;
	if(stamina < neededStamina)
	{
		cout << name << " didn't have enough stamina, so he did normal attack.\n";
		damageDone = this->NormalAttack();
	}
	else
	{
		cout << name << " used Samnite' special attack ...\n";
		damageDone = damage + 15;
		stamina -= neededStamina;
	}
	return damageDone;
}