#include"Printer.h"

void Printer::BeginningText()
{
	std::cout << "Welcome to the Gladiator's Arena.\n";
	std::cout << "-------------------------------------------------------------------\n";
	std::cout << "If you are playing for first time or you don't know the different types of\n";
	std::cout << "gladiators, form which you can choose enter 1 !!! Otherwise, enter 0.\n";
}

void Printer::FirstGameText(Gladiator* gladiator)
{
	std::cout << "This is your first fight gladiator " << gladiator->GetName() << ". Try not to die!\n";
}

void Printer::ContinueGameText()
{
	std::cout << "Do you want to fight again: 1 - Yes; 0 - No.\n";
}

void Printer::EnemyStats(Gladiator* gladiator)
{
	std::cout << "-----------------------------------------------\n";
	std::cout << "You are fighting " << gladiator->GetName() << std::endl;
	std::cout << gladiator->GetName() << " has " << gladiator->GetDamage() << " damage, " << gladiator->GetHealth()
		<< " health and " << gladiator->GetStamina() <<" stamina.\n";
	std::cout << "-----------------------------------------------\n";
}

void Printer::PlayerTurnText(Gladiator* player, Gladiator* enemy)
{
	std::cout << "Your turn.\n";
	std::cout << "Your current health: " << player->GetHealth() << "; current stamina: " << player->GetStamina() << std::endl;
	std::cout << "Opponet's current health: " << enemy->GetHealth() << "; current stamina: " << enemy->GetStamina() << std::endl;
	std::cout << "What will be your move now:\n";
	std::cout << "1 - Normal attack; 2 - Special attack; 3 - Defence\n";
}