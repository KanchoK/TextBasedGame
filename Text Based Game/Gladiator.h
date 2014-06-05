#include<string>
#include<iostream>

#pragma once

class Gladiator
{
protected:

	bool alive;
	std::string name;
	int health;
	int stamina;
	int damage;
	int damageDone;
	int armor;
public:
	Gladiator();

	bool GetAlive();
	void SetAlive(bool value);

	int GetHealth();
	void SetHealth(int value);

	int GetStamina();
	void SetStamina(int value);

	int GetDamage();
	int GetArmor();
	std::string GetName();

	int NormalAttack();
	virtual int SpecialAttack();
	int Defence();
};