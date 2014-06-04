#include"Printer.h"

void Printer::BeginningText()
{
	cout << "Welcome to the Gladiator's Arena.\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "If you are playing for first time or you don't know the different types of\n";
	cout << "gladiators, form which you can choose enter 1 !!! Otherwise, enter 0.\n";
}

void Printer::FirstGameText(Gladiator* gladiator)
{
	cout << "This is your first fight gladiator " << gladiator->GetName() << ". Try not to die!\n";
}

void Printer::ContinueGameText()
{
	cout << "Do you want to fight again: 1 - Yes; 0 - No.\n";
}

void Printer::EnemyStats(Gladiator* gladiator)
{
	cout << "-----------------------------------------------\n";
	cout << "You are fighting " << gladiator->GetName() << endl;
	cout << gladiator->GetName() << " has " << gladiator->GetDamage() << " damage, " << gladiator->GetHealth()
		<< " health and " << gladiator->GetStamina() <<" stamina.\n";
	cout << "-----------------------------------------------\n";
}

void Printer::PlayerTurnText(Gladiator* player, Gladiator* enemy)
{
	cout << "Your turn.\n";
	cout << "Your current health: " << player->GetHealth() << "; current stamina: " << player->GetStamina() << endl;
	cout << "Opponet's current health: " << enemy->GetHealth() << "; current stamina: " << enemy->GetStamina() << endl;
	cout << "What will be your move now:\n";
	cout << "1 - Normal attack; 2 - Special attack; 3 - Defence\n";
}