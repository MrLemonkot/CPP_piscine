#include "Intern.hpp"

Intern::Intern(void)
{
	this->_forms[0] = "shrubbery creation";
	this->_forms[1] = "robotomy request";
	this->_forms[2] = "presidential pardon";
	this->_pointer[0] = &Intern::shrubbery_creation;
	this->_pointer[1] = &Intern::robotomy_request;
	this->_pointer[2] = &Intern::presidential_pardon;

	return;
}

Intern::~Intern(void)
{
	return;
}

Intern::Intern(Intern const &src)
{
	this->_forms[0] = "shrubbery creation";
	this->_forms[0] = "robotomy request";
	this->_forms[0] = "presidential pardon";
	this->_pointer[0] = &Intern::shrubbery_creation;
	this->_pointer[1] = &Intern::robotomy_request;
	this->_pointer[2] = &Intern::presidential_pardon;

	*this = src;

	return;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	if (this == &rhs)
		return (*this);
	
	return (*this);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	Form*	form = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (name.compare(this->_forms[i]) == 0) // if (level.compare(levels[i]) == 0)
		{
			form = (this->*_pointer[i])(target);
			return (form);
		}
	}

	std::cerr << "Error! Form " << name << " does not exist!" << std::endl;

	return (form);
}

Form*	Intern::shrubbery_creation(std::string target)
{
	Form	*form = new ShrubberyCreationForm(target);

	std::cout << "Intern creates shrubbery creation form with target " << target << std::endl;

	return (form);
}

Form*	Intern::robotomy_request(std::string target)
{
	Form	*form = new RobotomyRequestForm(target);

	std::cout << "Intern creates robotomy request form with target " << target << std::endl;

	return (form);
}

Form*	Intern::presidential_pardon(std::string target)
{
	Form	*form = new PresidentialPardonForm(target);

	std::cout << "Intern creates presidential pardon form with target " << target << std::endl;

	return (form);
}