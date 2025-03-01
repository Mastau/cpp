#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int nb): _rawBits(nb << _fractBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb): _rawBits(roundf(nb * (1 << _fractBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	/* std::cout << "getRawBits member function called" << std::endl; */
	return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &Fixed) {
	out << Fixed.toFloat();
	return (out);
}

float Fixed::toFloat(void) const { return ((float)this->_rawBits / (1 << this->_fractBits)); }
int Fixed::toInt(void) const { return (this->_rawBits >> this->_fractBits); }
