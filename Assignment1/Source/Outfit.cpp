#include "Outfit.h"

Outfit::Outfit()
	:kSPECIAL(kSPECIAL)
{

}

Outfit::Outfit(const string& kName, const int& durability_, const int& kSPECIAL)
	:kSPECIAL(kSPECIAL)
{

}

Outfit::~Outfit()
{

}

const int Outfit::getSPECIAL()
{
	int S = 0, P = 0, E = 0, C = 0, I = 0, A = 0, L = 0;

	if (S > 9)
	{
		S = 9;
	}

	if (P > 9)
	{
		P = 9;
	}

	if (E > 9)
	{
		E = 9;
	}

	if (C > 9)
	{
		C = 9;
	}

	if (I > 9)
	{
		I = 9;
	}

	if (A > 9)
	{
		A = 9;
	}

	if (L > 9)
	{
		L = 9;
	}

	if (S < 0)
	{
		S = 0;
	}

	if (P < 0)
	{
		P = 0;
	}

	if (E < 0)
	{
		E = 0;
	}

	if (C < 0)
	{
		C = 0;
	}

	if (I < 0)
	{
		I = 0;
	}

	if (A < 0)
	{
		A = 0;
	}

	if (L < 0)
	{
		L = 0;
	}
	return kSPECIAL;
}