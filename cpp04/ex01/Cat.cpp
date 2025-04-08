#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void): Animal("Cat"){
	std::cout << "cat empty constructor" << std::endl;
	_brain = new Brain;
}

Cat::Cat(const Cat &copy) : Animal("Cat") {
	if (this != &copy)
		*this = copy;
	std::cout << "cat Copy constructor";
	_brain = new Brain;
}

Cat::~Cat(void) {
	std::cout << "cat Destructor called" << std::endl;
	delete _brain;
}

void Cat::setBrainIdear(const std::string &idea, unsigned char offset) {
	if (offset >= 100)
		return;
	_brain->ideas[offset] = idea;
}

std::string Cat::getBrainIdear(unsigned char offset) {
	if (offset < 100)
		return _brain->ideas[offset];
	return "";
}

void Cat::makeSound(void) const {
	std::cout << "meow meow" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	if (this == &copy)
		return (*this);
	this->_type = copy._type;
	this->_brain->operator=(*copy._brain);
	return (*this);
}
