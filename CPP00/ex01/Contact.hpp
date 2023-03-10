#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();
		
		void 		createContact();
		std::string &getFirstname();
		std::string &getLastname();
		std::string &getNickname();
		std::string &getPhoneNumber();
		std::string &getDarkestSecret();

};

#endif