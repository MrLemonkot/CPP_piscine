#include "Dog.hpp"

Dog::Dog() : Animal(), type("Dog") {
	cout << "Dog constructor called" << endl;
}

Dog::Dog(const Dog& origin) : Animal(origin){
	*this = origin;
	cout << "Dog constructor called" << endl;
}

Dog& Dog::operator=(const Dog &origin)
{
	cout << "Assignment operator for Dog from Animal called." << endl;
	Animal::operator=(origin);
	return (*this);
}

Dog::~Dog() {
	cout << "Cat destructor called" << endl;
}


void Dog::makeSound() {
	cout << "BOW WOW! BOW WOW! BOW WOW!" << endl;
}

string Dog::getType() {
	return (type);
}
