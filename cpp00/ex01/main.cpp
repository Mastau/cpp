#include "phonebook.hpp"
#include <string>

int main(void){
	Phonebook phonebook;
	std::string cmd;

	while (true) {
		cmd = phonebook.get_input("Enter a command: ");
		if (cmd == "ADD")
		{
			if (phonebook.add())
				break ;
		}
		else if (cmd == "")
			break ;
	}
	return (0);
}
