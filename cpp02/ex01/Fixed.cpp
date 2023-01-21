#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	this->_fixed_value = 0;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Fixed::Fixed(const Fixed &val)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = val;
	return ;
}

Fixed::Fixed(const int &ival)
{
	std::cout
		<< "Int constructor called"
		<< std::endl;
	this->_fixed_value = ival << this->_fractional_bit;
}

Fixed::Fixed(const float &fval)
{
	std::cout
		<< "Float constructor called"
		<< std::endl;
	this->_fixed_value = roundf(fval * (1 << this->_fractional_bit));
}

Fixed	&Fixed::operator=(const Fixed &val)
{
	std::cout
		<< "Assignation operator called"
		<< std::endl;
	if (this != &val)
		this->_fixed_value = val.getRawBits();
	return (*this);
}

int	Fixed::toInt(void) const
{
	return (this->_fixed_value >> this->_fractional_bit);
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_value / (1 << this->_fractional_bit));
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed_value);
}

void	Fixed::setRawBits(int const val)
{
	this->_fixed_value = val;
	return ;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed)
{
	ostream << fixed.toFloat();
	return (ostream);
}
