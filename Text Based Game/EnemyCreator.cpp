#include"EnemyCreator.h"


void EnemyCreator::CreateEnemy()
{
	RandomGenerator rand;
	name = rand.RandName();
	typeFromEmenyCreator = rand.RandNumber(1, 5);
}

int EnemyCreator::GetTypeFromEmenyCreator()
{
	return typeFromEmenyCreator;
}

string EnemyCreator::GetName()
{
	return name;
}
