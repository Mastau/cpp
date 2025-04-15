#pragma once

#include <exception>
#include <string>
#include <strstream>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const &copy);
		std::string getName(void) const;
		int getGrade(void) const;

		class GradeTooHighException;
		class GradeTooLowException;

		void promote(void);
		void demote(void);
	private:
		int _grade;
		const std::string _name;
};

class Bureaucrat::GradeTooHighException : public std::exception
{
	public:
		const char *what(void) const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception 
{
	public:
		const char *what(void) const throw();
};

std::ostrstream &operator<<(std::ostream &out, const Bureaucrat &ureaucrat);
