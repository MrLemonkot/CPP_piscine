#include "FragTrap.hpp"



FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
	this->name = _name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Constructor called of FragTrap called " << this->name << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "Destructor called of FragTrap called " << this->name << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout <<"FragTrap " << this->name <<
	" says: GO HIGH FIVE!" << std::endl;
}
