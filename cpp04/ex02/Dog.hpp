#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog& origin);
	Dog& operator=(const Dog& origin);
	~Dog();

	string getType();
	void makeSound();
	const string& getIdea(unsigned int index) const;
	void setIdea(unsigned int index, const string &idea);

protected:
	string type;
};
