#include"Gladiator.h"

#pragma once

class Thraex : public Gladiator
{
public:

	Thraex();
	Thraex(std::string name);

	virtual int SpecialAttack();
};