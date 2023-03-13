#include "HumanB.hpp"

HumanB::HumanB(std::string  _name)
{
    name = _name;
}

HumanB::~HumanB() {};

void    HumanB::setWeapon(Weapon& _weapon)
{
    weapon = &_weapon;
}

void   HumanB:: attack()
{
    const std::string& str = weapon->getType();
    std::cout << name << " attacks with their " << str << std::endl;
}