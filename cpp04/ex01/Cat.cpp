#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain), type("Cat") {
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
	brain = new Brain(*origin.brain);
	return (*this);
}

Cat::~Cat() {
	delete brain;
	cout << "Cat destructor called" << endl;
}

void Cat::makeSound() {
	cout << "MEOW! MEOW! MEOW!" << endl;
}

string Cat::getType() {
	return (type);
}

const string &Cat::getIdea(unsigned int index) const {
	return brain->getIdea(index);
}

void Cat::setIdea(unsigned int index, const string &idea) {
	brain->setIdea(index, idea);
}
