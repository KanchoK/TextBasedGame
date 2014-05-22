#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

class Gladiator
{
protected:
	//It may be unnecessery to have typeOfGladiator in Gladiator class
	int typeOfGladiator;

	bool alive;
	string name;
	int health;
	int stamina;
	int damage;
	int damageDone;
	int armor;
public:
	Gladiator(){}

	bool GetAlive()
	{
		return alive;
	}

	int GetHealth()
	{
		return health;
	}

	void SetHealth(int value)
	{
		health = value;
	}

	int GetStamina()
	{
		return stamina;
	}

	void SetStamina(int value)
	{
		stamina = value;
	}

	int GetDamage()
	{
		return damage;
	}

	int GetArmor()
	{
		return armor;
	}

	string GetName()
	{
		return name;
	}

	int NormalAttack()
	{
		int damageDone = damage;
		return damageDone;
	}

	virtual int SpecialAttack()
	{
		// Better way ???
		damageDone = 0;
		return damageDone;
	}

	int Deffence()
	{
		//May be changed to virtual and redifined in each child
		int damageBlocked = armor;
		return damageBlocked;
	}

	//
	int GetTypeOfGladiator()
	{
		return typeOfGladiator;
	}
	//
	void SetTypeOfGladiator(int type)
	{
		this->typeOfGladiator = type;
	}

	void SetAlive(bool value)
	{
		alive = value;
	}

	void PrintTest()
	{
		cout << name << " " << health << " " << stamina << " " << damage << " " << armor << "\n";
	}
};

class Murmillo : public Gladiator
{
public:

	Murmillo()
	{
		health = 100;
		stamina = 100;
		damage = 15;
		armor = 40;
	}

	Murmillo(string name)
	{
		this->name = name;
		health = 100;
		stamina = 100;
		damage = 15;
		armor = 40;
		alive = 1;
	}

	virtual int SpecialAttack()
	{
		int neededStamina = 60;
		if(stamina < neededStamina)
		{
			cout << name << " didn't have enough stamina, so he did normal attack.\n";
			damageDone = this->NormalAttack();
		}
		else
		{
			cout << name << " used Murmillo's special attack ...\n";
			damageDone = damage + 15;
			stamina -= neededStamina;
		}

		return damageDone;
	}
};

class Thraex : public Gladiator
{
public:

	Thraex()
	{
		health = 100;
		stamina = 160;
		damage = 15;
		armor = 25;
	}

	Thraex(string name)
	{
		this->name = name;
		health = 100;
		stamina = 160;
		damage = 15;
		armor = 25;
		alive = 1;
	}

	virtual int SpecialAttack()
	{
		int neededStamina = 40;
		if(stamina < neededStamina)
		{
			cout << name << " didn't have enough stamina, so he did normal attack.\n";
			damageDone = this->NormalAttack();
		}
		else
		{
			cout << name << " used Thraex' special attack ...\n";
			damageDone = damage + 10;
			stamina -= neededStamina;
		}
		return damageDone;
	}
};

class Retarius : public Gladiator
{
public:

	Retarius()
	{
		health = 140;
		stamina = 120;
		damage = 20;
		armor = 15;
	}

	Retarius(string name)
	{
		this->name = name;
		health = 140;
		stamina = 120;
		damage = 20;
		armor = 15;
		alive = 1;
	}

	virtual int SpecialAttack()
	{
		int neededStamina = 80;
		if(stamina < neededStamina)
		{
			cout << name << " didn't have enough stamina, so he did normal attack.\n";
			damageDone = this->NormalAttack();
		}
		else
		{
			cout << name << " used Retarius' special attack Throw the Net.\n";
			damageDone = damage + 40;
			stamina -= neededStamina;
		}
		return damageDone;
	}
};

class Dimachaerius : public Gladiator
{
public:

	Dimachaerius()
	{
		health = 120;
		stamina = 140;
		damage = 25;
		armor = 10;
	}

	Dimachaerius(string name)
	{
		this->name = name;
		health = 120;
		stamina = 140;
		damage = 25;
		armor = 10;
		alive = 1;
	}

	virtual int SpecialAttack()
	{
		int neededStamina = 70;
		if(stamina < neededStamina)
		{
			cout << name << " didn't have enough stamina, so he did normal attack.\n";
			damageDone = this->NormalAttack();
		}
		else
		{
			cout << name << " used Dimachaerius' special attack - Double Swing.\n";
			damageDone = damage * 2;
			stamina -= neededStamina;
		}
		return damageDone;
	}
};

class Samnite : public Gladiator
{
public:

	Samnite()
	{
		health = 120;
		stamina = 110;
		damage = 20;
		armor = 35;
	}

	Samnite(string name)
	{
		this->name = name;
		health = 120;
		stamina = 110;
		damage = 20;
		armor = 35;
		alive = 1;
	}

	virtual int SpecialAttack()
	{
		int neededStamina = 70;
		if(stamina < neededStamina)
		{
			cout << name << " didn't have enough stamina, so he did normal attack.\n";
			damageDone = this->NormalAttack();
		}
		else
		{
			cout << name << " used Samnite' special attack ...\n";
			damageDone = damage + 15;
			stamina -= neededStamina;
		}
		return damageDone;
	}
};

class Info
{
private:
	Murmillo murmillo;
	Thraex thraex;
	Retarius retarius;
	Dimachaerius dimachaerius;
	Samnite samnite;
public:
	void GetInfo()
	{
		cout << "There are different types of gladiators, form which you can choose:\n";
		cout << "-------------------------------------------------------------------\n";
		cout << "1. The Murmillo gladiator has a short sword, a big shield and a helmet.\n";
		cout << "He has the best deffence, but his damage is not very big. His stats are:\n";
		cout << "Health:" << murmillo.GetHealth() << " Stamina:" << murmillo.GetStamina() << " Damage:"
			<< murmillo.GetDamage() << " Armor:" << murmillo.GetArmor() << endl;
		//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
		cout << "His special attack is... and it uses 60 stamina.\n";
		cout << "-------------------------------------------------------------------\n";
		cout << "2. The Thraex gladiator has a short sword and a small shield.\n";
		cout << "He has a good deffence, but his damage is not very big. His stats are:\n";
		cout << "Health:" << thraex.GetHealth() << " Stamina:" << thraex.GetStamina() << " Damage:"
			<< thraex.GetDamage() << " Armor:" << thraex.GetArmor() << endl;
		//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
		cout << "His special attack is... and it uses 40 stamina.\n";
		cout << "-------------------------------------------------------------------\n";
		cout << "3. The Retarius gladiator has a three-pointed trident and a fishing net.\n";
		cout << "He has a low deffence, but his damage is big. His stats are:\n";
		cout << "Health:" << retarius.GetHealth() << " Stamina:" << retarius.GetStamina() << " Damage:"
			<< retarius.GetDamage() << " Armor:" << retarius.GetArmor() << endl;
		//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
		cout << "His special attack is... and it uses 80 stamina.\n";
		cout << "-------------------------------------------------------------------\n";
		cout << "4. The Dimachaerius gladiator has a two swords, but almost no armor.\n";
		cout << "He has the lowest deffence, but his damage is the biggest. His stats are:\n";
		cout << "Health:" << dimachaerius.GetHealth() << " Stamina:" << dimachaerius.GetStamina() << " Damage:"
			<< dimachaerius.GetDamage() << " Armor:" << dimachaerius.GetArmor() << endl;
		//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
		cout << "His special attack is... and it uses 70 stamina.\n";
		cout << "-------------------------------------------------------------------\n";
		cout << "5. The Samnite gladiator has a gladius, legioner's shield and helmet.\n";
		cout << "He has very good deffence and his damage is average. His stats are:\n";
		cout << "Health:" << samnite.GetHealth() << " Stamina:" << samnite.GetStamina() << " Damage:"
			<< samnite.GetDamage() << " Armor:" << samnite.GetArmor() << endl;
		//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
		cout << "His special attack is... and it uses 70 stamina.\n";
		cout << "-------------------------------------------------------------------\n";
	}
};

class RandomGenerator
{
public:
	string RandName()
	{
		string name;
		srand (time(NULL));
		int pickName = rand() % 11;
		string names[] = {"Spartacus", "Septimus", "Herakleides", "Hyperion", "Cyprianus", "Vibianus", "Aquilinus", "Eutychios", "Pankratios", "Nikandros", "Epimetheus"};
		name = names[pickName];
		return name;
	}
	int RandNumber(int from, int to)
	{
		srand (time(NULL));
		int randNumber = rand() % to + from;
		return randNumber;
	}

};

class PlayerCreator
{
private:
	string name;
	int typeFromCreator;
public:
	void CreatePlayer()
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

	int GetTypeFromCreator()
	{
		return typeFromCreator;
	}

	string GetName()
	{
		return name;
	}
};

class EnemyCreator
{
private:
	string name;
	int typeFromEmenyCreator;
public:
	void CreateEnemy()
	{
		RandomGenerator rand;
		name = rand.RandName();
		typeFromEmenyCreator = rand.RandNumber(1, 5);
	}

	int GetTypeFromEmenyCreator()
	{
		return typeFromEmenyCreator;
	}

	string GetName()
	{
		return name;
	}
};

class FightSimulator
{
private:
	
public:
	void Fight(Gladiator* player, Gladiator* enemy)
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

			////test
			//cout << "-----------------------------------------------\n";
			//player->PrintTest();
			//enemy->PrintTest();
			//cout << "-----------------------------------------------\n";

			cout << "Enemy's turn.\n";
			RandomGenerator randomGenerator;
			int typeOfEnemyAttack = randomGenerator.RandNumber(1, 3);
			switch (typeOfEnemyAttack)
			{
			case 1:
				enemyDamageBlocked = 0;
				enemyDamageDone = enemy->NormalAttack();
				break;
			case 2:
				enemyDamageBlocked = 0;
				enemyDamageDone = enemy->SpecialAttack();
				break;
			case 3:
			default:
				enemyDamageDone = 0;
				enemyDamageBlocked = enemy->Deffence();
				break;
			}
			cout << "-----------------------------------------------\n";

			////test
			//cout << "-----------------------------------------------\n";
			//player->PrintTest();
			//enemy->PrintTest();
			//cout << "-----------------------------------------------\n";

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
};

class Game
{
private:
	Gladiator* gladiator;
	Gladiator* enemy;
public:

	void Run()
	{
		cout << "Welcome to the Gladiator's Arena." <<endl;
		cout << "-------------------------------------------------------------------\n";
		cout << "If you are playing for first time or you don't know the different types of\n";
		cout << "gladiators, form which you can choose enter 1 !!! Otherwise, enter 0.\n";
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

			//Irrelevante ???
			//Samnite* player = static_cast<Samnite*>(gladiator);
			//player = new Samnite(playerCreator.GetName());
			break;
		}
		//It may be unnecessery to have typeOfGladiator in Gladiator class
		gladiator->SetTypeOfGladiator(typeFromCreator);

		cout << endl;

		bool continueTheGame = 1;
		int firstFight = 0;
		while (continueTheGame)
		{
			if(gladiator->GetAlive() == 0)
				break;
			if (firstFight == 0)
			{
				cout << "This is your first fight gladiator " << gladiator->GetName() << ". Try not to die!\n";
				firstFight++;
			}
			else
			{
				cout << "Do you want to fight: 1 - Yes; 0 - No.\n";
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
};

int main()
{
	Game game;
	game.Run();

	system ("pause");
	return 0;
}