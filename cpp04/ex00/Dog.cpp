#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal("Dog") {
	std::cout << "Dog empty constructor" << std::endl;
}

Dog::Dog(const Dog &copy): Animal("Dog") {
	if (this != &copy)
		*this = copy;
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
	if (this != &copy)
		*this = copy;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "wouf wouf" << std::endl;
}
