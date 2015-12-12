#include "GameObject.h"

GameObject::GameObject()
{
	count_++;
}

GameObject::GameObject(const string& kName)
{

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
