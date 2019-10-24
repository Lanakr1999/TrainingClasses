#include "EnemyNPC.h"

EnemyNPC::EnemyNPC()
{
}

EnemyNPC::EnemyNPC(std::string EnemyName)
{
	std::cout << std::endl << EnemyName << "  Напал на вас \n\n\n";

}


EnemyNPC::~EnemyNPC()
{
	std::cout << "Враг повержен\n\n" << std::endl;
}

