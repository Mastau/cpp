#pragma once

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon &Weapon);
		~HumanA();
		void	attack();
	private:
		std::string _name;
		Weapon &_Weapon;
} ;
