#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
	unsigned int nbOfPlace = 5;

	if (nbOfPlace < 0)
	{
		std::cout << "Invalid number of place in the chenil" << std::endl;
	}

	const Animal *chenil[nbOfPlace];

	for	(unsigned int i = 0; i < nbOfPlace; i++)
	{
		if (i & 1)
			chenil[i] = new Dog();
		else
			chenil[i] = new Cat();
	}

	std::cout << std::endl;

	for (unsigned int i = 0; i < nbOfPlace; i++)
	{
		std::cout << std::setw(3) << chenil[i]->getType() << " : ";
		chenil[i]->makeSound();
	}

	std::cout << std::endl;

	for (unsigned int i = 0; i < nbOfPlace; i++)
	{
		delete chenil[i];
	}

	return (0);
}
