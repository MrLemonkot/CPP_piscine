#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:

	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

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

std::ostream	&operator<<(std::ostream &out, ShrubberyCreationForm *form);

#endif
