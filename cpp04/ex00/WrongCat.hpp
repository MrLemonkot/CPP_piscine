#pragma once

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& origin);
	WrongCat& operator=(const WrongCat& origin);
	~WrongCat();

	string getType();
	void makeSound();

protected:
	string type;
};
