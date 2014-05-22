#include"Gladiator.h"

#pragma once

class Retarius : public Gladiator
{
public:

	Retarius();
	Retarius(string name);
	
	virtual int SpecialAttack();
};