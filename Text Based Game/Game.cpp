#include"Game.h"

void Game::Run()
{
	Printer printer;
	printer.BeginningText();
	int infoOn = 0;
	std::cin >> infoOn;
	if (infoOn)
	{
		Info info;
		info.GetInfo();
	}

	PlayerInput playerInput;
	playerInput.GetUserInput();
	GladiatorCreator gladiatorCreator;
	player = gladiatorCreator.CreateGladiator(playerInput.GetName(), playerInput.GetTypeFromCreator());

	std::cout << std::endl;

	int continueTheGame = 1;
	int firstFight = 0;
	while (continueTheGame)
	{
		if(player->GetAlive() == 0)
			break;
		if (firstFight == 0)
		{
			printer.FirstGameText(player);
			firstFight++;
		}
		else
		{
			printer.ContinueGameText();
			std::cin >> continueTheGame;
			if(continueTheGame != 1)
			{
				break;
			}
		}

		RandomEnemy randomEnemy;
		randomEnemy.GetRandomValues();
		enemy = gladiatorCreator.CreateGladiator(randomEnemy.GetName(), randomEnemy.GetTypeOfEmeny());

		std::cout << std::endl;

		FightSimulator battle;
		battle.Fight(player, enemy);
	}
}