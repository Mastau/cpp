#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    {
        std::cout << "=== Basic Test ===" << std::endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }
    {
        std::cout << "\n=== 10,000 Numbers Test ===" << std::endl;
        srand(time(NULL));
        
        Span bigSpan(10000);
        
        std::vector<int> numbers;
        for (int i = 0; i < 10000; ++i) {
            numbers.push_back(rand() % 100000);
        }
        
        try {
            bigSpan.addRange(numbers.begin(), numbers.end());
            std::cout << "Successfully added 10,000 numbers using addRange" << std::endl;
            std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
            std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
    }
    {
        std::cout << "\n=== Exception Handling Tests ===" << std::endl;
        
        try {
            Span sp = Span(2);
            sp.addNumber(1);
            sp.addNumber(2);
            sp.addNumber(3);
        } catch (const std::exception& e) {
            std::cout << "Exception caught (as expected): " << e.what() << std::endl;
        }
        
        try {
            Span sp = Span(5);
            sp.addNumber(1);
            sp.shortestSpan(); 
        } catch (const std::exception& e) {
            std::cout << "Exception caught (as expected): " << e.what() << std::endl;
        }
        
        try {
            Span sp = Span(5);
            sp.longestSpan(); 
        } catch (const std::exception& e) {
            std::cout << "Exception caught (as expected): " << e.what() << std::endl;
        }
    }
    
    return 0;
}
