#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	try
	{
		checkGrade(grade_to_sign);
	}
	catch (Form::GradeTooHighException &h)
	{
		std::cerr << "Grade to sign too high! Max grade 1! Form " << this->_name << " cant be created! Program exits" << std::endl;
		exit (-1);
	}
	catch (Form::GradeTooLowException &l)
	{
		std::cerr << "Grade to sign too low! Min grade 150! Form " << this->_name << " cant be created! Program exits" << std::endl;
		exit (-1);
	}

	try
	{
		checkGrade(grade_to_execute);
	}
	catch (Form::GradeTooHighException &h)
	{
		std::cerr << "Grade to execute too high! Max grade 1! Form " << this->_name << " cant be created! Program exits" << std::endl;
		exit (-1);
	}
	catch (Form::GradeTooLowException &l)
	{
		std::cerr << "Grade to execute too low! Min grade 150! Form " << this->_name << " cant be created! Program exits" << std::endl;
		exit (-1);
	}

	return;
}

Form::~Form(void)
{
	return;
}

Form::Form(Form const &src) : _name(src.getName()), _grade_to_sign(src.getGradeToSign()), _grade_to_execute(src.getGradeToExecute())
{
	*this = src;

	return;
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

int			Form::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

void	Form::checkGrade(int grade) const
{
	if (grade > 150)
		throw Form::GradeTooLowException();
	if (grade < 1)
		throw Form::GradeTooHighException();
}

void	Form::checkBurGrade(int grade) const
{
	if (grade > this->_grade_to_sign)
		throw Form::GradeTooLowException();
}

bool	Form::beSigned(Bureaucrat &bur)
{
	try
	{
		checkBurGrade(bur.getGrade());
	}
	catch(Form::GradeTooLowException &l)
	{
		return (false);
	}

	this->_signed = true;

	return (true);
}

std::ostream	&operator<<(std::ostream &out, Form *form)
{
	out << form->getName() << ", form grade to sign " << form->getGradeToSign()
	 	<< ", grade to execute " << form->getGradeToExecute() << ", sign status - ";
	if (form->getSigned() == true)
		out << "signed.";
	else
		out << "not signed.";
	return (out);
}