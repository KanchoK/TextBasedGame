#include"Gladiator.h"

#pragma once

class Murmillo : public Gladiator
{
public:

	Murmillo();
	Murmillo(std::string name);
	
	virtual int SpecialAttack();
};