#include"Gladiator.h"

#pragma once

class Samnite : public Gladiator
{
public:

	Samnite();
	Samnite(string name);
	
	virtual int SpecialAttack();
};