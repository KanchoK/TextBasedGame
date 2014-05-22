#include<string>
#include<iostream>

using namespace std;

#pragma once

class PlayerCreator
{
private:
	string name;
	int typeFromCreator;

public:
	void CreatePlayer();

	int GetTypeFromCreator();
	
	string GetName();
};