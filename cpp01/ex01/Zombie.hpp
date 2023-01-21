#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <sstream>
# include <iostream>
# include <iomanip>
# include <string>

# ifndef uint
#  define uint unsigned int
# endif

class Zombie{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void 	announce();
		void	set_name(std::string name);

};
Zombie	*zombieHorde( int N, std::string name );
#endif
