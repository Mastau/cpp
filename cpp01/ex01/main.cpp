#include "Zombie.hpp"

int main(void) {
	int nb = 0;
	Zombie *horde = zombieHorde(nb, "Graou");
	if (horde) {
		for (int i = 0; i < nb; i++) {
			horde[i].announce();
		}
		delete[] horde;
	}
}
