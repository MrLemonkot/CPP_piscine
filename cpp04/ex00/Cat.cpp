#include "Cat.hpp"

Cat::Cat() : Animal(), type("Cat") {
	cout << "Cat constructor called" << endl;
}

Cat::Cat(const Cat& origin) : Animal(origin){
	*this = origin;
	cout << "Cat constructor called" << endl;
}

Cat& Cat::operator=(const Cat &origin)
{
	cout << "Assignment operator for Cat from Animal called." << endl;
	Animal::operator=(origin);
	return (*this);
}

Cat::~Cat() {
	cout << "Cat destructor called" << endl;
}

void Cat::makeSound() {
	cout << "MEOW! MEOW! MEOW!" << endl;
}

string Cat::getType() {
	return (type);
}