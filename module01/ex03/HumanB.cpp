//#include "Weapon.hpp"
//#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string  _name)
{
    name = _name;
}

HumanB::~HumanB()
{
    std::cout << "Class HumanB destroyed" << std::endl;
}

void    HumanB::setWeapon(Weapon& _weapon)
{
    weapon = &_weapon;
}

void   HumanB:: attack()
{
    const std::string& str = weapon->getType();
    std::cout << name << " attacks with their " << str << std::endl;
}