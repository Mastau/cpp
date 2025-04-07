#pragma once

#include "AAnimal.hpp"

class Cat: public AAnimal {
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &copy);
	private:
		void makeSound(void) const;
};
