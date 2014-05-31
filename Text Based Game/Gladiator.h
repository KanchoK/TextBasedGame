#include<string>
#include<iostream>

using namespace std;

#pragma once

class Gladiator
{
protected:

	bool alive;
	string name;
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
	string GetName();

	int NormalAttack();
	virtual int SpecialAttack();
	int Defence();

	void PrintTest();
};