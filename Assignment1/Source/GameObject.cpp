#include "GameObject.h"

GameObject::GameObject(const std::string& name)
	:kName(name)
{
	count_++;
}


GameObject::~GameObject()
{
	count_--;
}

string GameObject::getName()
{
	return kName;
}


int GameObject::getCount()
{
	return count_;
}
