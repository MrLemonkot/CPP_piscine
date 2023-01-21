#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


// int main()
// {
//     Intern someRandomIntern;

//     Form* rrf;

//     rrf = someRandomIntern.makeForm("robotomy request", "Bender");

//     Bureaucrat  olga("Olga", 2);

//     olga.signForm(*rrf);
//     olga.executeForm(*rrf);

//     exit(0);
// }


int main()
{
    Bureaucrat  tamara("Tamara", 150);
    Bureaucrat  anton("Anton", 140);
    Bureaucrat  lena("Lena", 50);
    Bureaucrat  olga("Olga", 2);
    Intern      student;

    std::cout << &tamara << std::endl;
    std::cout << &anton<< std::endl;
    std::cout << &lena << std::endl;
    std::cout << &olga << std::endl;

    std::cout << std::endl << std::endl;

    Form*   garden;

    garden = student.makeForm("CRAP", "code");

    garden = student.makeForm("shrubbery creation", "HOME");
//    ShrubberyCreationForm   garden("HOME");

    std::cout << garden << std::endl;
    olga.executeForm(*garden);
    tamara.signForm(*garden);
    std::cout << garden << std::endl;
    tamara.executeForm(*garden);
    
    anton.signForm(*garden);
    std::cout << garden << std::endl;
    tamara.executeForm(*garden);
    anton.executeForm(*garden);
    lena.executeForm(*garden);

    std::cout << std::endl << std::endl;

    Form    *rob;

    rob = student.makeForm("robotomy request", "ship");
//    RobotomyRequestForm     rob("ship");

    std::cout << rob << std::endl;
    olga.executeForm(*rob);
    anton.signForm(*rob);
    std::cout << rob << std::endl;
    lena.executeForm(*rob);
    olga.signForm(*rob);
    std::cout << rob << std::endl;
    lena.executeForm(*rob);
    olga.executeForm(*rob);
    lena.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);
    olga.executeForm(*rob);

    std::cout << std::endl << std::endl;

    Form*   prez;

    prez = student.makeForm("presidential pardon", "Boss");
 //   PresidentialPardonForm  prez("Boss");

    std::cout << prez << std::endl;
    olga.executeForm(*prez);
    anton.signForm(*prez);
    std::cout << prez << std::endl;
    lena.executeForm(*prez);
    olga.signForm(*prez);
    std::cout << prez << std::endl;
    lena.executeForm(*prez);
    olga.executeForm(*prez);
    std::cout << prez << std::endl;

    exit (0);
}
