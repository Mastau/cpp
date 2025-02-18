#include "phonebook.hpp"

std::string Phonebook::get_input(std::string str) {
	std::string dest;
	
	do {
		std::cout << str;
		getline(std::cin, dest);
	}while (dest == "");

	return (dest);
}
Phonebook::Phonebook(){
	size = 0;
}
int	Phonebook::add(void)
{
	if (arr[size].new_contact())
		return (1);
	size == 7 ? size = 0 : size++;
	return (0);
}
