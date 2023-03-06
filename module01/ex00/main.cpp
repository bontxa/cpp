#include "Zombie.hpp"

int main() {
	std::cout << "Zombie allocated in stack:" << std::endl;
	randomChump("zombieStack");
	std::cout << "Zombie allocated in heap:" << std::endl;
	Zombie *zombiHeap = newZombie("zombiHeap");
	zombiHeap->announce();
	delete zombiHeap;
	return (0);
}
