#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal *animals[4];

	for (int i = 0; i < 2; ++i)
		animals[i] = new Cat();
	for (int i = 2; i < 4; ++i)
		animals[i] = new Dog();

	Dog *dog = (Dog *)animals[3];

	cout << "Dog idea: " << dog->getIdea(0) << endl;
	dog->setIdea(0, "I want to sleep");
	cout << "Dog idea: " << dog->getIdea(0) << endl << endl;

	Dog doggy = *dog;
	cout << "Doggy idea: " << doggy.getIdea(0) << endl;
	doggy.setIdea(0, "I want to walk!");
	cout << "Doggy idea: " << doggy.getIdea(0) << endl;
	cout << "Dog idea: " << dog->getIdea(0) << endl;

	for (int i = 0; i < 4; ++i)
		delete animals[i];
}
