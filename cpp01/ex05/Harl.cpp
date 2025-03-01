#include "Harl.hpp"
#include <iostream>

Harl::Harl(void) {
	this->_f[0] = &Harl::info;
	this->_f[1] = &Harl::warning;
	this->_f[2] = &Harl::error;
	this->_f[3] = &Harl::debug;
	this->_lvl[0] = "INFO";
	this->_lvl[1] = "WARNING";
	this->_lvl[2] = "ERROR";
	this->_lvl[3] = "DEBUG";
}

Harl::~Harl(void) {}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::complain(std::string lvl) {
	for (int i = 0; i < 4; i++) {
		if (lvl == this->_lvl[i])
			(this->*_f[i])();
	}
}
