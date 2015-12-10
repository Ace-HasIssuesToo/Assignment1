#pragma once

#include "Item.h"

class Outfit: public Item
{
public:
	Outfit();
	virtual ~Outfit();
	const int getSPECIAL();
private:
	const int kSPECIAL;

};