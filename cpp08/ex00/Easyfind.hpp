#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <list>
# include <iostream>
#include <algorithm>
# include <ctime>
# include <cstdlib>

template <class Type>
typename Type::const_iterator	easyfind(Type& cont, int elem) {
	typename Type::const_iterator	it = std::find(cont.begin(), cont.end(), elem); 
	if (it == cont.end())
		throw std::out_of_range("Element not found");
	return it;
}

#endif