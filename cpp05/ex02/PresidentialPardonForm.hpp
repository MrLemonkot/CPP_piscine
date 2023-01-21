#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:

	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);

	int			execute(Bureaucrat const & executor) const;

	std::string	getTarget() const;
	void		checkSign() const;

private:

	std::string const _target;

	void	checkBurGradeExec(int grade) const;

	class FormNotSignedException : public std::exception
	{
		
	};
};

std::ostream	&operator<<(std::ostream &out, PresidentialPardonForm *form);

#endif
