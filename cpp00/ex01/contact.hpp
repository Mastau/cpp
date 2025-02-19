#pragma once

#include <string>
#include <iostream>
#include <iomanip>

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
		void	new_contact(void);
		void	show_infos_short(void);
		void	show_infos(void);
};
