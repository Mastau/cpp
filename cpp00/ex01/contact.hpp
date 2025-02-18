#pragma once

#include <string>
#include <iostream>

class Contact {
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string secret;
	
	public:
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string get_nickname(void);
		std::string get_phonenumber(void);
		std::string get_secret(void);
		std::string get_input(std::string str);
		int	new_contact(void);
};
