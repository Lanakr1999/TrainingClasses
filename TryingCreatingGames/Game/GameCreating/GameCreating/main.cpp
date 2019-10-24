#include "NPC.h"
#include "EnemyNPC.h"
#include <string>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");


	NPC Hero("Герой");

	Hero.SetArmor(25);
	Hero.SetHealth(500);
	Hero.SetDamage(46);

	Hero.Battle();

	Hero.getch();


	EnemyNPC Misha("Чёрт в пальто");

	Misha.SetArmor(15);
	Misha.SetDamage(25);
	Misha.SetHealth(2500);

	Misha.Battle();

	Misha.~EnemyNPC();

	system("pause");

	return 0;
}
