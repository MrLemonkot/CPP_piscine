#include "Animal.hpp"

Animal::Animal() : type("none") {
	cout << "Animal constructor called" << endl;
}

Animal::Animal(const Animal& origin) {
	*this = origin;
}

Animal& Animal::operator=(const Animal& origin) {
	this->type = origin.type;
	return (*this);
}

Animal::~Animal() {
	cout << "Animal destructor called" << endl;
}

void Animal::makeSound() {
	cout << "ABSTRACT ANIMAL IS MUTE" << endl;
}


string Animal::getType() {
	return (type);
}