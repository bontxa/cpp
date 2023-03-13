#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie() {};

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::name_setter(std::string name)
{
	this->name = name;
}
