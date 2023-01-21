#include "WrongAnimal.hpp"

string WrongAnimal::getType() {
	return (type);
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin) {
	type = origin.type;
};

WrongAnimal::WrongAnimal() : type("UNICORN") {
	cout << "WrongAnimal constructor called" << endl;
}

WrongAnimal::~WrongAnimal() {
	cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin) {
	this->type = origin.type;
	return (*this);
};

void WrongAnimal::makeSound() {
	cout <<"WRONG ANIMALS HAVE NO RIGHT TO TALK" << endl;
}
