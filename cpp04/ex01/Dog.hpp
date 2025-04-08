#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog &copy);
		~Dog(void);
		Dog &operator=(const Dog &copy);
		void setBrainIdear(const std::string &idea, unsigned char offset);
		std::string getBrainIdear(unsigned char offset);
	private:
		void makeSound(void) const;
		Brain *_brain;
};

