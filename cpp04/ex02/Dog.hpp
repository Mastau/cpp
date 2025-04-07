#pragma once
#include "AAnimal.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		Dog(const Dog &copy);
		~Dog(void);
		Dog &operator=(const Dog &copy);
	private:
		void makeSound(void) const;
};

