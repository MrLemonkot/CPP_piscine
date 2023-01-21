#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called of ClapTrap called " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called of ClapTrap " << std::endl;
	*this = copy;
}


ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called of ClapTrap called " << this->name << std::endl;
}


ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->attackDamage = assign.attackDamage;
	this->energyPoints = assign.energyPoints;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	if (this->energyPoints <= 0){
		std::cout << "ClapTrap " << this->name << "if out of energy to attack " << target << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
	<< this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoints <= amount){
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
		return ;
	}
	this->hitPoints-=amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints <= 0){
		std::cout << "ClapTrap " << this->name << "is out of energy for healing!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " heals for " << amount << "hit points!" << std::endl;
	this->hitPoints+=amount;
	this->energyPoints-=1;
}
