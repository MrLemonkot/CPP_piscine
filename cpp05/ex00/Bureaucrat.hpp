#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:

	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat	&operator=(Bureaucrat const &rhs);

	int				getGrade() const;
	std::string		getName() const;
	void			incrementGrade();
	void			decrementGrade();

private:
	const std::string	_name;
	int					_grade;

	void	checkGrade(int grade) const;

	class GradeTooHighException : public std::exception
	{
		
	};

	class GradeTooLowException : public std::exception
	{

	};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat *bur);

#endif
