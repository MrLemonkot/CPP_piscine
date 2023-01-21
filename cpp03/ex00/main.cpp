#include "ClapTrap.hpp"

int	main(){
	ClapTrap	Bonnie("Bonnie");
	ClapTrap	Clyde("Clyde");
	Bonnie.beRepaired(3);
	Clyde.attack("Bonnie");
	Bonnie.takeDamage(0);
	return (0);
}
