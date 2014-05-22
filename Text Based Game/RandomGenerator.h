#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;

#pragma once

class RandomGenerator
{
public:
	string RandName();
	
	int RandNumber(int from, int to);
};