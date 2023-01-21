#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " has been created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << "is died." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

