#include"Gladiator.h"

#pragma once

class Dimachaerius : public Gladiator
{
public:

	Dimachaerius();
	Dimachaerius(std::string name);
	
	virtual int SpecialAttack();
};