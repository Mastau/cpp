#include "Form.hpp"
#include <iostream>

Form::Form(void):
	_isSigned(false),
	_name("Form"),	
	_signGrade(150),
	_execGrade(150) {}

Form::Form(const std::string &name, int minGradeSign, int minGradeExec):
	_isSigned(false),
	_name(name),
	_signGrade(minGradeSign),
	_execGrade(minGradeExec)
	{
		if (_signGrade > 150 || _execGrade > 150)
			throw Form::GradeTooLowException();
		if (_signGrade < 1 || _execGrade < 1)
			throw Form::GradeTooHighException();
	}

Form::Form(const Form &copy):
	_isSigned(copy._isSigned),
	_name(copy._name),
	_signGrade(copy._signGrade),
	_execGrade(copy._execGrade) {}

Form::~Form(void) {}

Form &Form::operator=(const Form &copy)
{
	if (this != &copy)
	{
		_isSigned = copy._isSigned;
	}
	return *this;
}

bool Form::getIsSigned(void) const { return(_isSigned); }
const std::string &Form::getName(void) const { return(_name); }
int Form::getGradeSign(void) const { return (_signGrade); }
int Form::getGradeExec(void) const { return (_execGrade); }
void	Form::beSigned(const Bureaucrat &copy)
{
	if (getGradeSign() < copy.getGrade())
	{
		std::cout << copy.getName() << " couldn't sign " << this->_name << " because of grade too low." << std::endl;
		throw Form::GradeTooLowException();
	}
	std::cout << copy.getName() << " sign " << this->_name << "." << std::endl;
	this->_isSigned = true;
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too High.");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too Low.");
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Name : " << form.getName() << std::endl;
	out << "Is signed : " << (form.getIsSigned() ? "true" : "false") << std::endl;
	out << "Grade to sign : " << form.getGradeSign() << std::endl;
	out << "Grade to execute : " << form.getGradeExec() << std::endl;

	return (out);
}
