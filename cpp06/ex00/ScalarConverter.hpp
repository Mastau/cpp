#pragma once

#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
	public:
		static void convert(std::string &literal);
};

