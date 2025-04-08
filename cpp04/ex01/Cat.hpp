#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &copy);
		void setBrainIdear(const std::string &idea, unsigned char offset);
		std::string getBrainIdear(unsigned char offset);
	private:
		void makeSound(void) const;
		Brain *_brain;
};
