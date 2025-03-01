#pragma once

#include <string>
class Harl {
	public:
		Harl();
		~Harl();
		void complain(std::string lvl);
	private:
		std::string _lvl[4];
		void	info(void);
		void	warning(void);
		void	error(void);
		void	debug(void);
		void (Harl::*_f[4])(void);
};
