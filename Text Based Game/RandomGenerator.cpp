#include"RandomGenerator.h"

string RandomGenerator::RandName()
{
	string name;
	srand (time(NULL));
	int pickName = rand() % 11;
	string names[] = {"Spartacus", "Septimus", "Herakleides", "Hyperion", "Cyprianus", "Vibianus", "Aquilinus", "Eutychios", "Pankratios", "Nikandros", "Epimetheus"};
	name = names[pickName];
	return name;
}
int RandomGenerator::RandNumber(int from, int to)
{
	srand (time(NULL));
	int randNumber = rand() % to + from;
	return randNumber;
}
