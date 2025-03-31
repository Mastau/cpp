#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap 
{
	public:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &copy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &copy);
		void highFivesGuys(void);
};

