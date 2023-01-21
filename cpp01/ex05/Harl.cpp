#include "Harl.hpp"

void	Harl::debug(void){
	std::cout << "[DEBUG]" << std::endl
	<<"I love having extra bacon for my "
	<<"7XL-double-cheese-triple-pickle-special-ketchup"
	<<"burger. I really do!" << std::endl;
}
void	Harl::info(void){
	std::cout << "[INFO]" << std::endl
	<< "I cannot believe adding extra bacon costs more money. "
	<<"You didn’t putenough bacon in my burger! "
	<<"If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning(void){
	std::cout << "[WARNING]" << std::endl
	<< "I think I deserve to have some extra bacon for free. "
	<< "I’ve been coming foryears whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error(void){
	std::cout << "[ERROR]" << std::endl
	<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

Harl::action Harl::funcs[4]= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

void	Harl::complain(std::string level){
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	uint8_t	i = 0;
	while ((levels[i] != level) && i < 4)
		++i;
	switch (i)
	{
	case 4:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	default:
		(this->*funcs[i])();
		break;
	}
}
//Harl::Harl(){}
//Harl::~Harl(){}
