#include "Mutant.hpp"

int	main() {
	MutantStack<int>	mstack;

	mstack.push(17);
	mstack.push(5);

	std::cout << "top - " << mstack.top() << std::endl;
	std::cout << std::endl;
	
	mstack.pop();
	std::cout << "size - " << mstack.size() << std::endl;
	std::cout << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(37);
	mstack.push(1);
	mstack.push(42);


	MutantStack<int>::iterator	it = mstack.begin();
	std::cout << "begin - " << *it << std::endl;
	MutantStack<int>::iterator	ite = mstack.end();
	ite--;
	std::cout << "end - " << *ite << std::endl;
	std::cout << std::endl;
	ite++;

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	return 0;
}
