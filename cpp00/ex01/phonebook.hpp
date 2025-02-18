#pragma once

#include "contact.hpp"

class Phonebook {
	private:
		Contact arr[8];
		int	size;
	public:
		std::string get_input(std::string str);
		int	add(void);
		int	search(void);
		Phonebook();
};
