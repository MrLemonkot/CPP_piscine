#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat  *slowpock1 = new Bureaucrat("Tamara", 150);
    Bureaucrat  *slowpock2 = new Bureaucrat("Olga", 2);
    Form paper1("otchet", 150, 1);
    Form *paper2 = new Form("super", 1, 1);

    std::cout << &paper1 << std::endl;
    slowpock1->signForm(paper1);
    std::cout << &paper1 << std::endl;
    std::cout << std::endl;

    std::cout << paper2 << std::endl;
    slowpock1->signForm(*paper2);
    std::cout << paper2 << std::endl;
    slowpock2->signForm(*paper2);
    std::cout << slowpock2 << std::endl;
    slowpock2->incrementGrade();
    std::cout << slowpock2 << std::endl;
    std::cout << paper2 << std::endl;
    slowpock2->signForm(*paper2);
    std::cout << paper2 << std::endl;
    std::cout << std::endl;

    Form *paper3 = new Form("God's_paper", 151, 0);
    delete (paper3);

    delete (paper2);
    delete (slowpock1);
    delete (slowpock2);

    return (0);
}
