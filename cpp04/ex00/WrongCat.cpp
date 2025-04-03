#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
	std::cout << "cat empty constructor" << std::endl;
}

 WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal("Cat") {
	if (this != &copy)
		*this = copy;
	std::cout << "cat Copy constructor";
}

 WrongCat::~WrongCat(void) {
	std::cout << "Wrongcat Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << "bipmeow bopmeow" << std::endl;
}

 WrongCat &WrongCat::operator=(const WrongCat &copy) {
	if (this != &copy)
		*this = copy;
	return (*this);
}
