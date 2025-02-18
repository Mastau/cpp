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

int	Contact::new_contact(void) {
	
	if ((firstname = get_input("Enter firstname")).empty())
		return (1);
	if ((lastname = get_input("Enter lastname")).empty())
		return (1);
	if ((nickname = get_input("Enter nickname")).empty())
		return (1);
	if ((phonenumber = get_input("Enter phonenumber")).empty())
		return (1);
	if ((secret = get_input("Enter secret")).empty())
		return (1);
	return (0);
}
