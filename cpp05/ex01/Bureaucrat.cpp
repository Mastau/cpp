#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <ostream>

Bureaucrat::Bureaucrat(void) {
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	*this = copy;
}

Bureaucrat::~Bureaucrat(void) {
}
void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
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
Bureaucrat &Bureaucrat::operator++(void) {
    _grade--;
    if (_grade < 1)
        throw GradeTooHighException();
    return (*this);
}

Bureaucrat Bureaucrat::operator++(int) {
    Bureaucrat old = *this;
    _grade--;
    if (_grade < 1)
        throw GradeTooHighException();
    return (old);
}

Bureaucrat &Bureaucrat::operator--(void) {
    _grade++;
    if (_grade > 150)
        throw GradeTooLowException();
    return (*this);
}
Bureaucrat Bureaucrat::operator--(int) {
    Bureaucrat old = *this;
    _grade++;
    if (_grade > 150)
        throw GradeTooLowException();
    return (old);
}
int Bureaucrat::getGrade(void) const {return this->_grade;}
std::string Bureaucrat::getName(void) const {return this->_name;}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {return ("Grade too High!");}
const char *Bureaucrat::GradeTooLowException::what(void) const throw() {return ("Grade too Low!");}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
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
