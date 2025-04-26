#pragma once
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span(unsigned int n);
    Span(const Span &other);
	Span();
    Span& operator=(const Span &other);
    ~Span();

    void addNumber(int number);
    template <typename Iterator>
    void addRange(Iterator begin, Iterator end) {
        unsigned int distanceToAdd = std::distance(begin, end);
        if (_numbers.size() + distanceToAdd > _maxSize) {
            throw std::overflow_error("Cannot add range: would exceed maximum capacity");
        }
        _numbers.insert(_numbers.end(), begin, end);
    }
    int shortestSpan() const;
    int longestSpan() const;
};
