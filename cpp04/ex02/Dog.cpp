#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): AAnimal("Dog") {
	std::cout << "Dog empty constructor" << std::endl;
	_brain = new Brain;
}

Dog::Dog(const Dog &copy): AAnimal("Dog") {
	if (this != &copy)
		*this = copy;
	_brain = new Brain;
	std::cout << "Dog Copy constructor" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(Dog const &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	this->_brain->operator=(*copy._brain);
	return (*this);
}

void Dog::setBrainIdear(const std::string &idea, unsigned char offset) {
	if (offset >= 100)
		return;
	_brain->ideas[offset] = idea;
}

std::string Dog::getBrainIdear(unsigned char offset) {
	if (offset < 100)
		return _brain->ideas[offset];
	return "";
}
void Dog::makeSound(void) const {
	std::cout << "wouf wouf" << std::endl;
}
