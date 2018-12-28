g++ -c *.cpp
g++ -o TextBasedGame Main.o Dimachaerius.o FightSimulator.o Game.o Gladiator.o GladiatorCreator.o Info.o Murmillo.o PlayerInput.o Printer.o RandomEnemy.o RandomGenerator.o Retarius.o Samnite.o Thraex.o
rm *.o
mv TextBasedGame ..
