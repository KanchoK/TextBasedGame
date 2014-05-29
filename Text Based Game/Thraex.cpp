#include"Thraex.h"

Thraex::Thraex()
{
	health = 100;
	stamina = 160;
	damage = 15;
	armor = 25;
}

Thraex::Thraex(string name)
{
	this->name = name;
	health = 110;
	stamina = 160;
	damage = 15;
	armor = 25;
	alive = 1;
}

int Thraex::SpecialAttack()
{
	int neededStamina = 40;
	if(stamina < neededStamina)
	{
		cout << name << " didn't have enough stamina, so he did normal attack.\n";
		damageDone = this->NormalAttack();
	}
	else
	{
		cout << name << " used Thraex' special attack Backstab\n";
		damageDone = damage + 20;
		stamina -= neededStamina;
	}
	return damageDone;
}
