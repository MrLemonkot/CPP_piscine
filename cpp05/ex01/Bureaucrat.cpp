#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	try
	{
		checkGrade(grade);
	}
	catch (Bureaucrat::GradeTooHighException &h)
	{
		std::cerr << "Grade too high! Max grade 1! Bureaucrat " << this->_name << " get max grade!" << std::endl;
		this->_grade = 1;
	}
	catch (Bureaucrat::GradeTooLowException	&l)
	{
		std::cerr << "Grade too low! Min grade 150! Bureaucrat " << this->_name << " get min grade!" << std::endl;
		this->_grade = 150;
	}
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName())
{
	*this = src;

	return;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

int		Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		this->_grade--;
		checkGrade(this->_grade);
	}
	catch (Bureaucrat::GradeTooHighException &h)
	{
		std::cerr << "Grade too high! Max grade 1! Bureaucrat " << this->_name << " get max grade!" << std::endl;
		this->_grade = 1;
	}
	catch (Bureaucrat::GradeTooLowException	&l)
	{
		std::cerr << "Grade too low! Min grade 150! Bureaucrat " << this->_name << " get min grade!" << std::endl;
		this->_grade = 150;
	}
	return;
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		this->_grade++;
		checkGrade(this->_grade);
	}
	catch (Bureaucrat::GradeTooHighException &h)
	{
		std::cerr << "Grade too high! Max grade 1! Bureaucrat " << this->_name << " get max grade!" << std::endl;
		this->_grade = 1;
	}
	catch (Bureaucrat::GradeTooLowException	&l)
	{
		std::cerr << "Grade too low! Min grade 150! Bureaucrat " << this->_name << " get min grade!" << std::endl;
		this->_grade = 150;
	}
	return;
}

void	Bureaucrat::checkGrade(int grade) const
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signForm(Form &form)
{
	bool	rez;

	rez = form.beSigned(*this);
	if (rez == true)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
		std::cerr << this->_name << " couldn’t sign " << form.getName() << " because his grade is too low." << std::endl;
	
	return;
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat *bur)
{
	out << bur->getName() << ", bureaucrat grade " << bur->getGrade() << ".";

	return (out);
}