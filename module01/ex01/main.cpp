#include "Zombie.hpp"

int main() {
	Zombie	*arr = zombieHorde(10, "Sono uno zombi");
	int i = 0;
	while (i < 10)
		arr[i++].announce();
	delete []arr;
	return (0);
}
