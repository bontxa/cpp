#include "Zombie.hpp"

int main() {
	Zombie	*arr = zombieHorde(10, "Sono uno zombi");
	delete []arr;
	return (0);
}
