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
	PlayerCreator playerCreator;
	playerCreator.CreatePlayer();
	int typeFromCreator = playerCreator.GetTypeFromCreator();
	switch (typeFromCreator)
	{
	case 1:
		gladiator = new Murmillo(playerCreator.GetName());
		break;
	case 2:
		gladiator = new Thraex(playerCreator.GetName());
		break;
	case 3:
		gladiator = new Retarius(playerCreator.GetName());
		break;
	case 4:
		gladiator = new Dimachaerius(playerCreator.GetName());
		break;
	case 5:
		gladiator = new Samnite(playerCreator.GetName());
		break;
	}

	cout << endl;

	bool continueTheGame = 1;
	int firstFight = 0;
	while (continueTheGame)
	{
		if(gladiator->GetAlive() == 0)
			break;
		if (firstFight == 0)
		{
			printer.FirstGameText(gladiator);
			firstFight++;
		}
		else
		{
			printer.ContinueGameText();
			cin >> continueTheGame;
			if(continueTheGame == 0)
				break;
		}
		EnemyCreator enemyCreator;
		enemyCreator.CreateEnemy();
		int typeFromEnemyCreator = enemyCreator.GetTypeFromEmenyCreator();
		switch (typeFromEnemyCreator)
		{
		case 1:
			enemy = new Murmillo(enemyCreator.GetName());
			break;
		case 2:
			enemy = new Thraex(enemyCreator.GetName());
			break;
		case 3:
			enemy = new Retarius(enemyCreator.GetName());
			break;
		case 4:
			enemy = new Dimachaerius(enemyCreator.GetName());
			break;
		case 5:
			enemy = new Samnite(enemyCreator.GetName());
			break;
		}

		cout << endl;

		FightSimulator battle;
		battle.Fight(gladiator, enemy);
	}
}