#include "Weapon.h"

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg)
	:Item(kName, durability_), kAttackDmg(kAttackDmg)
{

}

Weapon::~Weapon()
{

}

void Weapon::receiveDamage(const int&  durability_)
{
	this->durability_ = durability_;

}

const int Weapon::getAttackDmg()
{
	if (kAttackDmg < 0)
	{
		const int kAttackDmg = 0;
	}

	return kAttackDmg;
}