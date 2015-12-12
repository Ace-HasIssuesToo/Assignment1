#include "Dweller.h"

Dweller::Dweller()
{
}

Dweller::Dweller(const string& kName, const int& SPECIAL)
{ 
}															 


Dweller::~Dweller()
{
}

const int Dweller::getSPECIAL()
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
	return SPECIAL_;
}

const int Dweller::getCurrentHealth()
{
	return health_;
}
const int Dweller::getCurrentRadDamage()
{
	return health_;
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
	this->health_ = 100;

	if (health_ > 100 - radiation_)
	{
		this->health_ = (100 - radiation_);
	}
	this->health_ = health_;
}

void Dweller::receiveRadDamage(const int& radiation_)
{

	this->radiation_ = 0;
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
	this->durability_ = durability_;
}

void Dweller::addStimpak(const int& stimpak_)
{
	this->stimpak_ = 0;
	this->stimpak_ = stimpak_;
}

void Dweller::addRadAway(const int& radaway_)
{
	this->radaway_ = 0;
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

Dweller::Outfit* assignOutfit(Outfit* outfit_)
{
	return 0;
}
Dweller::Weapon* assignWeapon(Weapon* weapon_)
{
	return 0;
}

bool Dweller::isDead()
{
	if (health_ >= 1)
	{
		bool isDead = false;
	}

	if (health_ < 1)
	{
		bool isDead = true;
	}
	return isDead;
}
