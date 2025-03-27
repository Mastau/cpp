#include "Zombie.hpp"

int main(void) {
	int nb = 50;
	Zombie *horde = zombieHorde(nb, "Graou");
	if (horde) {
		for (int i = 0; i < nb; i++) {
			horde[i].announce();
		}
		delete[] horde;
	}
}
