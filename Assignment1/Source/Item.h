#pragma once

#include "GameObject.h"

class Item : public GameObject
{
public:
	Item();
	~Item();
	virtual void recievedDamage(const int&) = 0;
	const int getDurability();

protected:
	int durability_;
};

