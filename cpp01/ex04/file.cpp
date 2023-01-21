#include "file.hpp"

File::File(std::string file_name, std::string s1, std::string s2)
{
	this->_file_name = file_name;
	this->_s1 = s1;
	this->_s2 = s2;
	this->_new_file = this->_file_name + ".replace";
}

File::~File()
{
	return ;
}

void		File::set_input(std::ifstream& input)
{
	this->_input_file = &input;
	return;
}

void		File::set_output(std::ofstream& output)
{
	this->_output_file = &output;
		return ;
}

std::string		File::get_file_name() const
{
	return this->_file_name;
}

std::string		File::get_line() const
{
	return this->_line;
}

std::string		File::get_new_file() const
{
	return this->_new_file;
}

std::string		File::get_s1() const
{
	return this->_s1;
}

std::string		File::get_s2() const
{
	return this->_s2;
}

void			File::read_file()
{
	std::size_t			pos;
	std::size_t			count = 0;

	while(std::getline(*(this->_input_file), this->_line))
	{
		pos = this->_line.find(this->_s1);
		if (pos == std::string::npos)
		{
			for (int i = 0; this->_line[i]; i++)
				*(this->_output_file) << this->_line[i];
			*(this->_output_file) << std::endl;
		}
		else
		{
			for (std::size_t i = 0; i < pos; i++)
			{
				count = i;
				*(this->_output_file) << this->_line[i];
			}
			for (std::size_t i = 0; i < this->_s2.length(); i++)
				*(this->_output_file) << this->_s2[i];
			count += this->_s1.length() + 1;
			while (this->_line[count])
			{
				*(this->_output_file) << this->_line[count];
				count++;
			}
			*(this->_output_file) << std::endl;
		}
	}
	return ;
}

void			File::change_file()
{
	return;
}
