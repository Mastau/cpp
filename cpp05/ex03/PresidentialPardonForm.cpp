#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5), _target("Target"){

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5), _target(target) {
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
		
	}
	
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const { return(this->_target);}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	AForm::execute(executor);
	std::cout << getTarget() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
