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

bool Fixed::operator>(const Fixed &copy) const {
	return (this->_rawBits > copy.getRawBits());
}

bool Fixed::operator<(const Fixed &copy) const {
	return (this->_rawBits > copy.getRawBits());
}

bool Fixed::operator>=(const Fixed &copy) const {
	return (this->_rawBits >= copy.getRawBits());
}

bool Fixed::operator<=(const Fixed &copy) const {
	return (this->_rawBits >= copy.getRawBits());
}

bool Fixed::operator!=(const Fixed &copy) const {
	return (this->_rawBits != copy.getRawBits());
}

bool Fixed::operator==(const Fixed &copy) const {
	return (this->_rawBits == copy.getRawBits());
}

/* bool Fixed::operator===(const Fixed &copy) const { */
/* 	return (this->_rawBits === copy.getRawBits()); */
/* } */
/*  */
/* bool Fixed::operator!==(const Fixed &copy) const { */
/* 	return (this->_rawBits !== copy.getRawBits()); */
/* } */

Fixed Fixed::operator+(const Fixed &copy) const {
	return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed Fixed::operator*(const Fixed &copy) const {
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed Fixed::operator-(const Fixed &copy) const {
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed Fixed::operator/(const Fixed &copy) const {
	return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return (*this);
}

Fixed &Fixed::operator--(void) {
	this->_rawBits--;
	return (*this);
}

Fixed &Fixed::operator++(void) {
	this->_rawBits++;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed n(*this);
	this->_rawBits--;
	return (n);
}

Fixed Fixed::operator++(int) {
	Fixed n(*this);
	this->_rawBits++;
	return (n);
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

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2) {
	return (nb1 < nb2 ? nb1 : nb2);
}

const Fixed &Fixed::min(const Fixed &nb1, const Fixed &nb2) {
	return (nb1 < nb2 ? nb1 : nb2);
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2) {
	return (nb1 > nb2 ? nb1 : nb2);
}

const Fixed &Fixed::max(const Fixed &nb1, const Fixed &nb2) {
	return (nb1 > nb2 ? nb1 : nb2);
}
