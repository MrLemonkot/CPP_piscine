#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	current_contact = 0;
	getInfo();
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::getInfo()
{
	std::cout 		<<"+------------------------+\n"
					<<"|        Command         |\n"
					<<"|------------------------|\n"
					<<"|ADD      SEARCH     EXIT|\n"
					<<"+------------------------+\n";
}

void 	PhoneBook::AddContact()
{
	array_contacts[current_contact].createContact();
	current_contact++;
	if (current_contact == 8)
		current_contact = 0;
}

void	PhoneBook::printAtribute(std::string &atribut)
{
	if (atribut.length() > 10)
		std::cout << atribut.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << atribut << "|";
}

int		PhoneBook::printPhoneBook()
{
	int	i;
	
	std::cout	<<"+--------------------------------------+\n"
				<<"|Index |FirstName |LastName  |Nickname |\n"
				<<"+--------------------------------------+\n";
	for (i = 0; i < COUNT_CONTACT; i++)
	{
		if (array_contacts[i].getFirstname().empty())
			break;
		std::cout << "|" << std::setw(5) << i + 1 <<  "|";
		printAtribute(array_contacts[i].getFirstname());
		printAtribute(array_contacts[i].getLastname());
		printAtribute(array_contacts[i].getNickname());
		std::cout << "\n";
		
	}
	
	std::cout << "+---------------------------------------+\n";
	return i;
}

void	PhoneBook::SearchContact()
{
	int i;
	int input;
	
	if (array_contacts[0].getFirstname().empty())
	{
		std::cout << "Phone Book empty" << std::endl;
		return ;
	}

	i = printPhoneBook();
	std::cout << "write index :";
	std::cin >> input;
	
	if (input > 0 && input < i + 1)
	{
		std::cout<<"F:\t"<<array_contacts[input -1].getFirstname()<< std::endl;
		std::cout<<"L:\t"<<array_contacts[input -1].getLastname()<< std::endl;
		std::cout<<"N:\t"<<array_contacts[input -1].getNickname()<< std::endl;
		std::cout<<"Ph:\t"<<array_contacts[input -1].getPhoneNumber()<< std::endl;
		std::cout<<"Ds:\t"<<array_contacts[input -1].getDarkestSecret()<< std::endl;
	}
	else 
		std::cout<<"Wrong index!"<<std::endl;
	std::cin.clear();
	std::cin.ignore(245424, '\n');	
}

