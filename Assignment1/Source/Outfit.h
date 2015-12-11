#ifndef OUTFIT_H
#define OUTFIT_H

#include "Item.h"

class Outfit: public Item
{
public:
	Outfit();
	Outfit(const string&, const int&, const int&);
	~Outfit();
	const int getSPECIAL();
private:
	const int kSPECIAL;

};
#endif