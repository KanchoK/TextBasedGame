#include"PlayerInput.h"

std::string PlayerInput::GetName()
{
	return name;
}

int PlayerInput::GetTypeFromCreator()
{
	return typeFromCreator;
}

void PlayerInput::GetUserInput()
{
	std::cout << "What's your name warrior? (enter your nickname)\n";
	std::cin >> name;
	std::cout << "What kind of gladiator are you " << name << "?\n";
	std::cout << "1 - Murmillo; 2 - Thraex; 3 - Retarius; 4 - Dimachaerius; 5 - Samnite\n";
	do
	{
		std::cout << "You need to enter the number of the gladiator you've chosen!\n";
		std::cin >> typeFromCreator;
	} while (typeFromCreator < 1 && typeFromCreator > 5);
}