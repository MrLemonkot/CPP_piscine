#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name){
	this->name = _name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "Constructor called of ScavTrap called " << this->name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called of ScavTrap called " << this->name << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->energyPoints <= 0){
		std::cout << "ScavTrap " << this->name << "if out of energy to attack " << target << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
	<< this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->name << " is now in in Gate keeper mode!" << std::endl;
}
