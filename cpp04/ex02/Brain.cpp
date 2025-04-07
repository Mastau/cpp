#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy){
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
	if (this == &copy)
		return (*this);
	for (size_t i = 0; i < 100; ++i)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}


