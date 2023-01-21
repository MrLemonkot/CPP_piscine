#include "PhoneBook.hpp"
#include "Contact.hpp"

int		main()
{
	PhoneBook	pbook;
	std::string	command;
	
	while (1)
	{
		std::cout << "Write command\n";
		std::cin >> command;
		
		if (command == "ADD")
			pbook.AddContact();
		else if (command == "SEARCH")
			pbook.SearchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Wrong command\n";
		
		clearerr(stdin);
		
		std::cin.clear();
		
	}
	return 0;
}