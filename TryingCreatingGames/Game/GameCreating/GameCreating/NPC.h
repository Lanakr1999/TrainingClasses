#include <iostream>
#include <string>
#include <conio.h>
#include <math.h>

#ifndef NPC_H_
#define NPC_H_


class NPC
{

public:

	NPC();

	~NPC();

	NPC(std::string Hero);

	void getch();

	int SetHealth(int HP);

	int ResetHealth();

	int SetArmor(int ARM);

	int SetDamage(int DPS);

	void Battle();

	void GetInfoMain();

	void GetInfoEnemy();

	int Damage();

	void Fight();

	int LvlUp();

	int UpLevel();

protected:

	int lvl = 1;
	int exp = 0;
	int reducedHealth;
	int interaction;
	int takingdamage;
	std::string hero;
	int health;
	int damage;
	int armor;
	int damageFormul;


	int ab = 1000;


};

#endif