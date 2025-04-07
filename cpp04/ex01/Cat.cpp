#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal("Cat"){
	std::cout << "cat empty constructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat") {
	if (this != &copy)
		*this = copy;
	std::cout << "cat Copy constructor";
}

Cat::~Cat(void) {
	std::cout << "cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "meow meow" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	if (this != &copy)
		*this = copy;
	return (*this);
}
