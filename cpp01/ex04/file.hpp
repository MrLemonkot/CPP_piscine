#ifndef FILE_HPP
# define FILE_HPP
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

class File
{
	private:
		std::string				_line;
		std::string				_file_name;
		std::string::iterator	_first;
		std::string::iterator	_second;
		std::string 			_new_file;
		std::string				_buff;
		std::ifstream*			_input_file;
		std::ofstream*			_output_file;
		std::string				_s1;
		std::string				_s2;

	public:
		File(std::string file_name, std::string s1, std::string s2);
		~File();
		void		set_input(std::ifstream& input);
		void		set_output(std::ofstream& output);
		std::string	get_file_name() const;
		std::string	get_line() const;
		std::string	get_new_file() const;
		std::string	get_s1() const;
		std::string	get_s2() const;
		void		read_file();
		void		change_file();
};

# endif
