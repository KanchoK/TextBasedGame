#include"GladiatorCreator.h"

Gladiator* GladiatorCreator::CreateGladiator(std::string name, int typeOfGladiator)
{
	switch (typeOfGladiator)
	{
	case 1:
		gladiator = new Murmillo(name);
		break;
	case 2:
		gladiator = new Thraex(name);
		break;
	case 3:
		gladiator = new Retarius(name);
		break;
	case 4:

		gladiator = new Dimachaerius(name);
		break;
	case 5:
		gladiator = new Samnite(name);
		break;
	}
	return gladiator;
}
