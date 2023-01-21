#include "file.hpp"

void	test(std::string file_name, std::string s1, std::string s2)
{
	File	file(file_name, s1, s2);
	std::ifstream			input(file.get_file_name().c_str());

	if (input)
		file.set_input(input);
	else
	{
		std::cerr << "Failed to open file: " << file.get_file_name() << std::endl;
		return ;
	}
	std::ofstream			output(file.get_new_file().c_str());
	if (output)
		file.set_output(output);
	else
	{
		std::cerr << "Failed to create: " << file.get_new_file() << std::endl;
		return;
	}
	file.read_file();
	return ;
}


int main(int argc, char *argv[])
{
	if (argc != 4)
		std::cerr << "This program take 3 arguments [[./sed_is_for_loser] [arg_1] [arg_2] [arg_3]]";
	else
		test(argv[1], argv[2], argv[3]);
	return (0);
}
