#include"Gladiator.h"

#pragma once

class Retarius : public Gladiator
{
public:

	Retarius();
	Retarius(std::string name);
	
	virtual int SpecialAttack();
};