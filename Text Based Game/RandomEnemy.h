#include<string>
#include"RandomGenerator.h"

#pragma once

//this class gives random name and type to the enemy
class RandomEnemy
{
private:
	std::string name;
	int typeOfEnemy;

public:
	std::string GetName();
	int GetTypeOfEmeny();
	
	//set's the this->name and this->typeOfEnemy random values
	void GetRandomValues();
};