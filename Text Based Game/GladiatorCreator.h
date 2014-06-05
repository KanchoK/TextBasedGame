#include<string>
#include<iostream>
#include"Gladiator.h"
#include"Murmillo.h"
#include"Thraex.h"
#include"Retarius.h"
#include"Dimachaerius.h"
#include"Samnite.h"

using namespace std;

#pragma once

class GladiatorCreator
{
private:
	Gladiator* gladiator;

public:
	Gladiator* CreateGladiator(string name, int typeOfGladiator);
};