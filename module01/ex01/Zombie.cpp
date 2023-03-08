#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::name_setter(std::string name)
{
	this->name = name;
}
