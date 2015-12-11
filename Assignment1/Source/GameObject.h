#ifndef GameObject_H
#define GameObject_H

#include <string>

using std::string;

class GameObject
{
public:
	GameObject();
	~GameObject();
	string getName();
	int getCount();
protected:
	GameObject(const string&);

private:
	const string kName;
	int count_;

};

#endif