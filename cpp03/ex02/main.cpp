#include "FragTrap.hpp"
#include <iostream>
#include <ostream>

int main(void) {
	FragTrap yes("ahhhhh");
	FragTrap no("bhhhhhh");

	yes.attack("bhhhhh");
	no.highFivesGuys();


	yes.attack("bhhhhhh");

	std::cout << std::endl;

	FragTrap ohNo;
	ohNo = yes;
	yes.attack("bhhhhhh");
	ohNo.highFivesGuys();

}
