#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &Weapon): _name(name), _Weapon(Weapon) {}
HumanA::~HumanA(void){}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _Weapon.getType() << std::endl;
}
