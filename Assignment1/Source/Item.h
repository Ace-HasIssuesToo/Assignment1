#ifndef ITEM_H
#define ITEM_H

#include "GameObject.h"

class Item : public GameObject
{
public:
	Item(const string kName, const int& durability_);
	~Item();
	virtual void receivedDamage(const int&) = 0;
	const int getDurability();

protected:
	int durability_;
};

#endif