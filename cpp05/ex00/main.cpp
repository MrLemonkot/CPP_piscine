#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  *slowpock1 = new Bureaucrat("Tamara", 151);
    Bureaucrat  *slowpock2 = new Bureaucrat("Olga", 0);

    std::cout << slowpock1 << std::endl;
    std::cout << slowpock2 << std::endl;

    slowpock1->incrementGrade();
    slowpock1->incrementGrade();

    std::cout << slowpock1 << std::endl;

    slowpock1->decrementGrade();
    slowpock1->decrementGrade();
    slowpock1->decrementGrade();

    std::cout << slowpock1 << std::endl;

    slowpock2->decrementGrade();
    slowpock2->decrementGrade();

    std::cout << slowpock2 << std::endl;

    slowpock2->incrementGrade();
    slowpock2->incrementGrade();
    slowpock2->incrementGrade();

    std::cout << slowpock2 << std::endl;

    delete (slowpock1);
    delete (slowpock2);




    return (0);
}
