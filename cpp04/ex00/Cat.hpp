#pragma once

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &copy);
	private:
		void makeSound(void) const;
};
