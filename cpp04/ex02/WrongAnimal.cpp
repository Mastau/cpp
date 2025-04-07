#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void): _type("default") {
	std::cout << "WrongAnimal Empty constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type): _type(type) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	if (this != &copy)
		*this = copy;
	std::cout << "WrongAnimal Copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	if (this != &copy)
		*this = copy;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "pilipip bop" << std::endl;
}

const std::string &WrongAnimal::getType(void) const { return (this->_type); }
