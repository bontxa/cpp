//#include "Weapon.hpp"
#include "HumanA.hpp"
//#include "HumanB.hpp"

HumanA::HumanA(std::string  _name, Weapon& _weapon)
{
    name = _name;
    weapon = &_weapon;
}

HumanA::~HumanA()
{
    std::cout << "Class HumanA destroyed" << std::endl;
}

void   HumanA:: attack()
{
    const std::string& str = weapon->getType();
    std::cout << name << " attacks with their " << str << std::endl;
}