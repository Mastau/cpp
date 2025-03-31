#include "ClapTrap.hpp"

int main(void) {
	ClapTrap claptrap("graou");
	ClapTrap claptrap2(claptrap);

	claptrap.attack("claptrap2");
	claptrap2.takeDamage(4);
	claptrap2.beRepaired(4);

	claptrap2.attack("graou");
	claptrap.takeDamage(3);
	claptrap.beRepaired(5);
}
