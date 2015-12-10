#pragma once

#include "Item.h"

class Weapon : public Item
{
public:
	Weapon();
	virtual ~Weapon();
	const int getAttackDmg();
private:
	const int kAttackDmg;
};

