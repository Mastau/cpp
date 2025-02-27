#include "Zombie.hpp"

int	main(void) {
	Zombie *zombie = newZombie("graou");
	zombie->announce();
	randomChump("Graou2");
	delete zombie;
	return (0);
}
