#include "Dweller.h"

Dweller::Dweller(const string& kName, const int& SPECIAL_)
	:GameObject(kName), SPECIAL_(SPECIAL_), position_(0, 0), health_(100), radiation_(0), stimpak_(0), radaway_(0), outfit_(NULL), weapon_(NULL)
{ 										 
}											

Dweller::~Dweller()						 
{										
}										 

const int Dweller::getSPECIAL()
{
	if (outfit_ != 0) //If an outfit exists
	{
		outfit_->getSPECIAL();

		//Initialise Combined SPECIAL
		int  S, P, E, C, I, A, L;

		//Dweller's SPECIAL
		int DwellerS = (SPECIAL_ / 1000000);
		int DwellerP = (SPECIAL_ / 100000) - (DwellerS * 10);
		int DwellerE = (SPECIAL_ / 10000) - (DwellerS * 100) - (DwellerP * 10);
		int DwellerC = (SPECIAL_ / 1000) - (DwellerS * 1000) - (DwellerP * 100) - (DwellerE * 10);
		int DwellerI = (SPECIAL_ / 100) - (DwellerS * 10000) - (DwellerP * 1000) - (DwellerE * 100) - (DwellerC * 10);
		int DwellerA = (SPECIAL_)-(DwellerS * 100000) - (DwellerP * 10000) - (DwellerE * 1000) - (DwellerC * 100) - (DwellerI * 10);
		int DwellerL = (SPECIAL_)-(DwellerS * 100000) - (DwellerP * 100000) - (DwellerE * 10000) - (DwellerC * 1000) - (DwellerI * 100) - (DwellerA * 10);

		//Outfit SPECIAL

		int OutfitS = (outfit_->getSPECIAL() / 1000000);
		int OutfitP = (outfit_->getSPECIAL() / 100000) - (OutfitS * 10);
		int OutfitE = (outfit_->getSPECIAL() / 10000) - (OutfitS * 100) - (OutfitP * 10);
		int OutfitC = (outfit_->getSPECIAL() / 1000) - (OutfitS * 1000) - (OutfitP * 100) - (OutfitE * 10);
		int OutfitI = (outfit_->getSPECIAL() / 100) - (OutfitS * 10000) - (OutfitP * 1000) - (OutfitE * 100) - (OutfitC * 10);
		int OutfitA = (outfit_->getSPECIAL()) - (OutfitS * 100000) - (OutfitP * 10000) - (OutfitE * 1000) - (OutfitC * 100) - (OutfitI * 10);
		int OutfitL = (outfit_->getSPECIAL()) - (OutfitS * 100000) - (OutfitP * 100000) - (OutfitE * 10000) - (OutfitC * 1000) - (OutfitI * 100) - (OutfitA * 10);

		//Dweller SPECIAL _ Outfit Special (AKA kSPECIAL)

		S = DwellerS + OutfitS;
		P = DwellerP + OutfitP;
		E = DwellerE + OutfitE;
		C = DwellerC + OutfitC;
		I = DwellerI + OutfitI;
		A = DwellerA + OutfitA;
		L = DwellerL + OutfitL;

		//Loops for SPECIAL if they exceed 9 or fall below 0;
		//Strength
		if (S > 9)
		{
			S = 9;
		}

		if (S < 0)
		{
			S = 0;
		}
		//Perception
		if (P > 9)
		{
			P = 9;
		}

		if (P < 0)
		{
			P = 0;
		}
		//Endurance
		if (E > 9)
		{
			E = 9;
		}

		if (E < 0)
		{
			E = 0;
		}
		//Charisma
		if (C > 9)
		{
			C = 9;
		}

		if (C < 0)
		{
			C = 0;
		}
		//Intelligence
		if (I > 9)
		{
			I = 9;
		}

		if (I < 0)
		{
			I = 0;
		}
		//Agility
		if (A > 9)
		{
			A = 9;
		}

		if (A < 0)
		{
			A = 0;
		}
		//Luck
		if (L > 9)
		{
			L = 9;
		}

		if (L < 0)
		{
			L = 0;
		}
		//Putting it back into one entire integer
		SPECIAL_ = (S * 1000000) + (P * 100000) + (E * 10000) + (C * 1000) + (I * 100) + (A * 10) + (L * 1);
		return SPECIAL_;
	}

	if (outfit_ == 0) // If an outfit does not exist, simply return Dweller's SPECIAL values
	{
		return SPECIAL_;
	}
	return SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
	return health_;
}
const int Dweller::getCurrentRadDamage()
{
	return radiation_;
}

const int Dweller::getAttackDmg()
{
	return 0;
}

void Dweller::setPosition(const Vec2D& position_)
{
	this->position_ = Vec2D(0, 0);
	this-> position_ = position_;
}

const Vec2D  Dweller::getPosition()
{
	return position_;
}

void Dweller::receiveHealthDamage(const int& health_)
{
	if (health_ > 100 - radiation_)
	{
		this->health_ = (100 - radiation_);
	}
	this->health_ = health_;
}

void Dweller::receiveRadDamage(const int& radiation_)
{
	if (radiation_ > 100)
	{
		this->radiation_ = 100;
	}

	if (radiation_ < 100)
	{
		this->radiation_ = 100;
	}
	this->radiation_ = radiation_;
}

void Dweller::receiveEquipmentDamage(const int& durability_)
{
	
}

void Dweller::addStimpak(const int& stimpak_)
{
	this->stimpak_ = stimpak_;
}

void Dweller::addRadAway(const int& radaway_)
{
	this->radaway_ = radaway_;
}

void Dweller::useStimpak()
{
	this->stimpak_ -= 1;
	this->health_ += 20;
}

void Dweller::useRadAway()
{
	this->stimpak_ -= 1;
	this->health_ -= 10;
}

Outfit* Dweller::assignOutfit(Outfit* outfit_)
{
	return outfit_;
}
Weapon* Dweller::assignWeapon(Weapon* weapon_)
{
	return weapon_;
}

bool Dweller::isDead()
{
	bool isDead;

	if (health_ >= 1)
	{
		isDead = false;
	}

	if (health_ < 1)
	{
		isDead = true;
	}
	return isDead;
}
