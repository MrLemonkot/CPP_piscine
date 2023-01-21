#include "convert.hpp"

void	toFloat(t_variables *main) {
	char*	err = NULL;

	main->f = static_cast<float> (strtof(main->str, &err));
	int	size = strlen(err);
	if (size == 0 || (size == 1 && err[0] == 'f'))
		main->f_f = 0;
	else
		main->f_f = 1;
}

void	toDouble(t_variables *main) {
	char*	err = NULL;

	main->d = static_cast<double> (strtod(main->str, &err));
	int	size = strlen(err);
	if (size == 0 || (size == 1 && err[0] == 'f'))
		main->f_d = 0;
	else
		main->f_d = 1;
}

void	toInt(t_variables *main) {
	if (isnan(main->f) || main->f_f == 1)
		main->f_i = 1;
	else
	{
		main->l = static_cast<long long>(main->d);
		if (main->l > INT_MAX || main->l < INT_MIN)
			main->f_i = 1;
		else
			main->i = static_cast<int>(main->l);
	}
}

void	toChar(t_variables *main) {
	main->c = static_cast<char> (main->i);
	if (main->f_i == 1 || main->l < 0 || main->l > 255)
		main->f_c = 1;
	else if (!isprint(main->c))
		main->f_c = 2;
}

void	shortconverter(t_variables *main) {
	main->c = static_cast<char> (main->str[0]);
	main->i = static_cast<int> (main->c); 
	main->f = static_cast<float> (main->i);
	main->d = static_cast<double> (main->i);
	if (!isprint(main->c))
		main->f_c = 2;
}

void	converter(t_variables *main) {
	if (strlen(main->str) == 1 && !isdigit(main->str[0]))
		shortconverter(main);
	else {
		toFloat(main);
		toDouble(main);
		toInt(main);
		toChar(main);
	}
	print(main);
}

