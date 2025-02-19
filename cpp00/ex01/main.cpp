#include "phonebook.hpp"
#include <string>

int main(void){
	Phonebook phonebook;
	std::string cmd;

	while (true) {
		cmd = phonebook.get_input("Enter a command: ");
		if (cmd == "ADD")
			phonebook.add();
		else if (cmd == "SEARCH")
			phonebook.search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Invalid Command" << std::endl;
	}
	return (0);
}
