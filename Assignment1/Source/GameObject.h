#ifndef GameObject_H
#define GameObject_H

#include <iostream>
#include <string>

using std::string;

class GameObject
{
public:
	~GameObject();
	string getName();
	static int getCount();
protected:
	GameObject(const string&  name);

private:
	const string kName;
	static int count_;

};

#endif