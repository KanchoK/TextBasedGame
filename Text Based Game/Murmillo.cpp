#include"Murmillo.h"

Murmillo::Murmillo()
{
	health = 100;
	stamina = 100;
	damage = 15;
	armor = 40;
}

Murmillo::Murmillo(std::string name)
{
	this->name = name;
	health = 100;
	stamina = 100;
	damage = 15;
	armor = 40;
	alive = 1;
}

int Murmillo::SpecialAttack()
{
	int neededStamina = 60;
	if(stamina < neededStamina)
	{
		std::cout << name << " didn't have enough stamina, so he did normal attack.\n";
		damageDone = this->NormalAttack();
	}
	else
	{
		std::cout << name << " used Murmillo's special attack Kick and Slice\n";
		damageDone = damage + 15;
		stamina -= neededStamina;
	}

	return damageDone;
}
