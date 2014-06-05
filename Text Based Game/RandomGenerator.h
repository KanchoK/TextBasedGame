#include<ctime>
#include<cstdlib>
#include<string>

#pragma once

class RandomGenerator
{
public:
	std::string RandName();
	
	int RandNumber(int from, int to);
};