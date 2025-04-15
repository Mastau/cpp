#include "Bureaucrat.hpp"

#include "iostream"
#include <ostream>

Bureaucrat::Bureaucrat(void) {
	std::cout << "Empty Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	*this = copy;
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Bureaucrat Desctructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
	{
		(std::string)this->_name = copy._name;
		this->_grade = copy._grade;
	}
	return (*this);
}

int Bureaucrat::getGrade(void) const {return this->_grade;}
std::string Bureaucrat::getName(void) const {return this->_name;}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {return ("Grade too High!");}
const char *Bureaucrat::GradeTooLowException::what(void) const throw() {return ("Grade too Low!");}

std::ostream &operator<<(std::ostream &out, const Bureaucrat bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::promote(void) {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::demote(void) {
	if (this->_grade == 150)
		throw  Bureaucrat::GradeTooLowException();
	this->_grade++;
}
