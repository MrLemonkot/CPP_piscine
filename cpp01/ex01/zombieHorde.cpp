#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	(void)name;
	if (N <= 0)
		return (NULL);
		
	Zombie *horde = new Zombie[N];
	for (uint i = 0; i < (uint) N; i++)
		new (&horde[i]) Zombie(name);
	return (horde);
}
