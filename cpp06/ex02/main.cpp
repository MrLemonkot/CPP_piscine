#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	Base*	tmp;
	int	i = rand();
	int calc = i % 3;

	if (calc == 0)
		tmp = new A();
	else if (calc == 1)
		tmp = new B();
	else if (calc == 2)
		tmp = new C();
	return	tmp;
}

void	identify(Base* p) {
	if (p == dynamic_cast<A *>(p))
		std::cout << "Type of class pointer:		A" << std::endl;
	else if (p == dynamic_cast<B *>(p))
		std::cout << "Type of class pointer:		B" << std::endl;
	else if (p == dynamic_cast<C *>(p))
		std::cout << "Type of class pointer:		C" << std::endl;
}

void	identify(Base& p) {
	try {
		A& A_ref = dynamic_cast<A&>(p);
		(void) A_ref;
		std::cout << "Type of class reference:	A" << std::endl;
	} catch (const std::exception& ex) {}
	try {
		B& B_ref = dynamic_cast<B&>(p);
		(void) B_ref;
		std::cout << "Type of class reference:	B" << std::endl;
	} catch (const std::exception& ex) {}
	try {
		C& C_ref = dynamic_cast<C&>(p);
		(void) C_ref;
		std::cout << "Type of class reference:	C" << std::endl;
	} catch (const std::exception& ex) {}
}


int	main(void) {
	srand(time(NULL));

	Base*	rand = generate();
	identify(rand);
	identify(*rand);
	std::cout << std::endl;

	Base*	rand1 = generate();
	identify(rand1);
	identify(*rand1);
	std::cout << std::endl;

	Base*	rand2 = generate();
	identify(rand2);
	identify(*rand2);


	delete rand;
	delete rand1;
	delete rand2;
	return 0;
}
