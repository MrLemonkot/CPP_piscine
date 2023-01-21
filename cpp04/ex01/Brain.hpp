#pragma once

# include <iostream>

using std::string;
using std::cout;
using std::endl;

class Brain {
private:
	string ideas[100];

public:
	Brain();
	Brain(const Brain& origin);
	Brain& operator=(const Brain& origin);
	~Brain();

	const string& getIdea(unsigned int index) const;
	void setIdea(unsigned int index, const string& idea);
};






