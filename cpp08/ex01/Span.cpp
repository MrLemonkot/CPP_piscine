#include "Span.hpp"

Span::Span() {
	std::cout << "Default constructor Span called" << std::endl;
	_N = 0;
}

Span::Span(int n) {
	std::cout << "Custom constructor Span called" << std::endl;
	_N = n;
}

Span::Span(const Span& other) {
	std::cout << "Copy constructor Span called" << std::endl;
	_N = other._N;
	_array = other._array;
}

Span&	Span::operator=(const Span& other) {
	std::cout << "Copy assignment operator Span called" << std::endl;
	this->_N = other._N;
	this->_array = other._array;
	return *this;
}

Span::~Span() {
	std::cout << "Destructor Span called" << std::endl;
}

void	Span::addNumber(unsigned int i) {
	try {
		if (_array.size() == _N)
			throw std::range_error("There's no more room");
		this->_array.push_back(i);
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}	
}

int	Span::shortestSpan() {
	try {
		if (_array.size() < 2)
			throw Span::UnableFindSpan();
		int	min = INT_MAX;
		int tmp;

		std::sort(_array.begin(), _array.end());
		for (unsigned int i = 0; i < _array.size() - 1; ++i)
		{
			tmp = _array[i + 1] - _array[i];
			if (tmp < min)
				min = tmp;
		}
		return min;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 2147483647;
}

int	Span::longestSpan() {
	try {
		if (_array.size() < 2)
			throw Span::UnableFindSpan();
		int min;
		int max;

		min = *min_element(_array.begin(), _array.end());
		max = *max_element(_array.begin(), _array.end());
		return max - min;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

void	Span::addMultipleNumbers(unsigned int i){
	try {
		if (i > _N)
			throw std::logic_error("The operation \"addMultipleNumbers\" cannot be performed");
		srand(time(NULL));
		while (i-- > 0)
			addNumber(rand());
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

unsigned int	Span::getN(){
	return _N;
}
