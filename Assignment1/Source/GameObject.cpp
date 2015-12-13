#include "GameObject.h"

GameObject::GameObject(const string& kName)
	:kName(kName)
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

int GameObject::count_;