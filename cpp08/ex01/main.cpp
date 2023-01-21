#include "Span.hpp"

int	main(void) {
{
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "min - " << sp.shortestSpan() << std::endl;
	std::cout << "max - " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
}
{
	std::cout << std::endl;
	Span	sp1;

	sp1.addNumber(3);
	std::cout << "min - " << sp1.shortestSpan() << std::endl;
	std::cout << "max - " << sp1.longestSpan() << std::endl;
}
{
	std::cout << std::endl;
	Span	sp2 = Span(10);
	sp2.addMultipleNumbers(sp2.getN());
	// sp2.addMultipleNumbers(31); //mistake
	std::cout << "min - " << sp2.shortestSpan() << std::endl;
	std::cout << "max - " <<sp2.longestSpan() << std::endl;
}
	return 0;
}