#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " has been created." << std::endl;
}

Zombie::Zombie()
{
//	this->_name = "NoName";
//	std::cout << "Zombie NoName has been created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " is dead." << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}


