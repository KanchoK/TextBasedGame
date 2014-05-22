#include"PlayerCreator.h"

void PlayerCreator::CreatePlayer()
{
	cout << "What's your name warrior?\n";
	cin >> name;
	cout << "What kind of gladiator are you " << name << "?\n";
	cout << "1 - Murmillo; 2 - Thraex; 3 - Retarius; 4 - Dimachaerius; 5 - Samnite\n";
	do
	{
		cout << "You need to enter the number of the gladiator you've chosen!\n";
		cin >> typeFromCreator;
	} while (typeFromCreator < 1 && typeFromCreator > 5);
}

int PlayerCreator::GetTypeFromCreator()
{
	return typeFromCreator;
}

string PlayerCreator::GetName()
{
	return name;
}
