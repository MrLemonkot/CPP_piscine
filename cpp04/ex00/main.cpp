#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	cout << "--------- Animal ---------" << endl;
	{
		Animal* a = new Animal();
		Animal* d = new Dog();
		Animal* c = new Cat();

		cout << d->getType() << endl;
		cout << c->getType() << endl;
		c->makeSound();
		d->makeSound();
		a->makeSound();

		delete a;
		delete d;
		delete c;
	}

	cout << "--------- WrongAnimal ---------" << endl;
	{
		WrongAnimal* wa = new WrongAnimal();
		WrongAnimal* wc = new WrongCat();

		cout << wc->getType() << endl;
		wc->makeSound();
		wa->makeSound();

		delete wa;
		delete wc;
	}

	return (0);
}