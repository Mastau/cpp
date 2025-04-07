#pragma once
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog &copy);
		~Dog(void);
		Dog &operator=(const Dog &copy);
	private:
		void makeSound(void) const;
};

