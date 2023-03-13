#include "HumanA.hpp"

HumanA::HumanA(std::string  _name, Weapon& _weapon)
{
    name = _name;
    weapon = &_weapon;
}

HumanA::~HumanA() {};

void   HumanA:: attack()
{
    const std::string& str = weapon->getType();
    std::cout << name << " attacks with their " << str << std::endl;
}