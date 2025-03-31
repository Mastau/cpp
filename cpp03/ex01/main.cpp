#include "ScavTrap.hpp"
#include <iostream>
#include <ostream>

int main(void) {
	ScavTrap yes("ahhhhh");
	ScavTrap no("bhhhhhh");

	yes.attack("bhhhhhh");
	no.guardGate();

	std::cout << std::endl;

	ScavTrap ohNo;
	ohNo = yes;
	yes.attack("bhhhhhh");
	no.guardGate();

}
