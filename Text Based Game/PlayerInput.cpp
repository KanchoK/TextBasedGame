#include"PlayerInput.h"

string PlayerInput::GetName()
{
	return name;
}

int PlayerInput::GetTypeFromCreator()
{
	return typeFromCreator;
}

void PlayerInput::GetUserInput()
{
	cout << "What's your name warrior? (enter your nickname)\n";
	cin >> name;
	cout << "What kind of gladiator are you " << name << "?\n";
	cout << "1 - Murmillo; 2 - Thraex; 3 - Retarius; 4 - Dimachaerius; 5 - Samnite\n";
	do
	{
		cout << "You need to enter the number of the gladiator you've chosen!\n";
		cin >> typeFromCreator;
	} while (typeFromCreator < 1 && typeFromCreator > 5);
}