#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>

#ifndef ENEMYNPC_H_
#define ENEMYNPC_H_

class EnemyNPC 
{
public:

	EnemyNPC();

	EnemyNPC(std::string EnemyName);

	~EnemyNPC();

	int EnemyDamage();

	int EnemyHealth();

	int EnemyArmor();
	

protected:

	int enemyDamage;

	int enemyHealth;

	int enemyArmor;
	
};

#endif 