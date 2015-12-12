#include "Weapon.h"

Weapon::Weapon(const string& kName, const int& durability_, const int& kAttackDmg)
	:GameObject(kName), kAttackDmg(kAttackDmg), durability_(durability_), 
{

}

Weapon::~Weapon()
{

}

const int Weapon::getAttackDmg()
{
	if (kAttackDmg < 0)
	{
		const int kAttackDmg = 0;
	}

	return kAttackDmg;
}