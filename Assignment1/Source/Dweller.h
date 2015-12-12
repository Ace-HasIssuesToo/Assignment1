#ifndef DWELLER_H
#define DWELLER_H

#include "Vec2D.h"
#include "Weapon.h"
#include "Outfit.h"

#include <string>

using std::string;

class Dweller :public Weapon, Outfit
{
public:
	Dweller();
	Dweller(const string&, const int&);
	~Dweller();

	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamage();
	const int getAttackDmg();
	void setPosition(const Vec2D&);
	const Vec2D getPosition();

	void receiveHealthDamage(const int&);
	void receiveRadDamage(const int&);
	void receiveEquipmentDamage(const int&);

	void addStimpak(const int);
	void addRadaway(const int);

	void useStimpak(const int);
	void useRadaway(const int);

	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);

	bool isDead();

private:
	Vec2D position_;
	int SPECIAL_;		//Dweller's Special Stats
	int health_;		//Dweller's Health
	int radiation_;		//Dweller's Radiation
	int stimpak_;		//How many stimpaks is the dweller holding
	int radaway_;		//How many radaways is the dweller holding
	Outfit* outfit_;	//What outfit is the dweller wearing
	Weapon* weapon_;	//What weapon is the weapon equiping
};

#endif