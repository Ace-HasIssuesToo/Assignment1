#ifndef GameObject_H
#define GameObject_H

#include <iostream>
#include <string>

using std::string;

class GameObject
{
public:
	GameObject();
	~GameObject();
	string getName();
	static int getCount();
protected:
	GameObject(const string&);

private:
	const string kName;
	static int count_;

};

#endif