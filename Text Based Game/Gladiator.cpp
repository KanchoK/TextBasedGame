#include"Gladiator.h"

Gladiator::Gladiator(){}

bool Gladiator::GetAlive()
{
	return alive;
}

void Gladiator::SetAlive(bool value)
{
	alive = value;
}

int Gladiator::GetHealth()
{
	return health;
}

void Gladiator::SetHealth(int value)
{
	health = value;
}

int Gladiator::GetStamina()
{
	return stamina;
}

void Gladiator::SetStamina(int value)
{
	stamina = value;
}

int Gladiator::GetDamage()
{
	return damage;
}

int Gladiator::GetArmor()
{
	return armor;
}

std::string Gladiator::GetName()
{
	return name;
}

int Gladiator::NormalAttack()
{
	int damageDone = damage;
	return damageDone;
}

int Gladiator::SpecialAttack()
{
	damageDone = 0;
	return damageDone;
}

int Gladiator::Defence()
{
	//May be changed to virtual and redifined in each child
	int damageBlocked = armor;
	return damageBlocked;
}