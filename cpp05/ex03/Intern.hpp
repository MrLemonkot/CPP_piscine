#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:

	Intern();
	~Intern();
	Intern(Intern const &src);
	Intern	&operator=(Intern const &rhs);

	Form*	makeForm(std::string name, std::string target);

private:

	std::string		_forms[3];
	Form*			(Intern::*_pointer[4])(std::string target);

	Form*	shrubbery_creation(std::string target);
	Form*	robotomy_request(std::string target);
	Form*	presidential_pardon(std::string target);
};

#endif
