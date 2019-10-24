#include "NPC.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>

#ifndef ENEMYNPC_H_
#define ENEMYNPC_H_

class EnemyNPC : public NPC
{
public:

	EnemyNPC();

	EnemyNPC(std::string EnemyName);

	~EnemyNPC();

protected:

	int enemyDamage;

	int enemyHealth;

	int enemyArmor;

};

#endif 