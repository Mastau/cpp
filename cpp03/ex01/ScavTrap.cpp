#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap("default")
{
	this->_atkDmg = 20;
	this->_hitPts = 100;
	this->_energyPts = 50;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->_atkDmg = 20;
	this->_hitPts = 100;
	this->_energyPts = 50;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
	std::cout << this->_name << ": ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << this->_name << ": ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	if (this != &copy) {
		this->_name = copy._name;
		this->_hitPts = copy._hitPts;
		this->_energyPts = copy._energyPts;
		this->_atkDmg = copy._atkDmg;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (!this->_hitPts) {
		std::cout << this->_name << " have no health points!" << std::endl;
		return ;
	}
	else if (!this->_energyPts) {
		std::cout << this->_name << " have no energy points!" << std::endl;
		return ;
	}
	this->_energyPts--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_atkDmg << " points of damage!" << std::endl;
}
void ScavTrap::guardGate(void) { std::cout << this->_name << ": Happy CROUS Gate anniversary!" << std::endl; }

