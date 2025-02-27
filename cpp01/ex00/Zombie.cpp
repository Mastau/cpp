#include "Zombie.hpp"

void	Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* Zombie::Zombie(std::string n): name(n) {} */
Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << " destroyed" << std::endl;
}
