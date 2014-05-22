#include<string>
#include"RandomGenerator.h"

#pragma once

class EnemyCreator
{
private:
	string name;
	int typeFromEmenyCreator;

public:
	void CreateEnemy();

	int GetTypeFromEmenyCreator();
	
	string GetName();
};