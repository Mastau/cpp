#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <iomanip>

int main() {
  std::cout << "delete test:" << std::endl;
  {
    Animal *zoo[10];

    for (int i = 0; i < 5; i++) {
      zoo[i] = new Cat();
    }

    for (int i = 5; i < 10; i++) {
      zoo[i] = new Dog();
    }

    for (int i = 0; i < 10; i++) {
      delete zoo[i];
    }
  }
  std::cout << "copy test:" << std::endl;
  {
    Cat *a = new Cat();
    for (int i = 0; i < 10; i++) {
      std::string idea = "idea_" + std::string(1, '0' + i);
      a->setBrainIdear(idea, i);
      std::cout << i << " " << a->getBrainIdear(i) << std::endl;
    }
    std::cout << std::endl;
    Cat b;
    b = *a;
    for (int i = 0; i < 10; i++)
      std::cout << i << " " << b.getBrainIdear(i) << std::endl;
    delete a;
  }
}
