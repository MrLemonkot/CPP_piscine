#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl	_Harl;

	int	i = 1;
	while (i < argc && argv[i])
		_Harl.complain(argv[i++]);
	return (0);
}
