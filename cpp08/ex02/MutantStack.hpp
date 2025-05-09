#pragma once

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack<T> &copy);
		~MutantStack(void);

		MutantStack<T> &operator=(const MutantStack<T> &copy);
	
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void);
		iterator end(void);
		
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator rbegin(void);
		reverse_iterator rend(void);
		
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator begin(void) const;
		const_iterator end(void) const;

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator rbegin(void) const;
		const_reverse_iterator rend(void) const;
};

# include "MutantStack.tpp"
