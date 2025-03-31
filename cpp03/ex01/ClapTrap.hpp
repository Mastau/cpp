#pragma once

#include <string>
class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &copy);
		virtual void attack(const std::string &target);
		virtual void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
	protected:
		unsigned int _hitPts;
		unsigned int _energyPts;
		unsigned int _atkDmg;
		std::string _name;
};
