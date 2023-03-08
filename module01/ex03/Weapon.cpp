#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string str)
{
    type = str;
}

Weapon::~Weapon()
{
    std::cout << "Class Weapon destroyed" << std::endl;
}

const std::string&	Weapon::getType()
{
    const std::string&  res = type;
    return (res);
}

void	Weapon::setType(std::string str)
{
    type = str;
}