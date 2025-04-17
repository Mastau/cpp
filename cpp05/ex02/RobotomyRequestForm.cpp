#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
	if (this != &copy) {
		AForm::operator=(copy);
		this->_target = copy._target;
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const {return this->_target;}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	AForm::execute(executor);
		std::srand(time(0));

	if (std::rand() % 2) {
		std::cout << executor.getName() << " has been robotomised successfully ! :D" << std::endl;
	} else {
		std::cout << executor.getName() << " robotomisation failed" << std::endl;
	}

}
