#include<string>
#include<iostream>

using namespace std;

#pragma once

//this class it taking the name and the type entered from the player
class PlayerInput
{
private:
	string name;
	int typeFromCreator;

public:
	string GetName();
	int GetTypeFromCreator();

	void GetUserInput();
};