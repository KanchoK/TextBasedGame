#include"Dimachaerius.h"

Dimachaerius::Dimachaerius()
{
	health = 120;
	stamina = 140;
	damage = 25;
	armor = 10;
}

Dimachaerius::Dimachaerius(std::string name)
{
	this->name = name;
	health = 120;
	stamina = 140;
	damage = 25;
	armor = 10;
	alive = 1;
}

int Dimachaerius::SpecialAttack()
{
	int neededStamina = 70;
	if(stamina < neededStamina)
	{
		std::cout << name << " didn't have enough stamina, so he did normal attack.\n";
		damageDone = this->NormalAttack();
	}
	else
	{
		std::cout << name << " used Dimachaerius' special attack - Double Swing.\n";
		damageDone = damage * 2;
		stamina -= neededStamina;
	}
	return damageDone;
}