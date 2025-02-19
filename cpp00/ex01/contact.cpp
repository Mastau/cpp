#include "contact.hpp"

std::string Contact::get_firstname(void){ return firstname; }
std::string Contact::get_lastname(void){ return lastname; }
std::string Contact::get_nickname(void){ return nickname; }
std::string Contact::get_phonenumber(void){ return phonenumber; }
std::string Contact::get_secret(void){ return secret; }

std::string Contact::get_input(std::string str) {
	std::string dest;
	
	do {
		std::cout << str;
		getline(std::cin, dest);
	}while (dest.empty());

	return (dest);
}

void	Contact::new_contact(void) {
	firstname = get_input("Enter firstname: ");
	lastname = get_input("Enter lastname: ");
	nickname = get_input("Enter nickname: ");
	phonenumber = get_input("Enter phone number: ");
	secret = get_input("Enter secret: ");
}

void	Contact::show_infos_short(void) {
	std::string firstname = (get_firstname().length() > 10 ? get_firstname().substr(0, 9) + "." : get_firstname());
	std::string lastname = (get_lastname().length() > 10 ? get_lastname().substr(0, 9) + "." : get_lastname());
	std::string nickname = (get_nickname().length() > 10 ? get_nickname().substr(0, 9) + "." : get_nickname());

	std::cout << std::setw(10) << firstname << "|";
	std::cout << std::setw(10) << lastname << "|";
	std::cout << std::setw(10) << nickname << "|";
}

void	Contact::show_infos(void) {
	std::cout << "Firstname: " + get_firstname() << std::endl;
	std::cout << "Lastname: " + get_lastname() << std::endl;
	std::cout << "Nickname: " + get_nickname() << std::endl;
	std::cout << "Phone number: " + get_phonenumber() << std::endl;
	std::cout << "Darkest Secret: " + get_secret() << std::endl;
}

