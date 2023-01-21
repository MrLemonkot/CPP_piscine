#pragma once

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &origin);
	Cat& operator=(const Cat &origin);
	~Cat();

	string getType();
	void makeSound();

protected:
	string type;
};
