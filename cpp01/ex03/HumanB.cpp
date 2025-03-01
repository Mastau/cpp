#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name), _Weapon(NULL){}
HumanB::~HumanB(void){};

void HumanB::setWeapon(Weapon &weapon) {
	_Weapon = &weapon;
}

void HumanB::attack(void) {
	if (_Weapon)
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their hands" << std::endl;
}
