#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget())
{
	*this = src;

	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
		this->_signed = rhs.getSigned();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return(this->_target);
}

void	ShrubberyCreationForm::checkSign(void) const
{
	if (this->_signed == false)
		throw ShrubberyCreationForm::FormNotSignedException();
}

void	ShrubberyCreationForm::checkBurGradeExec(int grade) const
{
	if (grade > this->_grade_to_execute)
		throw Form::GradeTooLowException();
}

int		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkSign();
	}
	catch (ShrubberyCreationForm::FormNotSignedException &s)
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

	std::ofstream	file(this->_target);

	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\ " << std::endl;
	file << " /~~         ~~\\ " << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;

	return(0);
}

std::ostream	&operator<<(std::ostream &out, ShrubberyCreationForm *form)
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