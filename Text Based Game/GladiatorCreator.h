#include<string>
#include<iostream>
#include"Gladiator.h"
#include"Murmillo.h"
#include"Thraex.h"
#include"Retarius.h"
#include"Dimachaerius.h"
#include"Samnite.h"

#pragma once

class GladiatorCreator
{
private:
	Gladiator* gladiator;

public:
	Gladiator* CreateGladiator(std::string name, int typeOfGladiator);
};