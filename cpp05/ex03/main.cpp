#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include <exception>
#include <iostream>

void UnknownForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Intern luke;
	AForm *form = luke.makeForm("Random shit", "Darth Vader");
	std:: cout << *form;
	form->beSigned(yoda);
	form->execute(yoda);
	delete form;
}

void ShrubberyForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Intern luke;
	AForm *form = luke.makeForm("Shrubbery creation", "Yoda");
	std::cout << *form;
	form->beSigned(yoda);
	form->execute(yoda);
	delete form;
}

void RobotomyForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Intern luke;
	AForm *form = luke.makeForm("Robotomy request", "Yoda");
	std::cout << *form;
	form->beSigned(yoda);
	form->execute(yoda);
	delete form;
}

void PresidentialForm(void)
{
	Bureaucrat yoda("Yoda", 1);
	std::cout << yoda;
	Intern luke;
	AForm *form = luke.makeForm("Presidential pardon", "Yoda");
	std::cout << *form;
	form->beSigned(yoda);
	form->execute(yoda);
	delete form;
}

int main(void) 
{

	try { UnknownForm(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
	
	try { ShrubberyForm(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
	
	try { RobotomyForm(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
	
	try { PresidentialForm(); }
	catch (const std::exception &e) { std::cerr << "An error occurred: " << e.what() << std::endl; }
	std::cout << std::endl;
	
    return (0);
}
