#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <stdlib.h>
# include <climits>
# include <cmath>

typedef struct s_variables {
	char		c;
	int			i;
	long long	l;
	float		f;
	double		d;

	char	*str;

	int		f_c;
	int		f_i;
	int		f_f;
	int		f_d;
}	t_variables;

void	converter(t_variables *main);
void	print(t_variables *main);

#endif