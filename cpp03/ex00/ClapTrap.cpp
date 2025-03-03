#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPts = 10;
	this->_energyPts = 10;
	this->_atkDmg = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	if (this != &copy) {
		this->_name = copy._name;
		this->_hitPts = copy._hitPts;
		this->_energyPts = copy._energyPts;
		this->_atkDmg = copy._atkDmg;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (!this->_energyPts) {
		std::cout << this->_name << " have no energy points!" << std::endl;
		return ;
	}
	this->_energyPts--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_atkDmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPts -= amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_energyPts) {
		std::cout << this->_name << " have no energy points!" << std::endl;
		return ;
	}
	this->_energyPts--;
	this->_hitPts += amount;
	std::cout << "ClapTrap " << this->_name << " be repared " << amount << " health points!" << std::endl;
}
