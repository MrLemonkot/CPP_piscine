#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("presidential pardon", 25, 5), _target(src.getTarget())
{
	*this = src;

	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return(this->_target);
}

void	PresidentialPardonForm::checkSign(void) const
{
	if (this->_signed == false)
		throw PresidentialPardonForm::FormNotSignedException();
}

void	PresidentialPardonForm::checkBurGradeExec(int grade) const
{
	if (grade > this->_grade_to_execute)
		throw Form::GradeTooLowException();
}

int		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkSign();
	}
	catch (PresidentialPardonForm::FormNotSignedException &s)
	{
		std::cerr << this->_name << " not signed!" << std::endl;
		return(-2);
	}

	try
	{
		this->checkBurGradeExec(executor.getGrade());
	}
	catch(Form::GradeTooLowException &l)
	{
		return (-1);
	}

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;

	return(0);
}

std::ostream	&operator<<(std::ostream &out, PresidentialPardonForm *form)
{
	out << form->getName() << ", form grade to sign " << form->getGradeToSign()
	 	<< ", grade to execute " << form->getGradeToExecute() << ", sign status - ";
	if (form->getSigned() == true)
		out << "signed.";
	else
		out << "not signed.";
	out << " Form's target is " << form->getTarget();
	return (out);
}