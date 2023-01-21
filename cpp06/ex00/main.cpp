#include "convert.hpp"

int	main(int argc, char **argv) {
	try {
		if (argc != 2)
			throw std::range_error("Incorrect number of arguments");
		t_variables	main = (t_variables){};;
		// main = (t_variables){};
		main.str = argv[1];

		converter(&main);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

// ./convert 0
// ./convert 1
// ./convert 42
// ./convert -42f
// ./convert 343fd
// ./convert 5115d
// ./convert -42f
// ./convert a
// ./convert f
// ./convert nan
// ./convert abba
// ./convert 2147483647