#include "sed.hpp"

int main(int ac, char **av){
	if (ac != 4)
		std::cout << "Error: Need 3 args (usage: ./replace <filename> <s1> <s2>)" << std::endl;
	replace(av[1], av[2], av[3]);
	return (0);
}
