#include "FragTrap.hpp"

int	main(){
	FragTrap	Bonnie("Bonnie");
	FragTrap	Clyde("Clyde");
	Bonnie.beRepaired(3);
	Clyde.attack("Bonnie");
	Bonnie.takeDamage(10);
	Clyde.highFivesGuys();
	return (0);
}
