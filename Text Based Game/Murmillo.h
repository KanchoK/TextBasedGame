#include"Gladiator.h"

#pragma once

class Murmillo : public Gladiator
{
public:

	Murmillo();
	Murmillo(string name);
	
	virtual int SpecialAttack();
};