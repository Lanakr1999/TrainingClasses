#include "NPC.h"
#include "EnemyNPC.h"
#include <string>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");


	NPC Hero ("�����");

	Hero.SetArmor(25);
	Hero.SetHealth(500);
	Hero.SetDamage(46);

	Hero.Battle();

	Hero.getch();


	EnemyNPC Misha("׸�� � ������");

	Misha.EnemyDamage();

	Misha.EnemyHealth();

	Misha.EnemyArmor();

	Misha.~EnemyNPC();

	system("pause");

	return 0;
}
