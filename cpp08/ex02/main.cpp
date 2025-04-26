#include "MutantStack.hpp"
#include <iostream>
#include <list>

void stackTest(void)
{
	std::cout << "mutant stack : " << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top : " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "top : " << mstack.top() << std::endl;
	std::cout << "size : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();

	for (; it != mstack.end(); it++)
	{
		std::cout << "value : " << *it << std::endl;
	}
}

void listTest(void)
{
	std::cout << "list test : " << std::endl;

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << "top : " << list.back() << std::endl;

	list.pop_back();
	std::cout << "top : " << list.back() << std::endl;
	std::cout << "size : " << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator l_it = list.begin();

	for (; l_it != list.end(); l_it++)
	{
		std::cout << "value : " << *l_it << std::endl;
	}
}

void reverseIterator(void)
{
	std::cout << "reverse iterator : " << std::endl;
	MutantStack<int> reverse;
	reverse.push(1);
	reverse.push(2);
	reverse.push(3);
	reverse.push(4);
	reverse.push(5);

	MutantStack<int>::reverse_iterator r_iter = reverse.rbegin();

	for (; r_iter != reverse.rend(); r_iter++)
	{
		std::cout << "value : " << *r_iter << std::endl;
	}
}

void copyConstructorTest(void)
{
	std::cout << "copy constructor : " << std::endl;

	MutantStack<int> mstack;

	mstack.push(1);
	mstack.push(3);
	mstack.push(5);
	mstack.push(7);
	mstack.push(11);

	MutantStack<int>::iterator it = mstack.begin();

	for (; it != mstack.end(); it++)
	{
		std::cout << "value : " << *it << std::endl;
	}

	MutantStack<int> copy(mstack);

	it = copy.begin();

	for (; it != copy.end(); it++)
	{
		std::cout << "copy value : " << *it << std::endl;
	}
}

int main(void)
{
	stackTest();
	std::cout << std::endl;

	listTest();
	std::cout << std::endl;

	reverseIterator();
	std::cout << std::endl;
	
	copyConstructorTest();
	std::cout << std::endl;

	return 0;
}
