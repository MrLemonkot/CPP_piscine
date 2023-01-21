#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:

	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);

	int			execute(Bureaucrat const & executor) const;

	std::string	getTarget() const;
	void		checkSign() const;

private:

	std::string const	_target;

	void	checkBurGradeExec(int grade) const;

	class FormNotSignedException : public std::exception
	{
		
	};
};

std::ostream	&operator<<(std::ostream &out, RobotomyRequestForm *form);

#endif
