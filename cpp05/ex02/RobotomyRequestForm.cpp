#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", 72, 45), _target(src.getTarget())
{
	*this = src;

	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return(this->_target);
}

void	RobotomyRequestForm::checkSign(void) const
{
	if (this->_signed == false)
		throw RobotomyRequestForm::FormNotSignedException();
}

void	RobotomyRequestForm::checkBurGradeExec(int grade) const
{
	if (grade > this->_grade_to_execute)
		throw Form::GradeTooLowException();
}

int		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkSign();
	}
	catch (RobotomyRequestForm::FormNotSignedException &s)
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

	bool chanse = 0 + (rand() % (1 - 0 + 1)) == 1;

	std::cout << "bbbzzzzZZZZZZzzzz" << std::endl;
	if (chanse == true)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;

	return(0);
}

std::ostream	&operator<<(std::ostream &out, RobotomyRequestForm *form)
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