#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main(void) {
	Bureaucrat knl("Kanel", 10);

	knl--;
	std::cout << knl << std::endl;
	knl++;
	std::cout << knl << std::endl;
	try {
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
		knl++;
	} catch (const std::exception &) {
	}
	
	ShrubberyCreationForm s;

	try {
		knl.signForm(s);
	} catch (std::exception &e) {
		knl.executeForm(s);
		std::cerr << "Error : " << e.what() << std::endl;
	}

	std::cout << knl << std::endl;
}
