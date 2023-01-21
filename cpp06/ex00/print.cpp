#include "convert.hpp"

void	printchar(t_variables *main) {
	if (main->f_c == 1)
		std::cout << "char:	" << "impossible" << std::endl;
	else if (main->f_c == 2)
		std::cout << "char:	" << "Non displayable" << std::endl;
	else
		std::cout << "char:	" << main->c << std::endl;
}

void	printint(t_variables *main) {
	if (main->f_i == 1)
		std::cout << "int:	" << "impossible" << std::endl; 
	else
		std::cout << "int:	" << main->i << std::endl;
}

void	printfloat(t_variables *main) {
	std::cout << "float:	" << main->f;
	if (main->f - static_cast<int>(main->f) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	printdouble(t_variables *main) {
	std::cout << "double:	" << main->d;
	if (main->d - static_cast<int>(main->d) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	print(t_variables *main) {
	
	if (main->f_d == 1 || main->f_f == 1) {
		std::cout << "char:	" << "impossible" << std::endl;
		std::cout << "int:	" << "impossible" << std::endl;
		std::cout << "float:	" << "impossible" << std::endl;
		std::cout << "double:	" << "impossible" << std::endl;
	} else {
		printchar(main);
		printint(main);
		printfloat(main);
		printdouble(main);
	}
}