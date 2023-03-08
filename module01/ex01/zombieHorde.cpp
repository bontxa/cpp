#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombiArray = new Zombie[N];
	int	i = 0;

	while (i < N)
	{
		zombiArray[i].name_setter(name);
		zombiArray[i++].announce();
	}
	return zombiArray;
}
