#include "Zombie.hpp"

int	main(void)
{
	uint	zombie_num = 10;
	Zombie	*zombies = zombieHorde(zombie_num, "autist");

	for (uint i = 0; i < zombie_num; ++i)
	{
		zombies[i].announce();
	}
	delete[] zombies;
	return (0);
}
