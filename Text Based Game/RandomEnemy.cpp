#include"RandomEnemy.h"

string RandomEnemy::GetName()
{
	return name;
}

int RandomEnemy::GetTypeOfEmeny()
{
	return typeOfEnemy;
}

void RandomEnemy::GetRandomValues()
{
	RandomGenerator rand;
	name = rand.RandName();
	typeOfEnemy = rand.RandNumber(1, 5);
}