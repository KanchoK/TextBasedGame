#include"Gladiator.h"

#pragma once

class Dimachaerius : public Gladiator
{
public:

	Dimachaerius();
	Dimachaerius(string name);
	
	virtual int SpecialAttack();
};