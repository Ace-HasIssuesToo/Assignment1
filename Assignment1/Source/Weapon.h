#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"

class Weapon : public Item
{
public:
	Weapon(const string&, const int&, const int&);
	virtual ~Weapon();
	const int getAttackDmg();
	virtual void receiveDamage(const int&);
private:
	const int kAttackDmg;
};
#endif