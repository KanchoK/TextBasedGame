#include"FightSimulator.h"

//this method is saying what will happen in the different cases of player's attacks
void FightSimulator::PlayerAttack(int typeOfAttack, Gladiator* player)
{
	switch (typeOfAttack)
	{
	case 1:
		playerDamageBlocked = 0;
		playerDamageDone = player->NormalAttack();
		break;
	case 2:
		playerDamageBlocked = 0;
		playerDamageDone = player->SpecialAttack();;
		break;
	case 3:
	default:
		playerDamageDone = 0;
		playerDamageBlocked = player->Defence();
		break;
	}
}

//this method is saying what will happen in the different cases of enemy's attacks
void FightSimulator::EnemyAttack(int typeOfAttack, Gladiator* enemy)
{
	switch (typeOfAttack)
	{
	case 1:
		enemyDamageBlocked = 0;
		enemyDamageDone = enemy->NormalAttack();
		cout << enemy->GetName() << " used Normal attack.";
		break;
	case 2:
		enemyDamageBlocked = 0;
		enemyDamageDone = enemy->SpecialAttack();;
		break;
	case 3:
	default:
		enemyDamageDone = 0;
		enemyDamageBlocked = enemy->Defence();
		cout << enemy->GetName() << " used Defence.";
		break;
	}
}

//recovers 20 stamina per turn if typeOfAttack is Defence(); else recovers 10 stamina per turn
void FightSimulator::StaminaRecovery(int typeOfAttack, Gladiator* gladiator)
{
	if (typeOfAttack != 1 && typeOfAttack != 2)
		{
			gladiator->SetStamina(gladiator->GetStamina() + 20);
		}
		else
		{
			gladiator->SetStamina(gladiator->GetStamina() + 10);
		}
}

//Outcome of the fight
void FightSimulator::FightOutcome(Gladiator* player, Gladiator* enemy)
{
	if(enemy->GetHealth() <= 0)
	{
		cout << "You won!\n";
		player->SetHealth(playerHealth);
		player->SetStamina(playerStamina);

		//delete enemy when you beat him
		delete enemy;
	}
	else
	{
		cout << "You died!\n";

		//this indicates that you are dead and the game is over
		player->SetAlive(0);
	}
}

void FightSimulator::Fight(Gladiator* player, Gladiator* enemy)
{
	this->playerHealth = player->GetHealth();
	this->playerStamina = player->GetStamina();
	this->playerDamageDone = 0;
	this->playerDamageBlocked = 0;
	this->enemyDamageDone = 0;
	this->enemyDamageBlocked = 0;

	Printer printer;
	printer.EnemyStats(enemy);

	while (player->GetHealth() > 0 && enemy->GetHealth() > 0)
	{
		printer.PlayerTurnText(player, enemy);
		int typeOfPlayerAttack;
		cin >> typeOfPlayerAttack;

		//this method is saying what will happen in the different cases of attacks
		PlayerAttack(typeOfPlayerAttack, player);

		cout << "-----------------------------------------------\n";
		cout << "Enemy's turn.\n";
		RandomGenerator randomGenerator;
		int typeOfEnemyAttack = randomGenerator.RandNumber(1, 3);
		EnemyAttack(typeOfEnemyAttack, enemy);
		cout << endl;
		cout << "-----------------------------------------------\n";

		//sets the player's and enemy's damegeDone after the blocked damage is taken in consideretion
		if (playerDamageDone > enemyDamageBlocked)
		{
			playerDamageDone -= enemyDamageBlocked;
		}
		else
		{
			playerDamageDone = 0;
		}
		if (enemyDamageDone > playerDamageBlocked)
		{
			enemyDamageDone -= playerDamageBlocked;
		}
		else
		{
			enemyDamageDone = 0;
		}

		//sets the player's and enemy's stats after the turn
		player->SetHealth(player->GetHealth() - enemyDamageDone);
		enemy->SetHealth(enemy->GetHealth() - playerDamageDone);

		StaminaRecovery(typeOfPlayerAttack, player);
		StaminaRecovery(typeOfEnemyAttack, enemy);
	}
	FightOutcome(player, enemy);
}