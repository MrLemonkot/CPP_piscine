#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string name;
		DiamondTrap();
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		void whoAmI();
		using ScavTrap::attack;
};

#endif
