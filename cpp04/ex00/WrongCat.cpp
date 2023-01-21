#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal() {
	type = "WrongCat";
	cout << "WrongCat constructor called" << endl;
};

WrongCat::WrongCat(const WrongCat& origin) : WrongAnimal(origin) {
	*this = origin;
	cout << "WrongCat constructor called" << endl;
}

WrongCat& WrongCat::operator=(const WrongCat &origin) {
	cout << "Assignment operator for WrongCat from Animal called." << endl;
	WrongAnimal::operator=(origin);
	return (*this);
}

WrongCat::~WrongCat() {
	cout << "WrongCat destructor called" << endl;
}

void WrongCat::makeSound() {
	cout << "WRONG MEOW! WRONG MEOW!" << endl;
}

string WrongCat::getType() {
	return (type);
}
