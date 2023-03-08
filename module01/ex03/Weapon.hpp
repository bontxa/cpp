#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
//#include "HumanA.hpp"
//#include "HumanB.hpp"

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	Weapon(std::string str);
	~Weapon();
	const std::string&	getType();
	void	setType(std::string str);
};

#endif