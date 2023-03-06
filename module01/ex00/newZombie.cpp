#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie	*newZombi = new Zombie(name);
	return (newZombi);
}
