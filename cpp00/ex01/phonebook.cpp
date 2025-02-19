#include "phonebook.hpp"
#include <cstdlib>

std::string Phonebook::get_input(std::string str) {
	std::string dest;
	
	do {
		std::cout << str;
		getline(std::cin, dest);
	} while (dest == "");

	return (dest);
}
Phonebook::Phonebook() {
	size = 0;
}
void Phonebook::add(void) {
	arr[size].new_contact();
	size == 7 ? size = 0 : size++;
}

void Phonebook::search(void) {
	if (arr[0].get_firstname() == "") {
		std::cout << "Phonebook empty" << std::endl;
		return ;
	} else {
		std::cout << std::setw(10) << "Index" << "|";
		std::cout << std::setw(10) << "First Name" << "|";
		std::cout << std::setw(10) << "Last Name" << "|";
		std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;
		int	max = 0;
		for (int i = 0; i < 8 && arr[i].get_firstname() != ""; i++) {
			std::cout << std::setw(10) << i + 1 << "|";
			arr[i].show_infos_short();
			std::cout << std::endl;
			max++;
		}
		int index;
		do {
			index = std::atoi(Phonebook::get_input("Enter valid index: ").c_str());
		} while (index < 1 || index > 8 || arr[index - 1].get_firstname() == "" );
		arr[index-1].show_infos();
	}
}
