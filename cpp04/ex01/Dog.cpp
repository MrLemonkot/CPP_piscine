#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain), type("Dog") {
	cout << "Dog constructor called" << endl;
}

Dog::Dog(const Dog& origin) : Animal(origin){
	*this = origin;
	cout << "Dog constructor called" << endl;
}

Dog& Dog::operator=(const Dog& origin)
{
	cout << "Assignment operator for Dog from Animal called." << endl;
	Animal::operator=(origin);
	brain = new Brain(*origin.brain);
	return (*this);
}

Dog::~Dog() {
	delete brain;
	cout << "Dog destructor called" << endl;
}

void Dog::makeSound() {
	cout << "BOW WOW! BOW WOW! BOW WOW!" << endl;
}

string Dog::getType() {
	return (type);
}

const string &Dog::getIdea(unsigned int index) const {
	return brain->getIdea(index);
}

void Dog::setIdea(unsigned int index, const string &idea) {
	brain->setIdea(index, idea);
}
