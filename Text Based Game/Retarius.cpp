#include"Retarius.h"

Retarius::Retarius()
{
	health = 140;
	stamina = 120;
	damage = 20;
	armor = 15;
}

Retarius::Retarius(std::string name)
{
	this->name = name;
	health = 140;
	stamina = 120;
	damage = 20;
	armor = 15;
	alive = 1;
}

int Retarius::SpecialAttack()
{
	int neededStamina = 80;
	if(stamina < neededStamina)
	{
		std::cout << name << " didn't have enough stamina, so he did normal attack.\n";
		damageDone = this->NormalAttack();
	}
	else
	{
		std::cout << name << " used Retarius' special attack Throw the Net.\n";
		damageDone = damage + 40;
		stamina -= neededStamina;
	}
	return damageDone;
}