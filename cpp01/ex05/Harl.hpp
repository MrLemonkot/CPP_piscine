#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# ifndef uint8_t
#  define uint8_t unsigned char
# endif

class Harl
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		typedef void(Harl::*action)(void);
		static action funcs[4];
	public:
		void	complain( std::string level );
};

#endif
