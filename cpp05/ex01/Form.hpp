#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:

	Form(std::string name, int grade_to_sign, int grade_to_execute);
	~Form();
	Form(Form const &src);
	Form	&operator=(Form const &rhs);

	std::string	getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	bool		beSigned(Bureaucrat &bur);

private:

	std::string const _name;
	bool		_signed;
	int const	_grade_to_sign;
	int const	_grade_to_execute;

	void	checkGrade(int grade) const;
	void	checkBurGrade(int grade) const;


	class GradeTooHighException : public std::exception
	{
		
	};

	class GradeTooLowException : public std::exception
	{

	};
};

std::ostream	&operator<<(std::ostream &out, Form *bur);

#endif
