#ifndef GameObject_H
#define GameObject_H

#include <string>

using std::string;

class GameObject
{
public:
	~GameObject();
	// Getting the name of  the object
	string getName();
	// Counting the number of objects of this type instantiated
	int getCount();
protected:
	GameObject(const string&);

private:
	// //Name of the Object
	const string kName;
	// Number of Objects of this type instantiated
	int count_;

};

#endif