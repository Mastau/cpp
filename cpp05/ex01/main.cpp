#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

void test_grade(std::string name, int grade) {
    try {
        Form test(name, grade, 1);
		std::cout << test << std::endl;
    }
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << name << " grade sign to low err msg :" << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cerr << name << " grade sign to high err msg :" << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main() {
    Bureaucrat no("no", 100);
    Bureaucrat yes("yes", 1);

    Form yes_form("yes to yes", 10, 5);

    try {
        no.signForm(yes_form);
    } catch (std::exception &e) {
        std::cerr << "Exception when sign by no : " << e.what() << std::endl;
    }

    try {
        yes.signForm(yes_form);
    } catch (std::exception &e) {
        std::cerr << "Exception when sign by yes : " << e.what() << std::endl;
    }

    test_grade("high", 0);
    test_grade("low", 10000);
    test_grade("good", 10);
}

