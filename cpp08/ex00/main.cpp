#include "Easyfind.hpp"

int	main(void) {
{
	std::list<int>	lst;
	std::list<int>::const_iterator	it;

	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
		lst.push_back(rand());
	try {
		it = easyfind(lst, 3);
		std::cout << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	it = lst.begin();
	--it;
	while (++it != lst.end())
		std::cout << *it << std::endl;
	std::cout << std::endl;
}
{
	std::list<int>					lst;
	std::list<int>::const_iterator	it;

	for (int i = 0; i < 10; ++i)
		lst.push_back(i);
	try {
		it = easyfind(lst, 3);
		std::cout << *it << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
	return 0;
}