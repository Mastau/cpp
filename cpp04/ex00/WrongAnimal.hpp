#pragma once

#include <string>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const std::string &type);
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal(void);
		WrongAnimal &operator=(const WrongAnimal &copy);
		void makeSound(void) const;
		const std::string &getType(void) const;
	protected:
		std::string _type;
};
