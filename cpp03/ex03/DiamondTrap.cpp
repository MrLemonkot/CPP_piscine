#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout << "Constructor called of DiamondTrap called " << this->name << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor called of DiamondTrap called " << this->name << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::cout << "I am " << this->name << " as DiamondTrap and "
	<< ClapTrap::name << " as ClapTrap" << std::endl;
}
