#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

void	Contact::createContact()
{
	std::cout << "Write first_name :" << std::endl;
	std::cin >> first_name;
	
	std::cout << "Write last_name :" << std::endl;
	std::cin >> last_name;

	std::cout << "Write nickname :" << std::endl;
	std::cin >> nickname;

	std::cout << "Write phone_number :" << std::endl;
	std::cin >> phone_number;
	
	std::cout << "Write darkest_secret :" << std::endl;
	std::cin >> darkest_secret;
}

std::string &Contact::getFirstname()
{
	return first_name;
}

std::string &Contact::getLastname()
{
	return last_name;	
}

std::string &Contact::getNickname()
{
	return nickname;
}

std::string &Contact::getPhoneNumber()
{
	return phone_number;
}

std::string &Contact::getDarkestSecret()
{
	return darkest_secret;
}

