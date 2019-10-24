#include "NPC.h"


NPC::~NPC()
{
}

int NPC::SetHealth(int HP)
{
	health = HP;
	return health;
}

int NPC::ResetHealth()
{
	health = health - takingdamage;
	return health;
}


int NPC::SetArmor(int ARM)
{
	armor = ARM;
	return armor;
}

int NPC::SetDamage(int DPS)
{
	damage = DPS;
	return damage;
}

void NPC::Battle()
{
	Damage();
	while (reducedHealth > 0)
	{
		
		Damage();
		LvlUp();
			
	}
	
	Fight();
	
}

void NPC::GetInfoMain()
{
	std::cout << "���� ��������������:" << std::endl << "��������:" << reducedHealth << std::endl << "�����:" << damage << std::endl << "�����:" << armor;
}

void NPC::GetInfoEnemy()
{
	
}

int NPC::Damage()
{
	damageFormul = damage - armor * 0.8;
	if (damageFormul > 1)
		takingdamage = damage - armor * 0.75;
	else
		takingdamage = 1;
	 reducedHealth = health - takingdamage;
	 std::cout << std::endl << "���������� ����: " << takingdamage << std::endl << "\n�������� ��������:" << reducedHealth << std::endl;
	 ResetHealth();
	 return reducedHealth;
	 
	 


}

void NPC::Fight()
{
	
	if (health > 0)
		std::cout << "������!" << std::endl;
	    
	else
		std::cout << "��� ����� ����������� ������� � �����..." << std::endl;
		
}

int NPC::LvlUp()
{ 
		exp = exp + damage*2.5;
		if (exp >= 1000)
			UpLevel();
		else
			std::cout << "\n�� ���������� ������ ��������\n " << ab - exp;
	
	return lvl;
}

int NPC::UpLevel()
{
	health = health + health * 0.1;
	damage = damage + damage * 0.1;
	armor = armor + armor * 0.1;
	lvl++;
	exp = exp - ab;
	std::cout << "\n\t\t\t\t\t����������� � ����������� ������ ������!\n\t\t\t\t������ �� " << lvl << " ������\n";
	return exp;
}


NPC::NPC(std::string Hero)
{
	hero = Hero;
	std::cout << "�� ������� ������ �����:" << std::endl;
	SetHealth(health);
	SetDamage(damage);
	SetArmor(armor);
	std::cout << std::endl;
}

void NPC::getch()
{
		std::cout << "������� ���� ��� ���������� � �����, ��� ��� ���������� � �����, ��� ���" << std::endl;
		std::cin >> interaction;
		if (interaction == 1)
			GetInfoMain();
		if (interaction == 2)
			GetInfoEnemy();
		if (interaction == 3)
			Battle();

}
