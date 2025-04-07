#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(const std::string &type) : _type(type){
	std::cout << "AAnimal default constructor called" << std::endl;
}
AAnimal::AAnimal(void) : _type("AAnimal") {
	std::cout << "AAnimal empty constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
  if (this != &src)
    *this = src;
  std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal Destructor called" << std::endl;
}

const std::string &AAnimal::getType(void) const { return _type; }

void AAnimal::makeSound(void) const {
  std::cout << "bipbilibop connecting to the internet.." << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &src) {
  if (this != &src)
    this->_type = src.getType();
  return (*this);
}

