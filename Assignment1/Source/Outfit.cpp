#include "Outfit.h"

Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL)
	:Item(kName, durability_), kSPECIAL(kSPECIAL)
{

}

Outfit::~Outfit()
{

}

void Outfit::receiveDamage(const int&  durability_)
{
	this->durability_ = durability_;
}

const int Outfit::getSPECIAL()
{
	return kSPECIAL;
}