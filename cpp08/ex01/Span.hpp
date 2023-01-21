#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

class Span {
private:
	unsigned int	_N;
	std::vector<int>	_array;
public:
	Span();
	Span(int n);
	Span(const Span& other);
	Span&	operator=(const Span& other);
	~Span();

	void	addNumber(unsigned int i);
	int	shortestSpan();
	int	longestSpan();

	void	addMultipleNumbers(unsigned int i);

	unsigned int	getN();

	class UnableFindSpan : public std::exception
	{
		public:
			virtual const char *what() const throw() {
				return "Array range is too small";
			}
	};
};

#endif