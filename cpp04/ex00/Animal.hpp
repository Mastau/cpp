#pragma once

#include <string>

class Animal {
	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &copy);
		const std::string &getType(void) const;
		virtual void makeSound(void) const;
	protected:
		std::string _type;
};
