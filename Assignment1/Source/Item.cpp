#include "Item.h"


Item::Item()
{
}

Item::Item(const string kName, const int& durability_)
{
}


Item::~Item()
{
}

const int Item::getDurability()
{
	if (durability_ < 1)
	{
		std::cout << "Item is Destroyed" << std::endl;
	}
	return durability_;
}