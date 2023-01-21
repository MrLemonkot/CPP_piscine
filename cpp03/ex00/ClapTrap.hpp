#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string 	name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int 	attackDamage;
	public:
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &copy);

		~ClapTrap();

		ClapTrap & operator=(const ClapTrap &assign);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
