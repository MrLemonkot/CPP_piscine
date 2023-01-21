#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &val);
		Fixed(const int &ival);
		Fixed(const float &fval);

		Fixed	&operator=(const Fixed &val);

		int		toInt(void) const;
		float	toFloat(void) const;
		
		int		getRawBits(void) const;
		void	setRawBits(int const val);

	private:
		int					_fixed_value;
		static const int	_fractional_bit = 8;
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);

#endif