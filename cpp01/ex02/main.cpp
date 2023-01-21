#include <iostream>

int	main(void){
	std::string	stringVar = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringVar;
	std::string	&stringREF = stringVar;

	std::cout << "String adress:" << &stringVar
	<< " value:" << stringVar << std::endl;

	std::cout << "PTR address:" << stringPTR
	<< " value:" << *stringPTR << std::endl;

	std::cout << "REF address:" << &stringREF
	<< " value:" << stringREF << std::endl;
	return (0);
}
