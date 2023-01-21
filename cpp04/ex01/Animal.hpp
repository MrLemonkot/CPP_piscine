#pragma once

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class Animal
{
public:
	Animal();
	Animal(const Animal& origin);
	Animal& operator=(const Animal& origin);
	virtual ~Animal();

	virtual void makeSound();
	virtual string getType();

protected:
	string type;
};