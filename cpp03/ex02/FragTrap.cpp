/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thomarna <thomarna@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:25:38 by thomarna          #+#    #+#             */
/*   Updated: 2025/04/07 12:29:32 by thomarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

#include "iostream"

FragTrap::FragTrap(void) : ClapTrap("default")
{
	this->_energyPts = 100;
	this->_hitPts = 100;
	this->_atkDmg = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	this->_atkDmg = 30;
	this->_hitPts = 100;
	this->_energyPts = 100;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	*this = copy;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPts = copy._hitPts;
		this->_energyPts = copy._energyPts;
		this->_atkDmg = copy._atkDmg;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void) { std::cout << this->_name << ": High Fives!" << std::endl; }
