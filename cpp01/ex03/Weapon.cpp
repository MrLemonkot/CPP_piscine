#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string	Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}
