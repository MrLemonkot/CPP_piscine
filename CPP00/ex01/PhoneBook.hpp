#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define COUNT_CONTACT 8


#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		int		current_contact;
		Contact	array_contacts[COUNT_CONTACT];
		void	getInfo();
		int		printPhoneBook();
		void	printAtribute(std::string & atribut);

	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		void	SearchContact();
};

#endif
