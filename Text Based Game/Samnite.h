#include"Gladiator.h"

#pragma once

class Samnite : public Gladiator
{
public:

	Samnite();
	Samnite(std::string name);
	
	virtual int SpecialAttack();
};