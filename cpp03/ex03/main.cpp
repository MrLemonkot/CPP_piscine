#include "DiamondTrap.hpp"

int	main(){
	DiamondTrap	Bonnie("Bonnie");
	DiamondTrap	Clyde("Clyde");
	Bonnie.beRepaired(3);
	Clyde.attack("Bonnie");
	Bonnie.takeDamage(30);
	Clyde.highFivesGuys();
	Clyde.whoAmI();
	Bonnie.whoAmI();
	return (0);
}
