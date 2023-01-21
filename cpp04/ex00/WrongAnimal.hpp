#pragma once

# include <iostream>
# include <string>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& origin);
	WrongAnimal& operator=(const WrongAnimal& origin);
	virtual ~WrongAnimal();

	void makeSound();
	virtual string getType();

protected:
	string type;
};
