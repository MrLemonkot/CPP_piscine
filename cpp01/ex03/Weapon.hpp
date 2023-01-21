#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

using namespace std;


class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string name);
		~Weapon();
		std::string	getType() const;
		void		setType(std::string type);
};

#endif
