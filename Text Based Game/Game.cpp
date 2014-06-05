#include"Game.h"

void Game::Run()
{
	Printer printer;
	printer.BeginningText();
	bool infoOn = 0;
	cin >> infoOn;
	if (infoOn)
	{
		Info info;
		info.GetInfo();
	}

	PlayerInput playerInput;
	playerInput.GetUserInput();
	GladiatorCreator gladiatorCreator;
	player = gladiatorCreator.CreateGladiator(playerInput.GetName(), playerInput.GetTypeFromCreator());

	cout << endl;

	bool continueTheGame = 1;
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
			cin >> continueTheGame;
			if(continueTheGame == 0)
				break;
		}

		RandomEnemy randomEnemy;
		randomEnemy.GetRandomValues();
		enemy = gladiatorCreator.CreateGladiator(randomEnemy.GetName(), randomEnemy.GetTypeOfEmeny());

		cout << endl;

		FightSimulator battle;
		battle.Fight(player, enemy);
	}
}