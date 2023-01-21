#pragma once

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *brain;

public:
	Cat();
	Cat(const Cat& origin);
	Cat& operator=(const Cat& origin);
	~Cat();

	string getType();
	void makeSound();
	const string& getIdea(unsigned int index) const;
	void setIdea(unsigned int index, const string &idea);

protected:
	string type;
};
