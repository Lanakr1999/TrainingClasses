#include "EnemyNPC.h"

EnemyNPC::EnemyNPC()
{
}

EnemyNPC::EnemyNPC(std::string EnemyName)
{
	std::cout << std::endl  << "  Напал на вас \n\n\n";
	
}


EnemyNPC::~EnemyNPC()
{
	std::cout << "Враг повержен\n\n" << std::endl;
}

int EnemyNPC::EnemyDamage()
{
	
	return enemyDamage = 40;
}

int EnemyNPC::EnemyHealth()
{
	return enemyHealth = 250;
}

int EnemyNPC::EnemyArmor()
{
	return enemyArmor = 8;
}

