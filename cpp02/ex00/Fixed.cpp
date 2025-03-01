#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}
