#include "ScavTrap.hpp"

int	main(){
	ScavTrap	Bonnie("Bonnie");
	ScavTrap	Clyde("Clyde");
	Bonnie.beRepaired(3);
	Clyde.attack("Bonnie");
	Bonnie.takeDamage(20);
	Clyde.guardGate();
	return (0);
}
