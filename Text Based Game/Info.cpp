#include"Info.h"

void Info::GetInfo()
{
	cout << "There are different types of gladiators, form which you can choose:\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "1. The Murmillo gladiator has a short sword, a big shield and a helmet.\n";
	cout << "He has the best defence, but his damage is not very big. His stats are:\n";
	cout << "Health:" << murmillo.GetHealth() << " Stamina:" << murmillo.GetStamina() << " Damage:"
		<< murmillo.GetDamage() << " Armor:" << murmillo.GetArmor() << endl;
	//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
	cout << "His special attack is Kick and Slice and it uses 60 stamina.\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "2. The Thraex gladiator has a short sword and a small shield.\n";
	cout << "He has a good defence, but his damage is not very big. His stats are:\n";
	cout << "Health:" << thraex.GetHealth() << " Stamina:" << thraex.GetStamina() << " Damage:"
		<< thraex.GetDamage() << " Armor:" << thraex.GetArmor() << endl;
	//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
	cout << "His special attack is Backstab and it uses 40 stamina.\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "3. The Retarius gladiator has a three-pointed trident and a fishing net.\n";
	cout << "He has a low defence, but his damage is big. His stats are:\n";
	cout << "Health:" << retarius.GetHealth() << " Stamina:" << retarius.GetStamina() << " Damage:"
		<< retarius.GetDamage() << " Armor:" << retarius.GetArmor() << endl;
	//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
	cout << "His special attack is Throw the Net and it uses 80 stamina.\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "4. The Dimachaerius gladiator has two swords, but almost no armor.\n";
	cout << "He has the lowest defence, but his damage is the biggest. His stats are:\n";
	cout << "Health:" << dimachaerius.GetHealth() << " Stamina:" << dimachaerius.GetStamina() << " Damage:"
		<< dimachaerius.GetDamage() << " Armor:" << dimachaerius.GetArmor() << endl;
	//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
	cout << "His special attack is Double Swing and it uses 70 stamina.\n";
	cout << "-------------------------------------------------------------------\n";
	cout << "5. The Samnite gladiator has a gladius, legioner's shield and helmet.\n";
	cout << "He has very good defence and his damage is average. His stats are:\n";
	cout << "Health:" << samnite.GetHealth() << " Stamina:" << samnite.GetStamina() << " Damage:"
		<< samnite.GetDamage() << " Armor:" << samnite.GetArmor() << endl;
	//if neededStamina in SpecialAttack is changed it must be also changed in the string below!!! 
	cout << "His special attack is Counter Attack and it uses 70 stamina.\n";
	cout << "-------------------------------------------------------------------\n";
}
