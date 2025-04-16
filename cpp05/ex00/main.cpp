#include "Bureaucrat.hpp"
#include <iostream>

void tooHighGradeConstructor(void)
{
	Bureaucrat graou("Graou", 151);
	std::cout << graou;
}

void tooLowGradeConstructor(void)
{
	Bureaucrat graou("graou", 0);
	std::cout << graou;
}

void tooHighpromote(void)
{
	Bureaucrat graou("graou", 1);
	std::cout << graou;
	graou.promote();
	std::cout << graou;
}

void tooLowdemote(void)
{
	Bureaucrat graou("graou", 150);
	std::cout << graou;
	graou.demote();
	std::cout << graou;
}

void goodpromote(void)
{
	Bureaucrat graou("graou", 150);
	std::cout << graou;
	graou.promote();
	std::cout << graou;
}

void gooddemote(void)
{
	Bureaucrat graou("graou", 1);
	std::cout << graou;
	graou.demote();
	std::cout << graou;
}


int main(void)
{
	try { tooHighGradeConstructor(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { tooLowGradeConstructor(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { tooHighpromote(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;
	
	try { tooLowdemote(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { goodpromote(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

	try { gooddemote(); }
	catch (std::exception & e) { std::cerr << "Caught exception: " << e.what() << std::endl; }
	std::cout << std::endl;

}

