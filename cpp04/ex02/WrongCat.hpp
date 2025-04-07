#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		~WrongCat(void);
		WrongCat &operator=(const WrongCat &copy);
	private:
		void makeSound(void) const;
};
