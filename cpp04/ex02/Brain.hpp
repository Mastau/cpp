#pragma once

#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(const Brain &copy);
		~Brain(void);
		Brain &operator=(const Brain &copy);
		std::string ideas[100];
};
