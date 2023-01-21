#pragma once

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog& origin);
	Dog& operator=(const Dog& origin);
	~Dog();

	string getType();
	void makeSound();

protected:
	string type;
};
