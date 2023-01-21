#include "Zombie.hpp"

int	main(void){
	Zombie	Stacker("Stacker");
	Stacker.announce();

	Zombie	*Mallocer;
	Mallocer = newZombie("Mallocer");
	Mallocer->announce();
	delete (Mallocer);
	randomChump("Random");
}
