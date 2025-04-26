#include "Iter.hpp"
#include <iostream>

void	increment(int &nb) {
	nb++;
}

void	printInt(const int &nb) {
	std::cout << nb << std::endl;
}

int main(void) {
	int	arr[4] = {1, 2, 3, 4};

	iter(arr, 4, &printInt);
	std::cout << "incrementing" << std::endl;
	iter(arr, 4, &increment);
	iter(arr, 4, &printInt);
}
