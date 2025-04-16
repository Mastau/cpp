#pragma once

#include <string>

class AForm;

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		~Bureaucrat(void);
		std::string getName(void) const;
		int getGrade(void) const;

		class GradeTooHighException;
		class GradeTooLowException;

		void promote(void);
		void demote(void);
		void signForm(AForm &form);
		void executeForm(const AForm &form);

		Bureaucrat &operator=(Bureaucrat const &copy);
		Bureaucrat &operator++(void);
		Bureaucrat  operator++(int);
		Bureaucrat &operator--(void);
		Bureaucrat  operator--(int);
	private:
		const std::string _name;
		int _grade;
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
