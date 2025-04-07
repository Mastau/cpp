#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): _type("default"){
	std::cout << "empty animal constructor called" << std::endl;
}

Animal::Animal(const std::string &type): _type(type) {
	std::cout << "default animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
	if (this != &copy)
		*this = copy;
	std::cout << "Copy animal constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "animal Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &copy) {
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

const std::string &Animal::getType(void) const { return this->_type;}

void Animal::makeSound(void) const {
	std::cout << "grrrr paw" << std::endl;
}

