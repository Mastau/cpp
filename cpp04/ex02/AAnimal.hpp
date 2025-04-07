#pragma once

#include <string>

class AAnimal {
	public:
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &copy);
		AAnimal(void);
		virtual ~AAnimal(void);
		virtual const std::string &getType(void) const;
		virtual void makeSound(void) const = 0;
		virtual AAnimal &operator=(AAnimal const &copy);
	protected:
	  	std::string _type;
};
