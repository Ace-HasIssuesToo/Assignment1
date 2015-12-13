#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

class Outfit: public Item
{
public:
	Outfit(const string& kName, const int& durability_, const int& kSPECIAL);
	virtual ~Outfit();
	const int getSPECIAL();
	virtual void receiveDamage(const int&);
private:
	const int kSPECIAL;
};
#endif