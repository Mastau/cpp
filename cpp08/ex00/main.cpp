#include "Easyfind.hpp"

#include <vector>
#include <list>
#include <iostream>

int main() {
    try {
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        vec.push_back(40);
        vec.push_back(50);

        std::list<int> lst;
        lst.push_back(5);
        lst.push_back(15);
        lst.push_back(25);
        lst.push_back(35);
        lst.push_back(45);

        std::vector<int>::const_iterator itVec = easyFind(vec, 30);
        std::cout << "Found in vector: " << *itVec << std::endl;

        std::list<int>::const_iterator itLst = easyFind(lst, 25);
        std::cout << "Found in list: " << *itLst << std::endl;

        easyFind(vec, 100);
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

