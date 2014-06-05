#include<string>
#include<iostream>

#pragma once

//this class it taking the name and the type entered from the player
class PlayerInput
{
private:
	std::string name;
	int typeFromCreator;

public:
	std::string GetName();
	int GetTypeFromCreator();

	void GetUserInput();
};