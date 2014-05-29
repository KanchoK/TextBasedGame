#include"FightSimulator.h"

void FightSimulator::Fight(Gladiator* player, Gladiator* enemy)
{
	int playerHealth = player->GetHealth();
	int playerStamina = player->GetStamina();
	int playerDamageDone = 0;
	int playerDamageBlocked = 0;
	int enemyDamageDone = 0;
	int enemyDamageBlocked = 0;
	cout << "-----------------------------------------------\n";
	cout << "You are fighting " << enemy->GetName() << endl;
	cout << "-----------------------------------------------\n";

	while (player->GetHealth() > 0 && enemy->GetHealth() > 0)
	{
		cout << "Your turn.\n";
		cout << "Your current health: " << player->GetHealth() << "; current stamina: " << player->GetStamina() << endl;
		cout << "Opponet's current health: " << enemy->GetHealth() << endl;
		cout << "What will be your move now:\n";
		cout << "1 - Normal attack; 2 - Special attack; 3 - Deffence\n";
		int typeOfPlayerAttack;
		cin >> typeOfPlayerAttack;

		//this switch id saying what will happen in the different cases of attacks
		switch (typeOfPlayerAttack)
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
			playerDamageBlocked = player->Deffence();
			break;
		}
		
		//this makes sure if you beat the enemy to exit the while before the enemy can use deffence() and "revive" :)
		if (enemy->GetHealth() <= 0)
		{
			break;
		}

		cout << "-----------------------------------------------\n";
		cout << "Enemy's turn.\n";
		RandomGenerator randomGenerator;
		int typeOfEnemyAttack = randomGenerator.RandNumber(1, 3);
		switch (typeOfEnemyAttack)
		{
		case 1:
			enemyDamageBlocked = 0;
			enemyDamageDone = enemy->NormalAttack();
			cout << enemy->GetName() << " used Normal attack\n";
			break;
		case 2:
			enemyDamageBlocked = 0;
			enemyDamageDone = enemy->SpecialAttack();
			break;
		case 3:
		default:
			enemyDamageDone = 0;
			enemyDamageBlocked = enemy->Deffence();
			cout << enemy->GetName() << " used Deffence\n";
			break;
		}
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

		//recovers 20 stamina per turn if typeOfAttack is Deffence(); else recovers 10 stamina per turn
		if (typeOfPlayerAttack != 1 && typeOfPlayerAttack != 2)
		{
			player->SetStamina(player->GetStamina() + 20);
		}
		else
		{
			player->SetStamina(player->GetStamina() + 10);
		}
		if (typeOfEnemyAttack != 1 && typeOfEnemyAttack != 2)
		{
			enemy->SetStamina(enemy->GetStamina() + 20);
		}
		else
		{
			enemy->SetStamina(enemy->GetStamina() + 10);
		}
		
	}

	//Outcome of the fight
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