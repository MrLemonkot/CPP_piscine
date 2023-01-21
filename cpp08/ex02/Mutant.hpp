#ifndef MUTANT_HPP
# define MUTANT_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <typename Type>
class MutantStack: public std::stack<Type> {
public:
	MutantStack<Type>() {};
	MutantStack<Type>(const MutantStack& other) {
		*this = other;
	};
	MutantStack<Type>&	operator=(const MutantStack& other) {
		std::stack<Type>::operator=(other);
		return *this;
	};
	~MutantStack<Type>() {};

	typedef typename std::stack<Type>::container_type::iterator	iterator;
	
	iterator	begin() { 
		return this->c.begin();
	};

	iterator	end() {
		return std::stack<Type>::c.end();
	};
};

#endif
