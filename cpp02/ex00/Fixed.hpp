#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &val);
		Fixed				&operator=(const Fixed &val);
		int					getRawBits(void) const;
		void				setRawBits(int const val);

	private:
		int					_fixed_value;
		static const int	_fractional_bit = 8;
};

#endif