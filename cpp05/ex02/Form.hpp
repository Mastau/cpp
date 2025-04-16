#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Form {
	public:
		Form(void);
		Form(const std::string &name, int minGradeSign, int minGradeExec);
		Form(const Form &copy);
		~Form(void);

		Form &operator=(const Form &copy);

		class GradeTooHighException;
		class GradeTooLowException;

		const std::string &getName(void) const;
		bool getIsSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;
		void beSigned(const Bureaucrat &copy);

	private:
		bool _isSigned;
		const std::string _name;
		const int _signGrade;
		const int _execGrade;
};

class Form::GradeTooHighException : public std::exception
{
	public:
		const char	*what(void) const throw();
};

class Form::GradeTooLowException : public std::exception
{
	public:
		const char	*what(void) const throw();
};

std::ostream &operator<<(std::ostream &out, const Form &form);
